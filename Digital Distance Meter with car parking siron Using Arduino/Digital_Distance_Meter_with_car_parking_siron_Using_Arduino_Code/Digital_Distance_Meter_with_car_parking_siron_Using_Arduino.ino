#include <LiquidCrystal.h>  // For 16x2 LCD

// Define LCD pins (for parallel connection)
LiquidCrystal lcd(2, A0, 3, 4, 5, 6);

// Define Ultrasonic Sensor Pins
const int trigPin = 8;
const int echoPin = 7;

// Define Output Devices
const int buzzer = 9;
const int led1 = 13;  // LEDs for distance indication
const int led2 = 12;
const int led3 = 11;
const int led4 = 10;

// Function to measure distance
long measureDistance() {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    
    long duration = pulseIn(echoPin, HIGH);
    long distance = duration * 0.034 / 2;  // Convert to cm
    return distance;
}

void setup() {
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    pinMode(buzzer, OUTPUT);
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);

    lcd.begin(16, 2);
    lcd.print("Distance Meter");
    delay(2000);
    lcd.clear();
  Serial.begin(9600);
}

void loop() {
    long distance = measureDistance();
     
  Serial.println(distance);
  lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Distance: ");
    lcd.print(distance);
    lcd.print(" cm  ");

    // Control LEDs & Buzzer based on Distance
    if (distance > 100) {
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
        noTone(buzzer);
    } else if (distance > 75) {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
         tone(buzzer, 1000, 1000);
        delay(750);
        noTone(buzzer);
    } else if (distance > 50) {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
        tone(buzzer, 1000, 1000);
        delay(500);
        noTone(buzzer);
    }
  else if (distance > 25) {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, LOW);
        tone(buzzer, 1000, 1000);
        delay(300);
        noTone(buzzer);
    }
  
  else {
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
        tone(buzzer, 1000, 1000);
        delay(150);
        noTone(buzzer);
    }

    delay(200);
}
