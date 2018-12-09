int buzzer_pin = 11;

struct MusicStruct {
  int A = 550;
  int As = 582;
  int B = 617;
  int C = 654;
  int Cs = 693;
  int D = 734;
  int Ds = 777;
  int E = 824;
  int F = 873;
  int Fs = 925;
  int G = 980;
  int Gs = 1003;
  int A2 = 1100;
  int A2s = 1165;
  int B2 = 1234;
  int C3 = 1308;
  int C3s = 1385;
  int D3 = 1555;
}Music;

struct LengthStruct {
  float half = 0.5;
  float one = 1.0;
  float one_half = 1.5;
  float two = 2.0;
  float two_half = 2.5;
}Length;

void setTone(int pin, int note, int duration) {
  tone(pin, note, duration);
  delay(duration);
  noTone(pin);
}

int tempo_potter = 400;

void play_harry_potter() {
  pinMode(buzzer_pin, OUTPUT);

  for(int i=0;i<1;i++){
    setTone(buzzer_pin, Music.B, tempo_potter * Length.one);
    setTone(buzzer_pin, Music.E, tempo_potter * Length.one_half);
    setTone(buzzer_pin, Music.G, tempo_potter * Length.half);
    setTone(buzzer_pin, Music.F, tempo_potter * Length.one);
    setTone(buzzer_pin, Music.E, tempo_potter * Length.two);
    setTone(buzzer_pin, Music.B2, tempo_potter * Length.one);
    setTone(buzzer_pin, Music.A2, tempo_potter * Length.two_half);
    setTone(buzzer_pin, Music.Fs, tempo_potter * Length.two_half);
    
    setTone(buzzer_pin, Music.E, tempo_potter * Length.one_half);
    setTone(buzzer_pin, Music.G, tempo_potter * Length.half);
    setTone(buzzer_pin, Music.F, tempo_potter * Length.one);
    setTone(buzzer_pin, Music.Ds, tempo_potter * Length.two);
    setTone(buzzer_pin, Music.F, tempo_potter * Length.one);
    setTone(buzzer_pin, Music.B, tempo_potter * Length.two_half);
  }
  
}

