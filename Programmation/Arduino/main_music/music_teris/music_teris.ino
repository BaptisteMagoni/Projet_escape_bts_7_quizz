int speakerPin = 9;

int length = 15; // the number of notes
char notes[] = "ccggaagffeeddc "; // a space represents a rest
int beats[] = { 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 4 };
int tempo = 300;

void playTone(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(tone);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(tone);
  }
}

void playNote(char note, int duration) {
  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
  int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956 };

  // play the tone corresponding to the note name
  for (int i = 0; i < 8; i++) {
    if (names[i] == note) {
      playTone(tones[i], duration);
    }
  }
}

void setup() {
  pinMode(speakerPin, OUTPUT);
}

void loop() {
  for (int i = 0; i < length; i++) {
    if (notes[i] == ' ') {
      delay(beats[i] * tempo); // rest
    } else {
      playNote(notes[i], beats[i] * tempo);
    }

    // pause between notes
    delay(tempo / 2); 
  }
}]


[code][//* Check for completed rows and clear them, then drop pieces above */
void dropFullRows(){
  byte theGridBlink[16]; // this will be a copy of the fixed-piece grid, but with full rows empty
                         // alternating between it and the actual fixed-piece grid will make the full rows blink
  int fullRows[4]; // to store the Y location of full rows. There can never be more than four at a time
  int fullRowCount=0;
  for (int row=0; row<16; row++){       // step through each row of the played grid
      if (theGrid[row]==B11111111){    // if the row is full then
        theGridBlink[row]=B00000000;   // set this row in the blinking version of the grid to empty.
        fullRows[fullRowCount]=row;    // record the position of the filled row
        fullRowCount++;                 // increment the count of full rows       
      }else{
        theGridBlink[row]=theGrid[row];// if it's not empty, duplicate the row from the played grid
      }
  }
  
 
  if (fullRowCount>0){                 // if there is a filled row, blink all filled rows 
    for (int blinkCount=0; blinkCount<3; blinkCount++){ 
    //blink the filled rows 3 times by alternating between the blink grid and the played grid 
    // this section for blink grid 
      matrixTop.clear();              // clear the top matrix
      matrixBottom.clear();           // clear the bottom matrix
      drawFixedPieces(theGridBlink);  // draw the blink version of the grid
      matrixTop.writeDisplay();       // update the top matrix
      matrixBottom.writeDisplay();    // update the bottom matrix
      delay(150);
    // this section for played grid
      matrixTop.clear();              // clear the top matrix
      matrixBottom.clear();           // clear the bottom matrix
      drawFixedPieces(theGrid);       // draw the blink version of the grid
      matrixTop.writeDisplay();       // update the top matrix
      matrixBottom.writeDisplay();    // update the bottom matrix
      delay(150);
    }
    
    //  remove the filled rows and drop them
    for (int i=0; i<fullRowCount; i++){                       // we only need to do this for as many filled rows as there are      
      for (int copyRow=fullRows[i]; copyRow>0; copyRow--){    // for every row above the filled row
          theGrid[copyRow]=theGrid[copyRow-1];                // copy the row above into the one below
        }
        theGrid[0]=B00000000;                                 // now that everything is bumped down by one, fill the top row with blanks  
      }
      
    
    totalLines=totalLines+fullRowCount;    //  add the filled rows to the total line count
  
    //  add points to the score
   int thePoints; 
    switch(fullRowCount){
      case 1:  // Single = 100 x Level
       thePoints=100 * level;
       break;
      case 2:  // Double = 300 x Level
       thePoints=300 * level;
       break;
      case 3:  // Triple = 500 x Level
       thePoints=500 * level;
       break;
      case 4:  // Tetris = 800 x Level
       thePoints=800 * level; 
       break;
    }
    
    score=score+thePoints;  // add the points to the total score
    
    
    //increment the level every 10 lines
    if (totalLines%10==0){
      level++;
      gravityTrigger--; // and with every level, decrease the trigger value at which stepCounter will drop the piece. This makes it faster with every level 
    }
  }
}
