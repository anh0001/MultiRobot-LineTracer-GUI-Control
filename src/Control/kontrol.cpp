#include <arduino.h>

// void setup() {
//   Serial.begin(9600); // Inisialisasi komunikasi serial
// }

// void loop() {
//   if (Serial.available() > 0) {
//     String receivedData = Serial.readStringUntil('\n');
//     // Baca data yang diterima hingga newline

//     // Pisahkan data menjadi potongan-potongan yang sesuai dengan sensor
//     int sensorData[3]; // Array untuk menampung data dari tiga sensor
//     int sensorIndex = 0;
//     char *ptr = strtok((char *)receivedData.c_str(), ": ");
//     while (ptr != NULL && sensorIndex < 3) {
//       sensorData[sensorIndex++] = atoi(ptr);
//       ptr = strtok(NULL, ": ");
//     }

//     // Gunakan data dari sensor (misalnya, tampilkan di Serial Monitor)
//     for (int i = 0; i < 3; ++i) {
//       Serial.print("Sensor ");
//       Serial.print(i + 1);
//       Serial.print(": ");
//       Serial.println(sensorData[i]);
//     }
//   }

#include <SoftwareSerial.h>

SoftwareSerial slaveSerial(0, 1); // RX, TX pada pin 2, 3

#define m1_in1 4
#define m1_in2 2
#define m1_pwm 3
#define m2_in1 7
#define m2_in2 8
#define m2_pwm 5
#define stnby 9

void Maju(int a, int b){
  digitalWrite(m1_in1,1);
  digitalWrite(m1_in2,0);
  analogWrite(m1_pwm,a);
  digitalWrite(m2_in1,0);
  digitalWrite(m2_in2,1);
  analogWrite(m2_pwm,b);
}

void Mundur(int a, int b){
  digitalWrite(m1_in1,HIGH);
  digitalWrite(m1_in2,LOW);
  analogWrite(m1_pwm,a);
  digitalWrite(m2_in1,LOW);
  digitalWrite(m2_in2,HIGH);
  analogWrite(m2_pwm,b);
}

void MajuKanan(int a, int b){
  digitalWrite(m1_in1,HIGH);
  digitalWrite(m1_in2,LOW);
  analogWrite(m1_pwm,a);
  digitalWrite(m2_in1,HIGH);
  digitalWrite(m2_in2,LOW);
  analogWrite(m2_pwm,b);
}

void MajuKiri(int a, int b){
  digitalWrite(m1_in1,LOW);
  digitalWrite(m1_in2,HIGH);
  analogWrite(m1_pwm,a);
  digitalWrite(m2_in1,LOW);
  digitalWrite(m2_in2,HIGH);
  analogWrite(m2_pwm,b);
}

void Berhenti(){
  digitalWrite(m1_in1,LOW);
  digitalWrite(m1_in2,LOW);
  // analogWrite(m1_pwm,a);
  digitalWrite(m2_in1,LOW);
  digitalWrite(m2_in2,LOW);
  // analogWrite(m2_pwm,b);
}

void setup() {
  Serial.begin(9600);
  slaveSerial.begin(9600);
  pinMode (m1_in1,OUTPUT);
  pinMode (m1_in2,OUTPUT);
  pinMode (m1_pwm,OUTPUT);
  pinMode (m2_in1,OUTPUT);
  pinMode (m2_in2,OUTPUT);
  pinMode (m2_pwm,OUTPUT); 
  pinMode (stnby, OUTPUT);
  digitalWrite (stnby, 1);
}

void loop() {
  if (slaveSerial.available() > 0) {
    int distance = slaveSerial.parseInt(); // Menerima data dari Arduino Slave
    Serial.println(distance); // Tampilkan data dari sensor ultrasonik

    // Contoh: Jika jarak kurang dari ambang batas tertentu, putar motor
     if (slaveSerial.available() > 0) {
    String distanceData = slaveSerial.readStringUntil('\n'); // Menerima data dari Arduino Slave
    Serial.println(distanceData); // Tampilkan data dari sensor ultrasonik

    int distance1 = distanceData.substring(0, distanceData.indexOf(',')).toInt();
    distanceData.remove(0, distanceData.indexOf(',') + 1);
    int distance2 = distanceData.substring(0, distanceData.indexOf(',')).toInt();
    distanceData.remove(0, distanceData.indexOf(',') + 1);
    int distance3 = distanceData.toInt();

    // Contoh: Jika jarak kurang dari ambang batas tertentu, putar motor
    if (distance2 < 20) {
      Maju(100,100);
    } else {
      Berhenti();
    }

    if (distance1 < distance3){
      MajuKanan(100,100);
    } 
    else
    {
      MajuKiri(100,100);
    }

  }
  }
}