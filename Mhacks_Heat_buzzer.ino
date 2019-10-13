#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;
const int HOT = 80;
const int VERY_HOT = 90;
const int COLD = 75;
const int buzzerpin = 3;
const int motorpin = 9;
boolean done = true;
int ThermistorPin = A0;
int Vo;
float R1 = 10000;
float logR2, R2, K, C, F;
float c1 = 1.009249522e-03, c2 = 2.378405444e-04, c3 = 2.019202697e-07;
float tempK = 0;

void setup() 
{
    // set up the LCD's number of columns and rows:
    lcd.begin(16, 2);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Hello");
    pinMode(buzzerpin, OUTPUT);
    pinMode(motorpin, OUTPUT);
    analogWrite(motorpin, 126);
}

void loop() 
{
    // set the cursor to column 0, line 1
    // (note: line 1 is the second row, since counting begins with 0):
    Vo = analogRead(ThermistorPin);
    R2 = R1 * (1023.0 / (float)Vo - 1.0);
    logR2 = log(R2);
  
  
    K = (1.0 / (c1 + c2*logR2 + c3*logR2*logR2*logR2)); //kelvin 
    C = K - 273.15; //celsius
    F = (C * 9.0)/ 5.0 + 32.0; //fahrenheit
    Serial.print("Temperature: "); 
    Serial.print(F);
    Serial.println(" F");
    // print the number of seconds since reset:
    //lcd.print(millis()/1000);
    lcd.print((String) F + " F");
    lcd.setCursor(0,0);
    if (F >= VERY_HOT) {
      lcd.setRGB(255, 255, 255);
      analogWrite(buzzerpin, F);
      delay(250);
      analogWrite(buzzerpin, 0);
      lcd.setRGB(255,0,0);
    }
    else if (F >= HOT){
      lcd.setRGB(255,0,0);
      lcd.print("HOT!! DO NOT EAT");
      
    }
    else if (F <= COLD){
      lcd.setRGB(0, 128, 0); // deep green
      lcd.print("Ready           ");
      if (done) {
        for (int i = 0; i < 3; i++) {
          analogWrite(buzzerpin, F);
          delay(200);
          analogWrite(buzzerpin, 0);
          delay(200);
        }
        done = false;
      }
    } else {
      lcd.print("                ");
      lcd.setRGB(255,255,255);
      analogWrite(buzzerpin, 0);
    }
    lcd.setCursor(0,1);
    delay(100);
}

/*********************************************************************************************************
  END FILE
*********************************************************************************************************/
