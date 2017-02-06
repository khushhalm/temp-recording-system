#include <EEPROM.h>
#include <TimeLib.h>
#include <Wire.h>
#include <DS1307RTC.h>  // a basic DS1307 library that returns time as a time_t

//TMP36 Pin Variables
int sensorPin = 0; //the analog pin the TMP36's Vout (sense) pin is connected to
//the resolution is 10 mV / degree centigrade with a
//500 mV offset to allow for negative temperatures

//float temperatureD = 0;

int addr = 0;
int value = 0;
int flag = 0;

int khus = 0;

int khus1 = 0;
int khus2 = 0;

void setup()  {
  Serial.begin(9600);
  while (!Serial) ; // wait until Arduino Serial Monitor opens
  setSyncProvider(RTC.get);   // the function to get the time from the RTC
  if (timeStatus() != timeSet)
    Serial.println("Unable to sync with the RTC");
  else
    Serial.println("RTC has set the system time");
}

void loop()
{
  if(flag == 0)
  {
    value = EEPROM.read(addr);
    while (value != 0)
    {
      value = EEPROM.read(addr);
      addr += 2;
    }
    Serial.println(addr);
    flag = 1;
  }
  
  if (timeStatus() == timeSet) {
    digitalClockDisplay();
  } else {
    Serial.println("The time has not been set.  Please run the Time");
    Serial.println("TimeRTCSet example, or DS1307RTC SetTime example.");
    Serial.println();
    delay(4000);
  }
  delay(1000);
}

void digitalClockDisplay() {
  // digital clock display of the time
  Serial.print(hour());
  printDigits(minute());
  printDigits(second());
  Serial.print(" ");
  Serial.print(day());
  Serial.print("/");
  Serial.print(month());
  Serial.print("/");
  Serial.print(year());
  Serial.println();

  //temperature sensor
  //getting the voltage reading from the temperature sensor
  int reading = analogRead(sensorPin);

  // converting that reading to voltage, for 3.3v arduino use 3.3
  float voltage = reading * 5.50;
  voltage /= 1023.0;

  float temperatureD = (voltage) * 100 ;

  //romit's value
  //changed from 30minutes to 10 minutes 
  if (minute() % 10 == 0 && second() == 0 && temperatureD >= 0)
  {
    //Serial.println("khushhal");
    Serial.println(temperatureD);
    khus = temperatureD * 100;
    //Serial.println(khus);
    Serial.println(addr);
    if (khus > 100 / 10)
    {
      khus1 = (khus % 100);
      khus2 = (khus - khus1) / 100;
      //Serial.println(khus1);
      //Serial.println(khus2);
    }
    byte lo = khus1;
    byte hi = khus2;

    //time also
    EEPROM.write(addr, hour());
    addr = addr + 1;
    EEPROM.write(addr, minute());
    addr = addr + 1;

    EEPROM.write(addr, hi);
    addr = addr + 1;
    EEPROM.write(addr, lo);

    delay(1000);
    khus = 0;
    addr = addr + 1;
    
    if (addr == EEPROM.length()) {
      addr = 0;
    }
  }
}

void printDigits(int digits) {
  // utility function for digital clock display: prints preceding colon and leading 0
  Serial.print(":");
  if (digits < 10)
    Serial.print('0');
  Serial.print(digits);
}
