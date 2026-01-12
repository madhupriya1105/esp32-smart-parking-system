#include <LiquidCrystal.h>
#include <ESP32Servo.h>
LiquidCrystal lcd(23, 22, 21, 19, 18, 5);
Servo gateServo;
int pirSensor = 27;
int servoPin = 13;
int availableSlots = 5;
bool carDetected = false;
void setup() {
  Serial.begin(115200);
  pinMode(pirSensor, INPUT);   
  gateServo.attach(servoPin);
  gateServo.write(0);
  lcd.begin(16, 2);
  lcd.print("Smart Parking");
  delay(2000);
  lcd.clear();
}
void loop() {
  int motion = digitalRead(pirSensor);
  Serial.println(motion);
  lcd.setCursor(0, 0);
  lcd.print("Slots Left: ");
  lcd.print(availableSlots);
  lcd.print("   ");
  if (motion == HIGH && !carDetected && availableSlots > 0) {
    carDetected = true;
    lcd.setCursor(0, 1);
    lcd.print("Vehicle Found ");
    gateServo.write(90);
    delay(3000);
    availableSlots--;
    gateServo.write(0);
    delay(2000);
    lcd.clear();
  }
  if (motion == LOW) {
    carDetected = false;
  }
  if (availableSlots == 0) {
    lcd.setCursor(0, 1);
    lcd.print("Parking Full ");
  }
  delay(200);
}
