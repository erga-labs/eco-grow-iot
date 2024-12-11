#include "ota.h"
#include <WiFi.h>
#include "secrets.h"

void connectToWiFi() {
    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.println("\nWi-Fi Connected.");
    Serial.println(WiFi.localIP());
}


void setup() {
    Serial.begin(9600);
    connectToWiFi();
}

void loop() {

    // Check WiFi and perform OTA
    if (WiFi.status() == WL_CONNECTED) {
        performOTAUpdate();
    } else {
        connectToWiFi();
    }

    delay(60000);  // Wait a minute between update checks
}