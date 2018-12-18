//Include folder mario
#include <SoftwareSerial.h>
#include "vador_music.h"
#include "mario_music.h"
#include "reine_des_neiges.h"
#include "noel.h"
#include "claire.h"
#include "pirate.h"
#include "harry_potter.h"
#include "cucaracha.h"
#include "zelda.h"
#include "simpsons.h"

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
    case 5: claire();
    break;
    case 6: pirates();
    break;
    case 7: harry_potter();
    break;
    case 8: cucaracha();
    break;
    case 9: zelda();
    break;
    case 10: simpsons_loop();
    break;
  }
}

void mario(){
  play_mario();
  send_finish();
}

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

void claire(){
  play_claire();
  send_finish();
}
void pirates(){
  play_pirates();
  send_finish();
}

void harry_potter(){
  play_harry_potter();
  send_finish();
}

void cucaracha(){
  play_cucaracha();
  send_finish();
}

void zelda(){
  play_zelda();
  send_finish();
}

void simpsons_loop(){
  play_simpsons();
  send_finish();
}

void send_finish(){
  Serial.write("2");
}
