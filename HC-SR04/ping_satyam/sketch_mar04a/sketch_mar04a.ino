long duration,distance;
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(4, OUTPUT);
pinMode(12, INPUT);
Serial.begin(9600); 

}

void loop() {
digitalWrite(4, LOW); //Output to pin 4: 0
delayMicroseconds(2);
digitalWrite(4, HIGH); //Output to pin4: 5V 
delayMicroseconds(10);
digitalWrite(4, LOW); //Output to pin 4: 0
duration = pulseIn(12, HIGH); //Input from pin 12
distance= duration*0.034/2;
Serial.println("Distance: ");
Serial.println(distance);

if(distance<15)
{
  Serial.print("Condition Fulfilled");
  digitalWrite(LED_BUILTIN, HIGH);
  delayMicroseconds(2000);
  digitalWrite(LED_BUILTIN, LOW);
  
  
}
delayMicroseconds(10);
}
