#include <EEPROM.h>
// start reading from the first byte (address 0) of the EEPROM
int address = 0;
byte value;

void setup() {
  // initialize serial and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
}

void loop() {
  // read a byte from the current address of the EEPROM
  value = EEPROM.read(address);

  //Serial.print(address);
  Serial.print(EEPROM.read(address));
  address = address + 1;
  Serial.print(":");
  Serial.print(EEPROM.read(address));
  address = address + 1;
  Serial.print("\t");
  Serial.print(EEPROM.read(address), DEC);
  address = address + 1;
  Serial.print(EEPROM.read(address), DEC);
  Serial.println();

  address = address + 1;
  if (address == EEPROM.length()) {
    while(1) { }
  }
  delay(500);
}
