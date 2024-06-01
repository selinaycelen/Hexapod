// #define BLYNK_TEMPLATE_ID "TMPL6sdSgsVf9"
// #define BLYNK_TEMPLATE_NAME "Servo Kontrol"
// #define BLYNK_AUTH_TOKEN "rnazd7l2zieeBxTIYWiMWfBe89xB1Y8K"

// #define BLYNK_PRINT Serial

// #define SERVOMIN  150 
// #define SERVOMAX  600 

// #include <Arduino.h>
// #include <ESP32Servo.h>
// #include <Wire.h>
// #include <WiFi.h>
// #include <WiFiClient.h>
// #include <BlynkSimpleEsp32.h>


// // Servo Tanımlamaları

// Servo myServo1;
// Servo myServo2;
// Servo myServo3;
// Servo myServo4;
// Servo myServo5;
// Servo myServo6;
// Servo myServo7;
// Servo myServo8;
// Servo myServo9;

// Servo myServo10;
// Servo myServo11;
// Servo myServo12;

// Servo myServo13;
// Servo myServo14;
// Servo myServo15;

// Servo myServo16;









// const int SERVO1_PIN = 13; // 1. Bacak Uç Motor
// const int SERVO2_PIN = 12; // 2. Bacak Uç Motor 
// const int SERVO3_PIN = 14; // 3. Bacak Uç Motor 
// const int SERVO4_PIN = 27; // 1. Bacak Orta Motor
// const int SERVO5_PIN = 26; // 2. Bacak Orta Motor
// const int SERVO6_PIN = 25; // 3. Bacak Orta Motor
// const int SERVO7_PIN = 33; // 1. Bacak Son Motor
// const int SERVO8_PIN = 32; // 2. Bacak Son Motor
// const int SERVO9_PIN = 23; // 3. Bacak Son Motor (ESP pin sayısı yeterli olmadığı için diğer tarafa geçirildi)

// const int SERVO10_PIN = 15; // 4. Bacak Uç Motor
// const int SERVO11_PIN = 2;  // 5. Bacak Uç Motor 
// const int SERVO12_PIN = 4; // 6. Bacak Uç Motor 

// const int SERVO13_PIN = 16; // 4. Bacak Orta Motor
// const int SERVO14_PIN = 17; // 5. Bacak Orta Motor
// const int SERVO15_PIN = 5; // 6. Bacak Orta Motor

// const int SERVO16_PIN = 18; // 4. Bacak Son Moto



// const int SERVO17_PIN = 22;
// const int SERVO18_PIN = 21;  // 6. Bacak Son Motor (ESP pin sayısı yeterli olmadığı için diğer tarafa geçirildi)







// // Wifi Adı ve şifresi, gerekli auth key


// char auth[] = "rnazd7l2zieeBxTIYWiMWfBe89xB1Y8K"; 
// char ssid[] = "Selinay"; 
// char pass[] = "kkcslny88"; 


// void setup() {
  
//   Serial.begin(9600);

//   // Bylnk bağlantısına başlatma

//   Blynk.begin(auth, ssid, pass);
  
//   // Uç servoları pinlerle eşleştirme

//   myServo1.attach(SERVO1_PIN);
//   myServo2.attach(SERVO2_PIN);
//   myServo3.attach(SERVO3_PIN);


//   myServo10.attach(SERVO10_PIN);
//   myServo11.attach(SERVO11_PIN);
//   myServo12.attach(SERVO12_PIN);
  
//   myServo13.attach(SERVO13_PIN);
//   myServo14.attach(SERVO14_PIN);
//   myServo15.attach(SERVO15_PIN);
  
//   myServo16.attach(SERVO16_PIN);
 

//   // Orta servoları pinlerle eşleştirme

//   myServo4.attach(SERVO4_PIN);
//   myServo5.attach(SERVO5_PIN);
//   myServo6.attach(SERVO6_PIN);

  
//   // Son servoları pinlerle eşleştirme

//   myServo7.attach(SERVO7_PIN);
//   myServo8.attach(SERVO8_PIN);
//   myServo9.attach(SERVO9_PIN);

  
// }

// void loop() {

//   Blynk.run();

// }

// BLYNK_WRITE(V0) { 

//   int value = param.asInt(); 
  
//   myServo1.write(value);
//   myServo2.write(value);
//   myServo3.write(value);
  
// }

// BLYNK_WRITE(V1) { 

//   int value = param.asInt(); 

//   myServo4.write(value);
//   myServo5.write(value);
//   myServo6.write(value);

// }

// BLYNK_WRITE(V2) { 

//   int value = param.asInt(); 

//   myServo7.write(value);
//   myServo8.write(value);
//   myServo9.write(value);

// }

// BLYNK_WRITE(V3) { 

//   int value = param.asInt(); 
  
//   // myServo14.detach();
//   // myServo15.detach();
//   // myServo14.attach(SERVO14_PIN);
//   // myServo15.attach(SERVO15_PIN);
  
//   myServo13.write(value);
//   myServo14.write(value);
//   myServo15.write(value);

// }

// BLYNK_WRITE(V4) { // Servo Uçlar

//   int value1 = param.asInt(); 
  
//   myServo10.write(value1);
//   myServo11.write(value1);
//   myServo12.write(value1);

// }

// BLYNK_WRITE(V5) { // Servo Uçlar

//   int value = param.asInt(); 
  
//   // myServo14.detach();
//   // myServo14.attach(SERVO17_PIN);
//   // myServo15.detach();
//   // myServo15.attach(SERVO18_PIN);

//   myServo16.write(value);
//   myServo14.write(value);
//   myServo15.write(value);

// }


//------------------------------------------------------------------------------------------------------------------------------------------------------------


#define BLYNK_TEMPLATE_ID "TMPL6sdSgsVf9"
#define BLYNK_TEMPLATE_NAME "Servo Kontrol"
#define BLYNK_AUTH_TOKEN "rnazd7l2zieeBxTIYWiMWfBe89xB1Y8K"

#define BLYNK_PRINT Serial

#define SERVOMIN  150 
#define SERVOMAX  600 

#include <Arduino.h>
#include <ESP32Servo.h>
#include <Wire.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>


// Servo Tanımlamaları

Servo myServo1;
Servo myServo2;
Servo myServo3;
Servo myServo4;
Servo myServo5;
Servo myServo6;
Servo myServo7;
Servo myServo8;
Servo myServo9;
Servo myServo10;
Servo myServo11;
Servo myServo12;
Servo myServo13;
Servo myServo14;
Servo myServo15;
Servo myServo16;

const int SERVO1_PIN = 13; // 1. Bacak Uç Motor
const int SERVO2_PIN = 12; // 2. Bacak Uç Motor 
const int SERVO3_PIN = 14; // 3. Bacak Uç Motor 
const int SERVO4_PIN = 27; // 1. Bacak Orta Motor
const int SERVO5_PIN = 26; // 2. Bacak Orta Motor
const int SERVO6_PIN = 25; // 3. Bacak Orta Motor
const int SERVO7_PIN = 33; // 1. Bacak Son Motor
const int SERVO8_PIN = 32; // 2. Bacak Son Motor
const int SERVO9_PIN = 23; // 3. Bacak Son Motor (ESP pin sayısı yeterli olmadığı için diğer tarafa geçirildi)
const int SERVO10_PIN = 15; // 4. Bacak Uç Motor
const int SERVO11_PIN = 2;  // 5. Bacak Uç Motor 
const int SERVO12_PIN = 4; // 6. Bacak Uç Motor 
const int SERVO13_PIN = 16; // 4. Bacak Orta Motor
const int SERVO14_PIN = 17; // 5. Bacak Orta Motor
const int SERVO15_PIN = 5; // 6. Bacak Orta Motor
const int SERVO16_PIN = 18; // 4. Bacak Son Moto
const int SERVO17_PIN = 19;
const int SERVO18_PIN = 21;  

// Wifi Adı ve şifresi, gerekli auth key

int i = 0;
int Start = 0;
int Son_Kol_Baslangic_Pos = 10;
int Orta_Kol_Baslangic_Pos = 90;
int Ilk_Kol_Baslangic_Pos = 70;

char auth[] = "rnazd7l2zieeBxTIYWiMWfBe89xB1Y8K"; 
char ssid[] = "TurkTelekom_Z7VNN"; 
char pass[] = "ozanozanozan"; 


void setup() {
  
  Serial.begin(9600);

  // Bylnk bağlantısına başlatma

  Blynk.begin(auth, ssid, pass);
  
  // Uç servoları pinlerle eşleştirme

  myServo1.attach(SERVO1_PIN);//--
  myServo2.attach(SERVO12_PIN);//--
  myServo3.attach(SERVO3_PIN);
  myServo4.attach(SERVO4_PIN);
  myServo5.attach(SERVO5_PIN);
  myServo6.attach(SERVO6_PIN);
  myServo7.attach(SERVO7_PIN);
  myServo8.attach(SERVO8_PIN);
  myServo9.attach(SERVO9_PIN);
  myServo10.attach(SERVO10_PIN);
  myServo11.attach(SERVO11_PIN);
  myServo12.attach(SERVO12_PIN);
  myServo13.attach(SERVO13_PIN);
  myServo14.attach(SERVO14_PIN);
  myServo15.attach(SERVO15_PIN); 
  myServo16.attach(SERVO16_PIN);

}

void loop() {

  Blynk.run();

  if (Start == 10)
  {
    myServo1.detach();
    myServo2.detach();
    myServo3.detach();
    myServo10.detach();
    myServo11.detach();
    myServo12.detach();

    myServo1.attach(SERVO1_PIN);
    myServo2.attach(SERVO2_PIN);
    myServo3.attach(SERVO3_PIN);
    myServo10.attach(SERVO10_PIN);
    myServo11.attach(SERVO11_PIN);
    myServo12.attach(SERVO12_PIN);
    
    myServo1.write(90);
    myServo2.write(90);
    myServo3.write(90);
    myServo10.write(90);
    myServo11.write(90);
    myServo12.write(90);
    delay(500);

    myServo4.detach();
    myServo5.detach();
    myServo6.detach();
    myServo13.detach();
    myServo14.detach();
    myServo15.detach();

    myServo4.attach(SERVO4_PIN);
    myServo5.attach(SERVO5_PIN);
    myServo6.attach(SERVO6_PIN);
    myServo13.attach(SERVO13_PIN);
    myServo14.attach(SERVO14_PIN);
    myServo15.attach(SERVO15_PIN);
    
    myServo4.write(10);
    myServo5.write(10);
    myServo6.write(10);
    myServo13.write(10);
    myServo14.write(10);
    myServo15.write(10);
    delay(500);

    myServo7.detach();
    myServo8.detach();
    myServo9.detach();
    myServo11.detach();
    myServo2.detach();
    myServo16.detach();

    myServo7.attach(SERVO7_PIN);
    myServo8.attach(SERVO8_PIN);
    myServo9.attach(SERVO9_PIN);
    myServo11.attach(SERVO18_PIN);
    myServo2.attach(SERVO17_PIN);
    myServo16.attach(SERVO16_PIN);

    myServo7.write(70);
    myServo8.write(70);
    myServo9.write(70);
    myServo4.write(70);
    myServo5.write(70);
    myServo6.write(70);
    delay(500);
    

    Start = 0;
  }

}

BLYNK_WRITE(V0) { 

  int value = param.asInt(); 


  myServo13.write(value);
  myServo14.write(value);
  myServo15.write(value);
  myServo4.write(value);
  myServo5.write(value);
  myServo6.write(value);
  
}

BLYNK_WRITE(V1) { 

  int value = param.asInt(); 
  myServo1.detach();
  myServo2.detach();
  myServo1.attach(SERVO17_PIN);
  myServo2.attach(SERVO18_PIN);

  myServo16.write(value);
  myServo1.write(value);
  myServo2.write(value);
  myServo7.write(value);
  myServo8.write(value);
  myServo9.write(value);

}

BLYNK_WRITE(V2) { 

  Start = param.asInt(); 
  
}

// BLYNK_WRITE(V4) { // Servo Uçlar

//   int value = param.asInt(); 
  
//   degistir1();
  
  
//   myServo13.write(value);
//   myServo14.write(value);
//   myServo15.write(value);

// }

// BLYNK_WRITE(V5) { // Servo Uçlar

//   int value = param.asInt(); 
  
//   degistir2();
  
//   myServo14.detach();
//   myServo15.detach();
//   myServo14.attach(SERVO17_PIN);
//   myServo15.attach(SERVO18_PIN);


//   myServo14.write(value);
//   myServo15.write(value);
//   myServo16.write(value);

// }
