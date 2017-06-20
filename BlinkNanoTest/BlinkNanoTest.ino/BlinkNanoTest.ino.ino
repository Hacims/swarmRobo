/*nano pin test program
 * 20/june 2017
 * porpus of this program is to test the adruino nano after soldering on the heading
 * 
 */
int pin0 = 0;
int pin1 = 1;
int pin2 = 2;
int pin3 = 3;
int pin4 = 4;
int pin5 = 5;
int pin6 = 6;
int pin7 = 7;
int pin8 = 8;
int pin9 = 9;
int pin10 = 10;
int pin11 = 11;
int pin12 = 12;
int pin13 = 13;
int pinA0 = A0;
int pinA1 = A1;
int pinA2 = A2;
int pinA3 = A3;
int pinA4 = A4;
int pinA5 = A5;
void setup() {
 
  pinMode(pin0 , OUTPUT);
  pinMode(pin1 , OUTPUT);
  pinMode(pin2 , OUTPUT);
  pinMode(pin3 , OUTPUT);
  pinMode(pin4 , OUTPUT);
  pinMode(pin5 , OUTPUT);
  pinMode(pin6 , OUTPUT);
  pinMode(pin7 , OUTPUT);
  pinMode(pin8 , OUTPUT);
  pinMode(pin9 , OUTPUT);
  pinMode(pin10 , OUTPUT);
  pinMode(pin11 , OUTPUT);
  pinMode(pin12 , OUTPUT);
  pinMode(pin13 , OUTPUT);
  pinMode(pinA0 , OUTPUT);
  pinMode(pinA1 , OUTPUT);
  pinMode(pinA2 , OUTPUT);
  pinMode(pinA3 , OUTPUT);
  pinMode(pinA4 , OUTPUT);
  pinMode(pinA5 , OUTPUT);
}


void loop() {
  digitalWrite(pin0 , HIGH);  
  digitalWrite(pin1 , HIGH);
  digitalWrite(pin2 , HIGH);
  digitalWrite(pin3 , HIGH);  
  digitalWrite(pin4 , HIGH);
  digitalWrite(pin5 , HIGH);
  digitalWrite(pin6 , HIGH);  
  digitalWrite(pin7 , HIGH);
  digitalWrite(pin8 , HIGH);
  digitalWrite(pin9 , HIGH);  
  digitalWrite(pin10 , HIGH);
  digitalWrite(pin11 , HIGH);
  digitalWrite(pin12 , HIGH);
  digitalWrite(pin13 , HIGH);
  digitalWrite(pinA0 , HIGH);  
  digitalWrite(pinA1 , HIGH);
  digitalWrite(pinA2 , HIGH);
  digitalWrite(pinA3 , HIGH);  
  digitalWrite(pinA4 , HIGH);
  digitalWrite(pinA5 , HIGH);
  delay(100);                       
  digitalWrite(pin0 , LOW);  
  digitalWrite(pin1 , LOW);
  digitalWrite(pin2 , LOW);
  digitalWrite(pin3 , LOW);  
  digitalWrite(pin4 , LOW);
  digitalWrite(pin5 , LOW);
  digitalWrite(pin6 , LOW);  
  digitalWrite(pin7 , LOW);
  digitalWrite(pin8 , LOW);
  digitalWrite(pin9 , LOW);  
  digitalWrite(pin10 , LOW);
  digitalWrite(pin11 , LOW);
  digitalWrite(pin12 , LOW);
  digitalWrite(pin13 , LOW);
  digitalWrite(pinA0 , LOW);  
  digitalWrite(pinA1 , LOW);
  digitalWrite(pinA2 , LOW);
  digitalWrite(pinA3 , LOW);  
  digitalWrite(pinA4 , LOW);
  digitalWrite(pinA5 , LOW);
  delay(100);                  
}



