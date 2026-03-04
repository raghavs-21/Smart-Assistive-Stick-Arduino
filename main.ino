#include <Wire.h>




float cmL = 0;
float cmR = 0;

const int trigPinL = 3;
const int trigPinR = 7;
const int echoPinL = 2;
const int echoPinR = 6;

const int buzzer = 8;
const int vibrator1 = 11;
const int vibrator2 = 12;

void setup() {
  pinMode(trigPinL, OUTPUT);
  pinMode(trigPinR, OUTPUT);
  pinMode(echoPinL, INPUT);
  pinMode(echoPinR, INPUT);  
  pinMode(buzzer, OUTPUT);
  pinMode(vibrator1, OUTPUT);
  pinMode(vibrator2, OUTPUT);
  digitalWrite(buzzer, LOW);
  digitalWrite(vibrator1, LOW);
  digitalWrite(vibrator2, LOW);
  Serial.begin(9600);

  Wire.begin();
}

void loop() {
  cmL = getDistance(trigPinL, echoPinL);
  cmR = getDistance(trigPinR, echoPinR);

  Serial.print(cmL);
  Serial.print("cm Left, ");
  Serial.print(cmR);
  Serial.println("cm Right");

  // If obstacle detected on either side
  if (cmL < 20 || cmR < 20) {
    tone(buzzer, 500);                // Buzzer ON
    digitalWrite(vibrator1, HIGH);     // Vibration ON
    digitalWrite(vibrator2, HIGH);
  } else {
    noTone(buzzer);                   // Buzzer OFF
    digitalWrite(vibrator1, LOW);      // Vibration OFF
    digitalWrite(vibrator2, LOW);      // Vibration OFF
  }

  delay(20);
}

// Function to get distance
float getDistance(int trigPin, int echoPin) {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  return 0.01723 * pulseIn(echoPin, HIGH, 30000);
}
