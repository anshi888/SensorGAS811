#include <Arduino.h>

#include <MG811.h>

//MG811 mySensor = MG811(33); // Analog input A0

//float v400 = 4.535;
//float v40000 = 3.206;
float v;
void setup(){
    Serial.begin(9600);
    Serial.println("MG811 CO2 Sensor");
    
    // Calibration is not done in this examples - use default value
    // mySensor.calibrate() 
   // mySensor.begin(v400, v40000);
}


void loop(){
    Serial.print("adc: ");
    v = analogRead(4)/4095 * 5;

    Serial.println(v);
    //Serial.print("C02 Concetration: ");
  //  Serial.print(mySensor.read());
   // Serial.println(" ppm");
    
    delay(1000); // 1 second
}



































//#include "MHZ19.h"

//const int rx_pin = 17; //Serial rx pin no
//const int tx_pin = 16; //Serial tx pin no

//const int pwmpin = 14;

//MHZ19 *mhz19_uart = new MHZ19(rx_pin,tx_pin);
//MHZ19 *mhz19_pwm = new MHZ19(pwmpin);

/*----------------------------------------------------------
    MH-Z19 CO2 sensor  setup
  ----------------------------------------------------------*/
//void setup()
//{
  //  Serial.begin(115200);
  /*  mhz19_uart->begin(rx_pin, tx_pin);
    mhz19_uart->setAutoCalibration(false);
    delay(3000); // Issue #14
    Serial.print("MH-Z19 now warming up...  status:");
    Serial.println(mhz19_uart->getStatus());
    delay(1000);*/
//}

/*----------------------------------------------------------
    MH-Z19 CO2 sensor  loop
  ----------------------------------------------------------*/
//void loop()
//{
  /*  measurement_t m = mhz19_uart->getMeasurement();

    Serial.print("co2: ");
    Serial.println(m.co2_ppm);
    Serial.print("temp: ");
    Serial.println(m.temperature);

    //int co2ppm = mhz19_pwm->getPpmPwm();
    //Serial.print("co2: ");
    //Serial.println(co2ppm);
    
    delay(1000);*/
//}