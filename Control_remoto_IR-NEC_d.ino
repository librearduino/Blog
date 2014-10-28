#include "Adafruit_NECremote.h" //hola

#define IRpin         6
Adafruit_NECremote remote(IRpin);

int led_rojo = 5;
int led_amarillo = 4;
int led_verde = 3;
int led_hrojo = 2;

void setup(void) {
  pinMode(led_rojo, OUTPUT);
  pinMode(led_amarillo, OUTPUT);
  pinMode(led_verde, OUTPUT);
  pinMode(led_hrojo, OUTPUT);
}

void loop(void) {
  int c = remote.listen(5);
  if (c >= 0) {
    if (c == 22){
      digitalWrite(led_rojo, LOW);
      digitalWrite(led_amarillo, LOW);
      digitalWrite(led_verde, LOW);
      digitalWrite(led_hrojo, LOW);
    }
    if (c == 12){
      digitalWrite(led_rojo, HIGH);
      digitalWrite(led_amarillo, LOW);
      digitalWrite(led_verde, LOW);
      digitalWrite(led_hrojo, LOW);
    }
    if (c == 24){
      digitalWrite(led_rojo, LOW);
      digitalWrite(led_amarillo, HIGH);
      digitalWrite(led_verde, LOW);
      digitalWrite(led_hrojo, LOW);
    }
    if (c == 94){
      digitalWrite(led_rojo, LOW);
      digitalWrite(led_amarillo, LOW);
      digitalWrite(led_verde, HIGH);
      digitalWrite(led_hrojo, LOW);
    }
    if (c == 8){
      digitalWrite(led_rojo, LOW);
      digitalWrite(led_amarillo, LOW);
      digitalWrite(led_verde, LOW);
      digitalWrite(led_hrojo, HIGH);
    }
  }
}
