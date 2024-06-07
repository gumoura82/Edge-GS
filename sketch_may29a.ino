#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd(0);

const int CO2Pin = A2;
const int soilMoisturePin = A1;

void setup() {
  Serial.begin(9600);
  
  lcd.begin(16, 2);
  lcd.setBacklight(LOW);
  lcd.print("Iniciando...");
  delay(2000);
}

void loop() {
  int CO2Value = analogRead(CO2Pin);
  int soilMoistureValue = analogRead(soilMoisturePin);

 
  Serial.print("CO2: ");
  Serial.print(CO2Value);
  Serial.print("\tUmidade do Solo: ");
  Serial.println(soilMoistureValue);

  
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("CO2: ");
  lcd.print(CO2Value);
  lcd.setCursor(0, 1);
  lcd.print("Umidade: ");
  lcd.print(soilMoistureValue);

  delay(1000); 
}
