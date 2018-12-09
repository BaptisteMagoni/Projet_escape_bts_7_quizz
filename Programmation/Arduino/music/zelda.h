int speakerPin_zelda = 11;
const int switchPin = 1;

char notes_zelda[] = "gabygabyxzCDxzCDabywabywzCDEzCDEbywFCDEqywFGDEqi        azbC"; // a space represents a rest
int length_zelda = sizeof(notes); // the number of notes
int beats_zelda[] = { 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 1,1,1,1, 2,3,3,16,};
int tempo_zelda = 75;

void playTone_zelda(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(speakerPin_zelda, HIGH);
    delayMicroseconds(tone);
    digitalWrite(speakerPin_zelda, LOW);
    delayMicroseconds(tone);
  }
}

void playNote_zelda(char note, int duration) {
  char names[] = { 'c', 'd', 'e', 'f', 'g', 'x', 'a', 'z', 'b', 'C', 'y', 'D', 'w', 'E', 'F', 'q', 'G', 'i' };
  // c=C4, C = C5. These values have been tuned.
  int tones[] = { 1898, 1690, 1500, 1420, 1265, 1194, 1126, 1063, 1001, 947, 893, 843, 795, 749, 710, 668, 630, 594 };
   
  // play the tone corresponding to the note name
  for (int i = 0; i < 18; i++) {
    if (names[i] == note) {
      playTone_zelda(tones[i], duration);
    }
  }
}

void play_zelda() {
  pinMode(switchPin, INPUT);
  digitalWrite(switchPin, HIGH);
  for(int j=0;j<1;j++){
    pinMode(speakerPin_zelda, OUTPUT);
    if (digitalRead(switchPin) == 1) {
      for (int i = 0; i < length_zelda; i++) {
        if (notes_zelda[i] == ' ') {
          delay(beats_zelda[i] * tempo_zelda); // rest
        } else {
          playNote_zelda(notes_zelda[i], beats_zelda[i] * tempo_zelda);
        }
        
        // pause between notes
        delay(tempo_zelda / 2); 
      }
    }
  }
}
