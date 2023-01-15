#include "pitches.h"



#define TOP_RED 4
#define TOP_BLUE 3
#define BACK_RED1 5
#define BACK_RED2 6
#define FRONT_BLUE1 8
#define FRONT_BLUE2 9
#define BUZZER 12
#define DELAY_TIME 1000

void siren(void);

void setup() {
  Serial.begin(9600);
  Serial.println("Starting car...");

  pinMode(TOP_RED, OUTPUT);
  pinMode(TOP_BLUE, OUTPUT);
  pinMode(BACK_RED1, OUTPUT);
  pinMode(BACK_RED2, OUTPUT);
  pinMode(FRONT_BLUE1, OUTPUT);
  pinMode(FRONT_BLUE2, OUTPUT);
  noTone(BUZZER);

  Serial.println("Starting motors...");
  Serial.println("Opening front lights...");

  digitalWrite(FRONT_BLUE1, HIGH);
  digitalWrite(FRONT_BLUE2, HIGH);

  Serial.println("Opening back lights");

  digitalWrite(BACK_RED1, HIGH);
  digitalWrite(BACK_RED2, HIGH);

  Serial.println("Car has been started");
  Serial.println("Motors have been started");
  Serial.println("Front lights on");
  Serial.println("Back lights on");

  Serial.println("Starting the siren");
}

void loop() {
  siren();
}

void siren(void) {
  tone(BUZZER, NOTE_G6, DELAY_TIME);

  digitalWrite(TOP_RED, HIGH);
  delay(DELAY_TIME / 1.3);
  digitalWrite(TOP_RED, LOW);

  digitalWrite(TOP_BLUE, HIGH);
  delay(DELAY_TIME / 1.3);
  digitalWrite(TOP_BLUE, LOW);
}
