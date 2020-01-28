#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>
#include <TimeLib.h>
#include <WidgetRTC.h>
#include <LiquidCrystal_I2C.h>
int lcdColumns = 16;
int lcdRows = 2;
LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows);    
WidgetRTC rtc;
Servo servo;

char auth[] = "Qjw-ULy8UaIyQWhEEz21lWEmWni_RoWD"; //Authentication Token from the Blynk App by creating the new Project
char ssid[] = "petfeeder";   //Wifi Name
char pass[] = "petfeeder123";   //Wifi Password
int i,j,n,h,m;

void setup()
{
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  servo.attach(2); // pin 4  3v3 gnd
  lcd.init();   // initializing the LCD
  lcd.backlight();// Enable or Turn On the backlight
  rtc.begin();
}
  void loop()
{
  Blynk.run();
  lcd.setCursor(0, 0);
  lcd.print("No of Times:");
  lcd.print(n);
  delay(3000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Last feed on:");
  lcd.setCursor(0, 1);
  lcd.print(h);
  lcd.print(":");
  lcd.print(m);
  delay(3000);
  lcd.clear();
}

BLYNK_WRITE(V0)
{
   n=param.asInt();
}

BLYNK_WRITE(V2)
{
  servo.write(180);
  delay(2000);
  servo.write(0);
}
BLYNK_WRITE(V1)
{
 j=param.asInt();
  if(j==1)
  {
  Serial.print(n);
  servo.write(0);
  delay(1000);
  }
  for(int i=1;i<=n;i++)
  {
  Serial.print(i);
  servo.write(180);
  delay(1000);
  servo.write(0);
  delay(1000);
  }
  lcd.clear();
  h=hour();
  Serial.print(h);
  Serial.print(":");
  m=minute();
  Serial.print(m);
  }