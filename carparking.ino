#include <LiquidCrystal.h>
#include <Servo.h>
Servo myservo; 
// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int count=1;
bool first_time = false;
bool second_time = true;

int buttonPushCounter = 0;   // counter for the number of button presses
int up_buttonState = 0;         // current state of the up button
int up_lastButtonState = 0;     // previous state of the up button

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello!");
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  myservo.attach(9);
  myservo.write(180);
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  delay(1000);

if(digitalRead(A0) == LOW){
  if(digitalRead(A1) != LOW || digitalRead(A2) != LOW || digitalRead(A3) != LOW )
  {
    myservo.write(90);
     lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Welcome!");
    delay(5000);
     myservo.write(180);
          lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Hello!");
  }
  else{
    lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.println("Sorry! Full     ");
  }
}





// if (state == 0 && digitalRead(A1) == LOW) {
//    state = 1;
//    LEDstate=!LEDstate;
//    count=count+1;
//  lcd.setCursor(0, 1);
//  lcd.print(count);
//  }
//  if (state == 1 && digitalRead(A0) == HIGH) {   
//    state = 0;
//    count=count-1;
//  lcd.setCursor(0, 1);
//  lcd.print(count);
//  }



  }
  
