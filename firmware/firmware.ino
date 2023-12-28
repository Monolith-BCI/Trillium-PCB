#define PIN_SPI_SS 7
#define PIN_SPI_SCK 4
#define PIN_SPI_MOSI 6
#define PIN_SPI_MISO 5

#define WAKEUP 0x02
#define STANDBY 0x04
#define RESET 0x06
#define START 0x08
#define STOP 0x0A
#define RDATAC 0x10
#define SDATAC 0x11
#define RDATA 0x12

#include <SPI.h>

void setup()
{
  Serial.begin(9600);

  SPI.begin();
  SPI.transfer(START);
}

void loop()
{
  Serial.println(SPI.transfer(0));
}