//--------------Electronics-project-hub-------------//
#include <ThingSpeak.h>
#include <ESP8266WiFi.h>
const byte numPins = 9;
#define A D0  
#define B D1  
#define C D2  
#define D D3  
#define E D4  
#define F D5  
#define G D6  
#define H D7
#define I D8


const char ssid[] = "123";  // your network SSID (name)
const char pass[] = "12312312";   // your network password 
        
WiFiClient  client;

unsigned long counterChannelNumber = 907271;            // Channel ID
const char * myCounterReadAPIKey = "QDYCJRVCHZXUDXGX"; // Read API Key
const int FieldNumber1 = 1;  // The field you wish to read
const int FieldNumber2 = 2;  // The field you wish to read

int answer[]={0,0,0,0,0,0,0,0,0};
void setup()
{
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  ThingSpeak.begin(client);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(H, OUTPUT);
  pinMode(I, OUTPUT);
}

void loop()
{ int statusCode;

  if (WiFi.status() != WL_CONNECTED)
  {
    Serial.print("Connecting to ");
    Serial.print(ssid);
    Serial.println(" ....");
    while (WiFi.status() != WL_CONNECTED)
    {
      WiFi.begin(ssid, pass);
      delay(5000);
    }
    Serial.println("Connected to Wi-Fi Succesfully.");
    }

    int temp = ThingSpeak.readLongField(counterChannelNumber, FieldNumber1, myCounterReadAPIKey);
    statusCode = ThingSpeak.getLastReadStatus();
    if (statusCode == 200)
    {
    Serial.print("Voltage value recieved: ");
    Serial.println(temp);
    }
    else
    {
    Serial.println("Unable to read channel / No internet connection");
    }
    int i=0;
    while (temp>0)
    {
      answer[i]=temp%2;
      temp=temp/2;
      i=i+1;
      }
    //byte num = temp; // Get num from somewhere
    //for (byte i=0; i<numPins; i++) {
    //byte state = bitRead(num, i);
    //digitalWrite(pins[i], state);
    //Serial.print(state);
    digitalWrite(A, answer[0]);
    digitalWrite(B, answer[1]);
    digitalWrite(C, answer[2]);
    digitalWrite(D, answer[3]);
    digitalWrite(E, answer[4]);
    digitalWrite(F, answer[5]);
    digitalWrite(G, answer[6]);
    digitalWrite(H, answer[7]);
    digitalWrite(I, answer[8]);


}
