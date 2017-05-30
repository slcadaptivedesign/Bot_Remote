
/* send.ino Example sketch for IRLib2
 *  Illustrates how to send a code.
 *  Chris Young https://github.com/cyborg5/IRLib2 developed library and examples
 */
#include <IRLibSendBase.h>    
#include <IRLib_P02_Sony.h>   
#include <IRLibCombo.h>

IRsend remoteSend;
int button = A1;
int button2 = A0;
int button3 = A2;
int button4 = A3;

void setup() {
  pinMode(button, INPUT);
}

void loop() {
  if (digitalRead(button) == HIGH){
    remoteSend.send(SONY,0xa7bca, 20);
    delay(100);
  }
  if (digitalRead(button2) == HIGH){
    remoteSend.send(SONY,0xb7bca, 20);
    delay(100);
  }
  if (digitalRead(button3) == HIGH){
    remoteSend.send(SONY,0xa7bca, 20);
    delay(100);
  }
  if (digitalRead(button4) == HIGH){
    remoteSend.send(SONY,0xa7bca, 20);
    delay(100);
  }
}
