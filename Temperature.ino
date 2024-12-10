#include <OneWire.h>
#include <DallasTemperature.h>

// Pin where DS18B20 is connected
#define ONE_WIRE_BUS D2 // Replace D2 with the GPIO you're using

// Setup a oneWire instance to communicate with any OneWire device
OneWire oneWire(ONE_WIRE_BUS);

// Pass the oneWire reference to DallasTemperature library
DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(115200); // Start serial communication
  sensors.begin();      // Start the DS18B20 sensor
  Serial.println("Temperature Sensor Example");
}

void loop() {
  sensors.requestTemperatures();               // Send command to get temperatures
  float temperature = sensors.getTempCByIndex(0); // Get temperature in Celsius
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println("°C");

  delay(2000); // Wait 1 second before next reading
}

