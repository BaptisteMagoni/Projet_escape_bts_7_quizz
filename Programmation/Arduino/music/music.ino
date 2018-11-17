//Include folder mario
#include <SoftwareSerial.h>

#include "mario_music.h"

#include "teris_music.h"

#include "vador_music.h"

//#include "nyan_cat.h"

void setup(){

  Serial.begin(9600);
  //Mario
  //setupNyan();
  pinMode(10, OUTPUT);//buzzer
  pinMode(13, OUTPUT);//led indicator when singing a note
}

void loop(){

  if(Serial.available() > 0){
      int m_data = Serial.parseInt();
      switch(m_data){
        case 1: play_mario();  
        break;
        case 2: Serial.println("Ne fonctionne pas");
        break;
        case 3: play_vador();
        break;
        case 4: Serial.println("Ne fonctionne pas");
        break;
      }
  }
  
  //play_mario();
  //play_tetris();
  //play_vador();
  //play_nyan_cat();
}

