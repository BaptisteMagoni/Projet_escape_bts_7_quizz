int speakerPin = 10;
char names[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g'};
int tones[] = { 110, 123, 131, 147, 165, 175, 196 };
int tonesDiese[] = {117,0,139,156,0,185,208};
int tempo = 120;//double croche
 
void playNote(char note, int octave, int duration, boolean diese=false) {
  // play the tone corresponding to the note name
    int i=0;
    while((names[i]!=note) && (i<7)){
     i++; 
    }
    if (diese) {
      tone(speakerPin,tonesDiese[i] * octave, duration * tempo);
    }else{
      tone(speakerPin,(tones[i] * octave), duration * tempo);
    }
    delay(duration * tempo);
    noTone(speakerPin);
}
 
void setup() {
  pinMode(speakerPin, OUTPUT);
   
  //intro
    playNote('d',3,1,true);
  playNote('e',3,1,false);
  playNote('f',3,1,true);
  delay(tempo);
  playNote('b',4,1,false);
  playNote('e',3,1,false);
  playNote('d',3,1,true);
  playNote('e',3,1,false);
  playNote('f',3,1,true);
  playNote('b',4,1,false);
  playNote('d',4,1,true);
  playNote('e',4,1,false);
  playNote('d',4,1,true);
  playNote('a',4,1,true);
  playNote('b',4,1,false);
  delay(tempo);
  
  playNote('f',3,1,true); 
 delay(tempo);
   playNote('d',3,1,true);
  playNote('e',3,1,false);
  delay(tempo);
    playNote('f',3,1,true);
   delay(tempo);
    playNote('b',4,1,false);
    playNote('c',4,1,true);
   playNote('a',4,1,true);
   playNote('b',4,1,false);
   playNote('c',4,1,true);
   playNote('e',4,1,false);
   playNote('f',4,1,true);
   playNote('e',4,1,false);
   playNote('c',4,1,true);
}
void loop() {
  playNote('f',3,1,true);
  delay(tempo);
  playNote('g',3,1,true);
  delay(tempo);
  playNote('d',3,1,true);
  playNote('d',3,1,true);
  delay(tempo);
  playNote('b',3,1,true);
  playNote('d',3,1,false);
  playNote('c',3,1,true);
  playNote('b',3,1,false);
  delay(tempo);
  playNote('b',3,1,false);
  delay(tempo);
  playNote('c',3,1,true);
  delay(tempo);
 
   
  playNote('d',3,1,false);
  delay(tempo);
  playNote('d',3,1,false);
  playNote('c',3,1,true);
  playNote('b',3,1,false);
  playNote('c',3,1,true);
  playNote('d',3,1,true);
  playNote('f',3,1,true);
  playNote('g',3,1,true);
  playNote('d',3,1,true);
  playNote('f',3,1,true);
  playNote('c',3,1,true);
  playNote('d',3,1,true);
  playNote('b',3,1,false);
  playNote('c',3,1,true);
  playNote('b',3,1,false);
   
  playNote('d',3,1,true);
  delay(tempo);
  playNote('f',3,1,true);
  delay(tempo);
  playNote('g',3,1,true);
  playNote('d',3,1,true);
  playNote('f',3,1,true);
  playNote('c',3,1,true);
  playNote('d',3,1,true);
  playNote('b',3,1,false);
  playNote('c',3,1,true);
  playNote('d',3,1,true);
  playNote('d',3,1,false);
  playNote('c',3,1,true);
  playNote('b',3,1,false);
  playNote('c',3,1,true);
   
  playNote('d',3,1,false);
  delay(tempo);
  playNote('b',3,1,false);
  playNote('c',3,1,true);
  playNote('d',3,1,true);
  playNote('f',3,1,true);
  playNote('c',3,1,true);
  playNote('d',3,1,false);
  playNote('c',3,1,true);
  playNote('b',3,1,false);
  playNote('c',3,1,true);
  delay(tempo);
  playNote('b',3,1,false);
  delay(tempo);
  playNote('c',3,1,true);
  delay(tempo);
   
  playNote('f',3,1,true);
  delay(tempo);
  playNote('g',3,1,true);
  delay(tempo);
  playNote('c',3,1,true);
  playNote('d',3,1,true);
  delay(tempo);
  playNote('c',3,1,true);
  playNote('d',3,1,false);
  playNote('c',3,1,true);
  playNote('b',3,1,false);
  delay(tempo);
  playNote('b',3,1,false);
  delay(tempo);
  playNote('c',3,1,true);
  delay(tempo);
   
   
  playNote('d',3,1,false);
  delay(tempo);
  playNote('d',3,1,false);
  playNote('c',3,1,true);
  playNote('b',3,1,false);
  playNote('c',3,1,true);
  playNote('d',3,1,true);
  playNote('f',3,1,true);
  playNote('g',3,1,true);
  playNote('d',3,1,true);
  playNote('f',3,1,true);
  playNote('c',3,1,true);
  playNote('d',3,1,true);
  playNote('b',3,1,false);
  playNote('c',3,1,true);
  playNote('b',3,1,false); 
  
  
  playNote('d',3,1,true);
  delay(tempo);
  playNote('f',3,1,true);
  delay(tempo);
  playNote('g',3,1,true);
  playNote('d',3,1,true);
  playNote('f',3,1,true);
  playNote('c',3,1,true);
  playNote('d',3,1,true);
  playNote('b',3,1,false);
  playNote('c',3,1,true);
  playNote('d',3,1,true);
  playNote('d',3,1,false);
  playNote('b',3,1,false);
  playNote('c',3,1,true);
   
   
  playNote('d',3,1,false);
  delay(tempo);
  playNote('b',3,1,false);
  playNote('c',3,1,true);
  playNote('d',3,1,true); 
  playNote('f',3,1,true);
  playNote('c',3,1,true);
  playNote('d',3,1,false);
  playNote('c',3,1,true);
  playNote('b',3,1,false);
  playNote('c',3,1,true);
  delay(tempo);
  playNote('b',3,1,false);
  delay(tempo);
  playNote('b',3,1,false);
  delay(tempo);
   
   
  playNote('b',3,1,false);
  delay(tempo);
  playNote('f',2,1,true); 
  playNote('g',2,1,true);
  playNote('b',3,1,false);
  delay(tempo);
  playNote('f',2,1,true); 
  playNote('g',2,1,true);
  playNote('b',3,1,false);
  playNote('c',3,1,true);
  playNote('d',3,1,true);
  playNote('b',3,1,false);
  playNote('e',3,1,false);
  playNote('d',3,1,true);
  playNote('e',3,1,false);
  playNote('f',3,1,true);
   
   
  playNote('b',3,1,false);
  delay(tempo);
  playNote('b',3,1,false);
  delay(tempo);
   playNote('f',2,1,true); 
  playNote('g',2,1,true);
  playNote('b',3,1,false);
  playNote('f',2,1,true); 
  playNote('e',3,1,false);
  playNote('d',3,1,true);  
  playNote('c',3,1,true); 
  playNote('b',3,1,false);
  playNote('e',2,1,false);
  playNote('d',2,1,true); 
  playNote('e',2,1,false);
  playNote('f',2,1,true);
 
  playNote('b',3,1,false);
  delay(tempo);
  playNote('f',2,1,true); 
  playNote('g',2,1,true);
  playNote('b',3,1,false);
  delay(tempo);
  playNote('f',2,1,true); 
  playNote('g',2,1,true);
  playNote('b',3,1,false);
  playNote('b',3,1,false);
  playNote('c',3,1,true);
  playNote('d',3,1,true);
  playNote('b',3,1,false);
  playNote('f',2,1,true);
  playNote('g',2,1,true);
  playNote('f',2,1,true);
   
  playNote('b',3,1,false);
  delay(tempo);
  playNote('b',3,1,false);
  playNote('a',3,1,true);
  playNote('b',3,1,false);
  playNote('f',2,1,true); 
  playNote('g',2,1,true);
  playNote('b',3,1,false);
  playNote('e',3,1,false);
  playNote('d',3,1,true);
  playNote('e',3,1,false);
  playNote('f',3,1,true);
  playNote('b',3,1,false);
  delay(tempo);
  playNote('a',3,1,true);
  delay(tempo);
   
  playNote('b',3,1,false);
  delay(tempo);
  playNote('f',2,1,true); 
  playNote('g',2,1,true);
  playNote('b',3,1,false);
  delay(tempo);
  playNote('f',2,1,true); 
  playNote('g',2,1,true);
  playNote('b',3,1,false);
  playNote('c',3,1,true);
  playNote('d',3,1,true);
  playNote('b',3,1,false);
  playNote('e',3,1,false);
  playNote('d',3,1,true);
  playNote('e',3,1,false);
  playNote('f',3,1,true);
   
  playNote('b',3,1,false);
  delay(tempo);
  playNote('b',3,1,false);
  delay(tempo);
  playNote('f',2,1,true); 
  playNote('g',2,1,true);
  playNote('b',3,1,false);
  playNote('f',2,1,true); 
  playNote('e',3,1,false);
  playNote('d',3,1,true); 
  playNote('c',3,1,true); 
  playNote('b',3,1,false);
  playNote('e',2,1,false);
  playNote('d',2,1,true);
  playNote('e',2,1,false);
  playNote('f',2,1,true);
   
  playNote('b',3,1,false);
  delay(tempo);
  playNote('f',2,1,true); 
  playNote('g',2,1,true);
  playNote('b',3,1,false);
  delay(tempo);
  playNote('f',2,1,true); 
  playNote('g',2,1,true);
  playNote('b',3,1,false);
  playNote('b',3,1,false);
  playNote('c',3,1,true);
  playNote('d',3,1,true);
  playNote('b',3,1,false);
  playNote('f',2,1,true); 
  playNote('g',2,1,true);
  playNote('f',2,1,true);
  
  playNote('b',3,1,false);
  delay(tempo);
  playNote('b',3,1,false);
  playNote('a',3,1,true);
  playNote('b',3,1,false);
  playNote('f',2,1,true); 
  playNote('g',2,1,true);
  playNote('b',3,1,false);
  playNote('e',3,1,false);
  playNote('d',3,1,true);
  playNote('e',3,1,false);
  playNote('f',3,1,true);
  playNote('b',3,1,false);
  delay(tempo);
  playNote('c',3,1,true);
  delay(tempo);
}
