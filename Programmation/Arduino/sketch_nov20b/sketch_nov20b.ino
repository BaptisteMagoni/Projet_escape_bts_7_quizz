#define BUZZER_PIN 11

#define SILENCE  0
#define NOTE_B7  3951
#define NOTE_CS8 4435
#define NOTE_E8  5274

static const int notes[] = {
  NOTE_CS8, SILENCE,  NOTE_CS8, SILENCE,
  NOTE_B7,  NOTE_CS8, SILENCE,  NOTE_E8,
  SILENCE,  NOTE_CS8, SILENCE,  SILENCE
};

void playCommunicatorSound() {
  for (int i=0; i<12; i+=1) {
    if (notes[i] != SILENCE) {
      tone(BUZZER_PIN, notes[i], 102);
    }

    delay(150);
  }
}
