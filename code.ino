
#define REMOTEXY_MODE__ESP32CORE_WIFI_CLOUD
#include <WiFi.h>

#include <RemoteXY.h>

// RemoteXY connection settings 
#define REMOTEXY_WIFI_SSID "GANGA"
#define REMOTEXY_WIFI_PASSWORD "432101234"
#define REMOTEXY_CLOUD_SERVER "cloud.remotexy.com"
#define REMOTEXY_CLOUD_PORT 6376
#define REMOTEXY_CLOUD_TOKEN "1411aa6743a591a769f2cfc7a3291ee1"


// RemoteXY configurate  
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =   // 70 bytes
  { 255,3,0,1,0,63,0,16,24,1,70,16,5,78,17,17,36,37,0,2,
  0,7,19,22,11,121,26,31,31,79,78,0,79,70,70,0,2,0,6,33,
  22,11,2,26,31,31,79,78,0,79,70,70,0,2,0,6,49,22,11,50,
  26,31,31,79,78,0,79,70,70,0 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // input variables
  uint8_t switch_1; // =1 if switch ON and =0 if OFF 
  uint8_t switch_2; // =1 if switch ON and =0 if OFF 
  uint8_t switch_3; // =1 if switch ON and =0 if OFF 

    // output variables
  uint8_t led_1; // led state 0 .. 1 

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0 

} RemoteXY;
#pragma pack(pop)

/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////



void setup() 
{
  RemoteXY_Init (); 
  pinMode(2,OUTPUT);
   pinMode(0,OUTPUT);
    pinMode(4,INPUT);
  // TODO you setup code
  
}

void loop() 
{ 
  RemoteXY_Handler ();
    RemoteXY_Handler ();
  if(RemoteXY.switch_1==1){
    digitalWrite(2,HIGH);
    }
    else{
      digitalWrite(2,LOW);
      }
        RemoteXY_Handler ();
  if(RemoteXY.switch_2==1){
    digitalWrite(0,HIGH);
    }
    else{
      digitalWrite(0,LOW);
      }
        RemoteXY_Handler ();

       if(digitalRead(4)==1){
        RemoteXY.led_1= 1;}
        else{
          RemoteXY.led_1= 0;
          }
        
        }
 
