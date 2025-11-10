#include <SoftwareSerial.h>
SoftwareSerial sim800(9, 10);

const int trigPin = 6;
const int echoPin = 7;
const int callThreshold = 20;
bool callInProgress = false;

void setup() {
  Serial.begin(9600);
  sim800.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  delay(5000);

  Serial.println("🔐 Door Security System Initialized");
  Serial.println("📡 Ultrasonic sensor and SIM800 module are active");
  Serial.println("------------------------------------------------");
}

void loop() {
  long duration;
  int distance;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("🚪 Door Distance(safty): ");
  Serial.print(distance);
  Serial.println(" cm(Benu)");

  if (distance <= callThreshold && !callInProgress) {
    Serial.println("⚠️  Intruder detected near the door! Placing security call...");
    makeCall("+25195230.....");
    callInProgress = true;
  }

  if (distance > callThreshold && callInProgress) {
    callInProgress = false;
    Serial.println("✅ Door area is secure. System is on standby.");
  }

  delay(500);
}

void makeCall(String number) {
  sim800.println("AT");
  delay(1000);
  sim800.println("ATD" + number + ";");
  Serial.println("📞 Calling owner... Please wait.");
  delay(20000);
  sim800.println("ATH");
  Serial.println("📴 Call ended. Resuming monitoring mode...");
}
