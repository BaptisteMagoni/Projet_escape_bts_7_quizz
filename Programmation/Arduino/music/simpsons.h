int speakerPin_sim = 11;

int length_sim = 13; // the number of notes
char notes_sim[] = "cesagecAFFFG "; // a space represents a rest
int beats_sim[] = { 2, 2, 2, 1, 2, 2, 2, 1, 1, 1, 1, 2, 5 };
int tempo_sim = 100;

void playTone_sim(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(speakerPin_sim, HIGH);
    delayMicroseconds(tone);
    digitalWrite(speakerPin_sim, LOW);
    delayMicroseconds(tone);
  }
}

void playNote_sim(char note, int duration) {
  char names[] = { 'F', 'G', 'A', 'c', 'd', 'e', 'f', 's', 'g', 'a', 'b', 'C' };
  int tones[] = { 2703, 2551, 2273, 1915, 1700, 1519, 1432, 1351, 1275, 1136, 1014, 956 };
  
  // play the tone corresponding to the note name
  for (int i = 0; i < 12; i++) {
    if (names[i] == note) {
      playTone_sim(tones[i], duration);
    }
  }
}

void play_simpsons() {
  pinMode(speakerPin_sim, OUTPUT);
  for(int i=0;i<1;i++){
    for (int i = 0; i < speakerPin_sim; i++) {
      if (notes[i] == ' ') {
        delay(beats_sim[i] * tempo_sim); // rest
      } else {
        playNote_sim(notes_sim[i], beats_sim[i] * tempo_sim);
      }
      
      // pause between notes
      delay(tempo_sim / 2); 
    }
  }
}
