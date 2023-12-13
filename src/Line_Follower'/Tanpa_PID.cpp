#include <Arduino.h>

#define m1_in1 4
#define m1_in2 2
#define m1_pwm 3
#define m2_in1 7
#define m2_in2 8
#define m2_pwm 5
#define stnby 9

#define S1 A0
#define S2 A1 //bisa (2 dari kiri)
#define S3 A2 //bisa (tengah)
#define S4 A3 //bisa (2 dari kanan)
#define S5 A6

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
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (m1_in1,OUTPUT);
  pinMode (m1_in2,OUTPUT);
  pinMode (m1_pwm,OUTPUT);
  pinMode (m2_in1,OUTPUT);
  pinMode (m2_in2,OUTPUT);
  pinMode (m2_pwm,OUTPUT); 
  pinMode (stnby, OUTPUT);
  digitalWrite (stnby, 1);

  pinMode (S1,INPUT);
  pinMode (S2,INPUT);
  pinMode (S3,INPUT);
  pinMode (S4,INPUT);
  pinMode (S5,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // int val1 = digitalRead (A3);
  // Serial.print ("Nilai Sensor S5 : ");
  // Serial.println (val1);
  // delay (100);

  if ((digitalRead(S2) == 1) && (digitalRead(S4) == 1)) Maju(100, 100);
  if ((digitalRead(S2) == 0) && (digitalRead(S4) == 1)) MajuKanan(200, 200);
  if ((digitalRead(S2) == 1) && (digitalRead(S4) == 0)) MajuKiri(200, 200);
  if ((digitalRead(S2) == 0) && (digitalRead(S4) == 0)) Berhenti();
}