int trigPin=9;
int echoPin = 8;

long duration;
double distance;

void setup() {
  pinMode(trigPin,OUTPUT);  //Define Pin

  pinMode(echoPin,INPUT);

  Serial.begin(9600);
     
}

void loop() {
  
    digitalWrite(trigPin,LOW);
    delay(100);
    digitalWrite(trigPin,HIGH);  // Create a 10 micro second pulse
    delayMicroseconds(10);
    digitalWrite(trigPin,LOW);
    duration=pulseIn(echoPin,HIGH);
    distance=duration*0.034/2;
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
}
