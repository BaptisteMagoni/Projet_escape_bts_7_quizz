int speakerPin2 = 11;

int length1 = 15; // le nombre de notes
char notes1[] = "ccggaagffeeddc "; // un espace = un repos
int beats[] = { 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 4 };
int tempo3 = 300;

void playTone1(int tone1, int duration)
{
  for (long i = 0; i < duration * 1000L; i += tone1 * 2)
  {
    digitalWrite(speakerPin2, HIGH);
    delayMicroseconds(tone1);
    digitalWrite(speakerPin2, LOW);
    delayMicroseconds(tone1);
  }
}

void playNote1(char note, int duration)
{
  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
  int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956 };

  // jouer la tonalite correspondant au nom de la note
  for (int i = 0; i < 8; i++) {
    if (names[i] == note) {
      playTone1(tones[i], duration);
    }
  }
}

void play_claire()
{
  for (int i = 0; i < length1; i++)
  {
    if (notes1[i] == ' ')
    {
      delay(beats[i] * tempo3); // repos
    }
    else
    {
      playNote1(notes1[i], beats[i] * tempo3);
    }

    // pause entre les notes
    delay(tempo3 / 2); 
  }
}
