//Include folder mario
#include <SoftwareSerial.h>
#include "vador_music.h"
#include "teris_music.h"
#include "mario_music.h"

//#include "nyan_cat.h"

int m_data = 0;

void setup(){

  Serial.begin(9600);
  //Mario
  //setupNyan();
  pinMode(11, OUTPUT);//buzzer
  pinMode(13, OUTPUT);//led indicator when singing a note
}

void loop(){
  m_data = Serial.parseInt();
  switch(m_data){
    case 1: vador();
    break;
    case 2: mario();
    break;
    case 3: Serial.println("down");
    break;
    case 4: Serial.println("down");
    break;
}
  
  //play_mario();
  //play_tetris();
  //play_vador();
  //play_nyan_cat();
}

void mario(){
  play_mario();
  send_finish();
}

void tetris(){
  play_tetris();
  send_finish();
}

void vador(){
  play_vador();
  send_finish();
}

void send_finish(){
  Serial.write("Finish");
}

