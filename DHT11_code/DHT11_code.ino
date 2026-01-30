/*
 * 🌡️ Project: Arduino Weather Station (DHT11)
 * Clean Version: No garbage output, formatted numbers.
 */

#include "DHT.h"

// --- CONFIGURATION ---
#define DHTPIN  2      // Pin D2
#define DHTTYPE DHT11  // Sensor type

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // 1. Start Serial Communication
  Serial.begin(9600); 

  // 2. ANTI-GARBAGE DELAY
  // Give the serial connection 100ms to stabilize before sending text.
  delay(100); 

  // 3. CLEAR SCREEN EFFECT
  // Print empty lines to push away any old "garbage" from previous runs.
  Serial.println("\n\n\n\n"); 

  // 4. Start Sensor
  dht.begin();

  // 5. Clean Header
  Serial.println(F("================================="));
  Serial.println(F("   🌱 DHT11 SYSTEM STARTED 🌱    "));
  Serial.println(F("================================="));
}

void loop() {
  // Wait 2 seconds between measurements
  delay(2000);

  // Read Data
  float humidity = dht.readHumidity();
  float tempC = dht.readTemperature();     
  float tempF = dht.readTemperature(true); 

  // Check for Errors (Disconnects)
  if (isnan(humidity) || isnan(tempC) || isnan(tempF)) {
    Serial.println(F("❌ ERROR: Sensor not found. Check wires!"));
    return;
  }

  // Calculate Kelvin
  float tempK = tempC + 273.15;

  // --- CLEAN OUTPUT FORMATTING ---
  // We use ", 1" to show only 1 decimal place (e.g. 24.5 instead of 24.5000)
  
  Serial.print(F("💧 Hum: "));
  Serial.print(humidity, 0); // Humidity usually doesn't need decimals
  Serial.print(F("%  |  "));

  Serial.print(F("🌡️ Temp: "));
  Serial.print(tempC, 1);    // 1 decimal for Celsius
  Serial.print(F("°C / "));
  
  Serial.print(tempF, 1);    // 1 decimal for Fahrenheit
  Serial.print(F("°F / "));

  Serial.print(tempK, 1);    // 1 decimal for Kelvin
  Serial.println(F("K"));
}
