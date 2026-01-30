#include "DHT.h"

// Hardware Configuration
#define DHTPIN 2      // Pin where the sensor is connected [cite: 1]
#define DHTTYPE DHT11 // Sensor type [cite: 1]

// Initialize the sensor object
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // Initialize the serial monitor at 9600 baud [cite: 2, 23]
  Serial.begin(9600); 
  Serial.println(F("--- DHT11 System Start ---"));
  
  // Initialize the DHT sensor [cite: 2, 3]
  dht.begin();
}

void loop() {
  // Reading environmental data [cite: 4]
  float humidity = dht.readHumidity();           
  float temperatureC = dht.readTemperature();    // Temperature in Celsius [cite: 4]
  float temperatureF = dht.readTemperature(true); // Temperature in Fahrenheit [cite: 4]
  
  // Calculate Kelvin [cite: 4]
  float temperatureK = temperatureC + 273.15;

  // Check if any reading failed [cite: 5]
  if (isnan(humidity) || isnan(temperatureC)) {
    Serial.println(F("Error: Failed to read from DHT sensor!")); // [cite: 5]
    return;
  }

  // --- Output data to the Serial Monitor ---
  Serial.print(F("Temperature: "));
  Serial.print(temperatureC);
  Serial.print(F("°C | "));
  
  Serial.print(temperatureF);
  Serial.print(F("°F | "));
  
  Serial.print(temperatureK);
  Serial.print(F("K"));
  Serial.println("");

  Serial.print(F("Humidity: "));
  Serial.print(humidity);
  Serial.println(F("%")); // [cite: 7]

  // Delay between readings for stability (2 seconds) [cite: 7, 22]
  delay(2000); 
}