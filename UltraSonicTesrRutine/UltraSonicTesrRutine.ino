/* basic rutine obtained from www.circuitbacics.com
 *  by scott campbell
 *  baisc code captured 22 june 2017
 *  
 *  wited up a circuit per scott campbell blog
 *  sucesfuly tested one of our hc-sr04 transevers
 *  it was very accurate at the 10 and 20 cm ranges did not need to calabrate
 *  we were also preselnty suprised to see that we could read ranges up to 200 cm
  */



#define trigPin 10
#define echoPin 13

void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  float duration, distance;
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) * 0.0344;
  
  if (distance >= 400 || distance <= 2){
    Serial.print("Distance = ");
    Serial.println("Out of range");
  }
  else {
    Serial.print("Distance = ");
    Serial.print(distance);
    Serial.println(" cm");
    delay(500);
  }
  delay(500);
}

