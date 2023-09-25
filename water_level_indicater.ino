#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); 
void setup() {
  // initialize serial communication at 9600 bits per second:
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);
  pinMode(7,OUTPUT);
  lcd.begin(16, 2);

}

// the loop routine runs over and over again forever:
void loop() {
  int i=digitalRead(8); 
  int j=digitalRead(9);
  int k=digitalRead(10);
  if(i==0 && j==0 && k==0){
    lcd.setCursor(1, 0);
    lcd.print("tank is");

  lcd.setCursor(1, 1);
    lcd.print("empty! ");
        digitalWrite(7,0);

  }
  else if(i==0 && j==1 && k==1){
        lcd.setCursor(1, 0);
    lcd.print("tank is");

  lcd.setCursor(1, 1);
    lcd.print("medium!");
    digitalWrite(7,0);

  }
  else if(i==1 && j==1 && k==1){
        lcd.setCursor(1, 0);
    lcd.print("tank is");

  lcd.setCursor(1, 1);
    lcd.print("full!  ");
            digitalWrite(7,1);

  }
delay(100);
}