#include <Arduino.h>
#include <Stepper.h>

const int trigPin = 9;  // Pino do sensor ultrassônico
const int echoPin = 8;  // Pino do sensor ultrassônico
const int ledPin = 11;  // Pino do LED
const int pirPin = 7;   // Pino do sensor PIR

const int stepsPerRevolution = 2048;  // Passos por revolução do motor de passo
Stepper stepperName = Stepper(stepsPerRevolution, 2, 3, 4, 5);

long duration;
int distance;
bool reverseMode = false;
int stepsMoved = 0;
bool motionDetected = false;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);
  stepperName.setSpeed(8);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.0034 / 2;

  motionDetected = digitalRead(pirPin);
  
  if (motionDetected) {
    stepperName.setSpeed(4);  // Reduz a velocidade se houver movimento
  } else {
    stepperName.setSpeed(8);  // Velocidade normal
  }

  if (!reverseMode) {
    if (distance <= 5) {
      digitalWrite(ledPin, HIGH);
      reverseMode = true;  // Ativa o modo reverso
    } else {
      digitalWrite(ledPin, LOW);
      stepperName.step(stepsPerRevolution);
      stepsMoved += stepsPerRevolution;  // Armazena a distância percorrida
    }
  } else {
    if (stepsMoved > 0) {
      stepperName.step(-stepsPerRevolution);
      stepsMoved -= stepsPerRevolution;
    } else {
      digitalWrite(ledPin, LOW);  // Desliga o LED
      while (true);  // Para o programa
    }
  }
  delay(500);
}
