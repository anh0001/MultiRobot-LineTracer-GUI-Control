#include <Arduino.h>

// Definisikan pin yang terhubung ke driver motor TB6612FNG
const int PWMA = 3;  // Pin PWM untuk mengatur kecepatan motor
const int PWMB = 5; 
const int AIN1 = 4;   // Pin A1 untuk mengendalikan arah motor
const int AIN2 = 2;   // Pin A2 untuk mengendalikan arah motor
const int BIN1 = 8;   // Pin B1 untuk mengendalikan arah motor
const int BIN2 = 7;   // Pin B2 untuk mengendalikan arah motor

void setup() {
  // Mengatur pin sebagai OUTPUT
  pinMode(PWMA, OUTPUT);
  pinMode(PWMB, OUTPUT);
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
}

void loop() {
  // Mengatur kecepatan motor
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);
  analogWrite(PWMA, 255);  // Nilai antara 0 hingga 255
  analogWrite(PWMB, 255);  // Nilai antara 0 hingga 255

  // Menggerakkan motor 1 maju

  // // Menggerakkan motor 2 maju
  // digitalWrite(BIN1, HIGH);
  // digitalWrite(BIN2, LOW);
  // delay(1000);  // Motor maju selama 1 detik

  // // Menghentikan motor
  // digitalWrite(AIN1, LOW);
  // digitalWrite(AIN2, LOW);
  // digitalWrite(BIN1, LOW);
  // digitalWrite(BIN2, LOW);
  // delay(1000);  // Motor berhenti selama 1 detik

  // // Menggerakkan motor 1 mundur
  // digitalWrite(AIN1, LOW);
  // digitalWrite(AIN2, HIGH);
  // // Menggerakkan motor 2 mundur
  // digitalWrite(BIN1, LOW);
  // digitalWrite(BIN2, HIGH);
  // delay(1000);  // Motor mundur selama 1 detik
}