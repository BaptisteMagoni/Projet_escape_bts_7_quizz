int pinLed = -1;
int pinAfter;

void setup() {
  Serial.begin(9600);
  pinMode(pinLed, OUTPUT);
  digitalWrite(pinLed, LOW);
}

void loop() {
  if(Serial.available()){
    const int data = Serial.parseInt();
    switch(data){
      case 1:  pinLed = 8;
      break;
      case 2: pinLed = 9;
      break;
      default : pinLed = -1;
      break;
    }
  }
  if(pinLed != -1){
    pinAfter = pinLed;
    digitalWrite(pinLed, HIGH);
    digitalWrite(pinAfter, LOW);
  }
}
