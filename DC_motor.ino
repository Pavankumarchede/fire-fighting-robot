#include<LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7); // sets the interfacing pins

char i;
void setup()
{
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  lcd.clear();
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);
  lcd.clear();
  lcd.setCursor(0,0); 
  lcd.print("Virtual  ");
  lcd.setCursor(0,1);
  lcd.print("Reality");
  Serial.println("Enter The Character");
  
  
}

void loop() 
{
  
 while(Serial.available())
  {
     i=Serial.read(); 
     
     Serial.println(i);
     
     
     
  }
 if(i=='a') 
  {
     lcd.clear();
     lcd.setCursor(0,0); 
     lcd.print("Food ");
     lcd.setCursor(0,1);
     lcd.print("Selected");
     
     digitalWrite(8,HIGH);
     digitalWrite(9,LOW);
     digitalWrite(10,LOW);
     digitalWrite(11,LOW);
     delay(1000);

}
if(i=='b')
{
     lcd.clear();
     lcd.setCursor(0,0); 
     lcd.print("Medicine");
     lcd.setCursor(0,1);
     lcd.print("Selected");
     digitalWrite(8,LOW);
     digitalWrite(9,HIGH);
     digitalWrite(10,LOW);
     digitalWrite(11,LOW);
     delay(1000);
}
if(i=='c')
{
     lcd.clear();
     lcd.setCursor(0,0); 
     lcd.print("Banklet");
     lcd.setCursor(0,1);
     lcd.print("Selected");
     digitalWrite(8,LOW);
     digitalWrite(9,LOW);
     digitalWrite(10,HIGH);
     digitalWrite(11,LOW);
     delay(1000);
}
if(i=='d')
{
     lcd.clear();
     lcd.setCursor(0,0); 
     lcd.print("Water");
     lcd.setCursor(0,1);
     lcd.print("Selected");
     digitalWrite(8,LOW);
     digitalWrite(9,LOW);
     digitalWrite(10,LOW);
     digitalWrite(11,HIGH);
     delay(1000);
}
if(i=='e')
{
     lcd.clear();
     lcd.setCursor(0,0); 
     lcd.print("Need");
     lcd.setCursor(0,1);
     lcd.print("Doctor");
     digitalWrite(8,LOW);
     digitalWrite(9,LOW);
     digitalWrite(10,LOW);
     digitalWrite(11,LOW);
     delay(1000);
     
}
if(i=='f')
{
     lcd.clear();
     lcd.setCursor(0,0); 
     lcd.print("Need");
     lcd.setCursor(0,1);
     lcd.print("Rescue");
     digitalWrite(8,LOW);
     digitalWrite(9,LOW);
     digitalWrite(10,LOW);
     digitalWrite(11,LOW);
     delay(1000);
     
}
}
