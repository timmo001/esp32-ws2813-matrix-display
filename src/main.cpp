#include <main.h>

using namespace std;

// void updateState()
// {
//   const size_t bufferSize = JSON_OBJECT_SIZE(4);
//   DynamicJsonBuffer jsonBuffer(bufferSize);
//   JsonObject &root = jsonBuffer.createObject();
//   root["led"] = "led";
//   char payload[root.measureLength() + 1];
//   root.printTo(payload, sizeof(payload));
//   publishState(0, true, payload);
// }

void setup()
{
  Serial.begin(115200);

  Serial.println();
  delay(500);
  Serial.println();
  Serial.println("-------------------------------");
  Serial.println("ESP32 WS2813 Matrix Display");
  Serial.println("-------------------------------");

  setupNetworking(WIFI_SSID, WIFI_PASSWORD, HOSTNAME);
  setupMqtt(MQTT_HOST, MQTT_PORT, MQTT_USERNAME, MQTT_PASSWORD,
            MQTT_TOPIC, MQTT_LWT_TOPIC, HOSTNAME);
  setupOTA(HOSTNAME, OTA_PORT, OTA_PASSWORD);

  // Declare outputs
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
}
