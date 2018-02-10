#include <OneWire.h>
#include <DallasTemperature.h>

// Thermometer is connected to pin 2
#define ONE_WIRE_BUS 2

// Wait 5 seconds between checking temperature
#define CONTROL_INTERVAL 10000


// State variables


// Setup a oneWire instance to communicate with OneWire devices
OneWire oneWire(ONE_WIRE_BUS);

// Pass our oneWire reference to the Dallas Temperature library
DallasTemperature sensors(&oneWire);
DeviceAddress thermometer;

void setup() {
  // put your setup code here, to run once:
Serial.begin(57600);
    sensors.begin();
}

void loop() {
  // put your main code here, to run repeatedly:

int temperature = Bean.getTemperature();

  
  Serial.print(temperature);
  Serial.print(" C");
  Bean.sleep(3000);

}
