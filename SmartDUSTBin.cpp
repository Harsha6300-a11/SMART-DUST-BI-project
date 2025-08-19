#include <Servo.h>

Servo lid;
const int trigPin = 9, echoPin = 10, servoPin = 6;

void setup() {
    Serial.begin(9600);
    lid.attach(servoPin);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    lid.write(0);  // Keep the lid closed
}

long getDistance() {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    
    long duration = pulseIn(echoPin, HIGH, 30000);  // Timeout 30ms
    if (duration == 0) return 999; // No object detected

    return duration * 0.034 / 2; // Convert to cm
}

void loop() {
    long distance = getDistance();
    Serial.print("Distance: ");
    Serial.println(distance);

    if (distance > 2 && distance < 30) { // Ignore extreme values
        lid.write(90);  // Open lid
        delay(3000);
        lid.write(0);   // Close lid
        delay(1000);    // Avoid rapid toggling
    }
    delay(200);
}
