//hardware code
#include <Servo.h>

const int trigPin = 9;
const int echoPin = 10;
const int servoPin = 6;
const int ledPin = 4;
const int buzzerPin = 5;

Servo radarServo;

int getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH, 30000);

  if (duration == 0) return 0;

  return duration * 0.0343 / 2;
}

void scanAtAngle(int angle) {
  radarServo.write(angle);
  delay(40);

  int distance = getDistance();

  if (distance > 0 && distance <= 30) {
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1000, 50);
  } else {
    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
  }

  Serial.print(angle);
  Serial.print(",");
  Serial.println(distance);

  delay(20);
}

void setup() {
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  radarServo.attach(servoPin);
  radarServo.write(90);

  delay(500);
}

void loop() {
  for (int angle = 0; angle <= 180; angle += 2) {
    scanAtAngle(angle);
  }

  for (int angle = 180; angle >= 0; angle -= 2) {
    scanAtAngle(angle);
  }
}
