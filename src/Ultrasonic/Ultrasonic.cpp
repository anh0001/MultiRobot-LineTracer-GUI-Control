#include <Arduino.h>
// Program Arduino untuk menggunakan 3 sensor ultrasonik HC-SR04

// Definisikan pin TRIG dan pin ECHO untuk setiap sensor
#define TRIG_PIN_1 3 // Pin TRIG sensor 1
#define ECHO_PIN_1 2 // Pin ECHO sensor 1
#define TRIG_PIN_2 5 // Pin TRIG sensor 2
#define ECHO_PIN_2 4 // Pin ECHO sensor 2
#define TRIG_PIN_3 7 // Pin TRIG sensor 3
#define ECHO_PIN_3 6 // Pin ECHO sensor 3

void setup() {
  Serial.begin(9600); // Inisialisasi komunikasi serial
  pinMode(TRIG_PIN_1, OUTPUT); // Mengatur pin TRIG 1 sebagai output
  pinMode(ECHO_PIN_1, INPUT); // Mengatur pin ECHO 1 sebagai input
  pinMode(TRIG_PIN_2, OUTPUT); // Mengatur pin TRIG 2 sebagai output
  pinMode(ECHO_PIN_2, INPUT); // Mengatur pin ECHO 2 sebagai input
  pinMode(TRIG_PIN_3, OUTPUT); // Mengatur pin TRIG 3 sebagai output
  pinMode(ECHO_PIN_3, INPUT); // Mengatur pin ECHO 3 sebagai input
}

void loop() {
  // Sensor 1
  long durasi_1, jarak_1;
  digitalWrite(TRIG_PIN_1, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN_1, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN_1, LOW);
  durasi_1 = pulseIn(ECHO_PIN_1, HIGH);
  jarak_1 = (durasi_1 / 2) * 0.0343;

  // Sensor 2
  long durasi_2, jarak_2;
  digitalWrite(TRIG_PIN_2, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN_2, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN_2, LOW);
  durasi_2 = pulseIn(ECHO_PIN_2, HIGH);
  jarak_2 = (durasi_2 / 2) * 0.0343;

  // Sensor 3
  long durasi_3, jarak_3;
  digitalWrite(TRIG_PIN_3, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN_3, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN_3, LOW);
  durasi_3 = pulseIn(ECHO_PIN_3, HIGH);
  jarak_3 = (durasi_3 / 2) * 0.0343;

  // Menampilkan hasil pengukuran ke serial monitor
  Serial.print("Sensor 1: ");
  Serial.print(jarak_1);
  Serial.print(" cm");

  Serial.print("    ");

  Serial.print("Sensor 2: ");
  Serial.print(jarak_2);
  Serial.print(" cm");

  Serial.print("    ");

  Serial.print("Sensor 3: ");
  Serial.print(jarak_3);
  Serial.println(" cm");

  delay(500); // Jeda selama 0.5 detik
} 