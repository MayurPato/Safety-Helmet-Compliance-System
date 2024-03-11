#define BLYNK_TEMPLATE_ID "TMPL39zmk2BMR"
#define BLYNK_DEVICE_NAME "Tarp Project"
#define BLYNK_AUTH_TOKEN "Ge1vZ1bLCsqGz2JchLLDjjFLpqAqpawt"
#define BLYNK_PRINT Serial

#include <BlynkSimpleEsp8266.h>

int alert;

char auth[] = BLYNK_AUTH_TOKEN ;
char ssid[] = "";
char pass[] = "";

BLYNK_WRITE(V0)
{
  alert = param.asInt();
  if (alert == 1){
    Serial.println("NO HELMET DETECTED!");
  }
  
}

void helmet()
{
  if (alert == 1){
    digitalWrite(D1, HIGH);
    delay(500);
  }
  else{
    digitalWrite(D1, LOW);
    delay(200);
  }
}


void setup()
{
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  pinMode(D1, OUTPUT);
}

void loop()
{
  Blynk.run();
  helmet();
}
