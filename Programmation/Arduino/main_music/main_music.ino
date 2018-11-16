int pinLed = -1;

void setup() {
  Serial.begin(9600);
  pinMode(pinLed, OUTPUT);
  digitalWrite(pinLed, LOW);
}

void loop() {
  if(Serial.available()){
    const int data = Serial.parseInt();
    Serial.println("Receive");
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
    digitalWrite(pinLed, HIGH);
<<<<<<< HEAD
    //digitalWrite(pinAfter, LOW);
=======
>>>>>>> 3142a5b2185948667f4f30e54e85c1d62fe73c8b
  }
}
