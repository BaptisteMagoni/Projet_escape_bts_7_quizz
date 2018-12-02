//Include folder mario
#include <SoftwareSerial.h>
#include "vador_music.h"
#include "mario_music.h"
#include "reine_des_neiges.h"
#include "noel.h"
#include "claire.h"

int m_data = 0;

void setup(){

  Serial.begin(9600);
  //Mario
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
    case 3: noel();
    break;
    case 4: reine_des_neiges();
    break;
    case 5: reine_des_neiges();
    break;
    case 6: noel();
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

/*void tetris(){
  play_tetris();
  send_finish();
}*/

void vador(){
  play_vador();
  send_finish();
}

void reine_des_neiges(){
  play_reine_des_neiges();
  send_finish();
}

void noel(){
  play_noel();
  send_finish();
}

void send_finish(){
  Serial.write("5");
}

