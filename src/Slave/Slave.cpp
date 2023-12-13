#include <arduino.h>
#include <NewPing.h>

#define TRIG_PIN_1  3 // Pin trigger sensor  1
#define ECHO_PIN_1  2 // Pin echo sensor  1
#define TRIG_PIN_2 5 // Pin TRIG sensor 2
#define ECHO_PIN_2 4 // Pin ECHO sensor 2
#define TRIG_PIN_3 7 // Pin TRIG sensor 3
#define ECHO_PIN_3 6 // Pin ECHO sensor 3
#define MAX_DISTANCE 200 

NewPing sonar1(TRIG_PIN_1, ECHO_PIN_1, MAX_DISTANCE); 
NewPing sonar2(TRIG_PIN_2, ECHO_PIN_2, MAX_DISTANCE);
NewPing sonar3(TRIG_PIN_3, ECHO_PIN_3, MAX_DISTANCE); 

void setup() {
Serial.begin(9600);
//   pinMode(TRIG_PIN_1, OUTPUT);
//   pinMode(ECHO_PIN_1, INPUT); 
//   pinMode(TRIG_PIN_2, OUTPUT); 
//   pinMode(ECHO_PIN_2, INPUT); 
//   pinMode(TRIG_PIN_3, OUTPUT); 
//   pinMode(ECHO_PIN_3, INPUT); 
}

// void loop() {
//   // Sensor 1
//   long durasi_1, jarak_1;
//   digitalWrite(TRIG_PIN_1, LOW);
//   delayMicroseconds(2);
//   digitalWrite(TRIG_PIN_1, HIGH);
//   delayMicroseconds(10);
//   digitalWrite(TRIG_PIN_1, LOW);
//   durasi_1 = pulseIn(ECHO_PIN_1, HIGH);
//   jarak_1 = (durasi_1 / 2) * 0.0343; 

//   // Sensor 2
//   long durasi_2, jarak_2;
//   digitalWrite(TRIG_PIN_2, LOW);
//   delayMicroseconds(2);
//   digitalWrite(TRIG_PIN_2, HIGH);
//   delayMicroseconds(10);
//   digitalWrite(TRIG_PIN_2, LOW);
//   durasi_2 = pulseIn(ECHO_PIN_2, HIGH);
//   jarak_2 = (durasi_2 / 2) * 0.0343;

//   // Sensor 3
//   long durasi_3, jarak_3;
//   digitalWrite(TRIG_PIN_3, LOW);
//   delayMicroseconds(2);
//   digitalWrite(TRIG_PIN_3, HIGH);
//   delayMicroseconds(10);
//   digitalWrite(TRIG_PIN_3, LOW);
//   durasi_3 = pulseIn(ECHO_PIN_3, HIGH);
//   jarak_3 = (durasi_3 / 2) * 0.0343;

//   Serial.print("U1: ");
//   Serial.println(jarak_1);

//   Serial.print("U2: ");
//   Serial.println(jarak_2);

//   Serial.print("U3: ");
//   Serial.println(jarak_3);

//   delay(500);

void loop() {

  delay(50);
  unsigned int distance1 = sonar1.ping_cm(); // Mengambil data dari sensor pertama
  unsigned int distance2 = sonar2.ping_cm(); // Mengambil data dari sensor kedua
  unsigned int distance3 = sonar3.ping_cm(); // Mengambil data dari sensor ketiga

  Serial.print(distance1); Serial.print(","); // Kirim data ke Arduino Master melalui Serial
  Serial.print(distance2); Serial.print(",");
  Serial.println(distance3);

}