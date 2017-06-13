
/* send.ino Example sketch for IRLib2
 *  Illustrates how to send a code.
 *  Chris Young https://github.com/cyborg5/IRLib2 developed library and examples
 */
#include <IRLibSendBase.h>    
#include <IRLib_P02_Sony.h>   
#include <IRLibCombo.h>

IRsend remoteSend;
int button = A0;
int button2 = A1;
int button3 = A2;
int button4 = A3;

int change = 0;
int state = 0;

int state1 = 0;
int change1 = 0;

int state2 = 0;
int change2 = 0;

int state3 = 0;
int change3 = 0;

void setup() {
  pinMode(button, INPUT);
}

void loop() {
  if (digitalRead(button) == HIGH){
    state = 1;
  }
  else {
    state = 0;
  }

  if (state != change) {
  if (state == 1) {
  remoteSend.send(SONY,0xb7bca, 20);
    delay(100);    
  }
  else {
   remoteSend.send(SONY,0x9c40,20);
  }
  }
  change = state;
  
 if (digitalRead(button2) == HIGH){
    state1 = 1;
  }
  else {
    state1 = 0;
  }
  
  if (state1 != change1) {
  if (state1 == 1) {
    
  remoteSend.send(SONY,0xc8bca, 20);
    delay(100);    
  }
  else {
   remoteSend.send(SONY,0x9C40,20);
  }
  }
  change1 = state1;
  
  if (digitalRead(button3) == HIGH){
    state2 = 1;
  }
  else {
    state2 = 0;
  }

  if (state2 != change2) {
  if (state2 == 1) {
  remoteSend.send(SONY,0xD9BCA, 20);
    delay(100);    
  }
  else {
   remoteSend.send(SONY,0x9C40,20);
  }
  }
  change2 = state2;
  
  if (digitalRead(button4) == HIGH){
    state3 = 1;
  }
  else {
    state3 = 0;
  }

  if (state3 != change3) {
  if (state3 == 1) {
  remoteSend.send(SONY,0xA7BCA, 20);
    delay(100);    
  }
  else {
   remoteSend.send(SONY,0x9c40,20);
  }
  
    change3 = state3;}
 }
  
