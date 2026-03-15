#include <Servo.h>
#include <LiquidCrystal.h>

// Pin connections
int entrySensorPin = 2;
int exitSensorPin = 3;
int servoPin = 9;

// LCD pins (RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(7, 8, 10, 11, 12, 13);

Servo gate;

// Total parking slots
int totalSlots = 4;
int availableSlots = 4;

void setup() {

  pinMode(entrySensorPin, INPUT);
  pinMode(exitSensorPin, INPUT);

  gate.attach(servoPin);
  gate.write(0);   // gate closed

  lcd.begin(16,2);

  lcd.setCursor(0,0);
  lcd.print("Parking System");

  delay(2000);
  lcd.clear();
}

void loop() {

  lcd.setCursor(0,0);
  lcd.print("Slots: ");
  lcd.print(availableSlots);
  lcd.print("/");
  lcd.print(totalSlots);

  // ENTRY SENSOR
  if(digitalRead(entrySensorPin) == LOW) {

    if(availableSlots > 0) {

      availableSlots--;

      gate.write(90);   // open gate
      delay(3000);

      gate.write(0);    // close gate
    }

    else {

      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Parking Full");

      delay(2000);
    }

    while(digitalRead(entrySensorPin) == LOW);
  }

  // EXIT SENSOR
  if(digitalRead(exitSensorPin) == LOW) {

    if(availableSlots < totalSlots) {
      availableSlots++;
    }

    delay(1000);

    while(digitalRead(exitSensorPin) == LOW);
  }
}