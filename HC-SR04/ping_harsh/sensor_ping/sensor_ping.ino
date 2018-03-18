int cycle,dist;


void setup() 
{
  Serial.begin(9600);
  pinMode(7,OUTPUT);   //echo
  pinMode(8,INPUT);    //trigger
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() 
{
  //READING WAVE  
  digitalWrite(7,LOW);
  delayMicroseconds(10);
  digitalWrite(7,HIGH);
  delayMicroseconds(10);
  digitalWrite(7,LOW);
  delayMicroseconds(10);
  

  cycle = pulseIn(8,HIGH);
  dist = int(0.017*cycle);
  Serial.println(dist);

  if(dist<=15)
  {
   digitalWrite(LED_BUILTIN,HIGH);
  }
  else
  {
     digitalWrite(LED_BUILTIN,LOW);
  }
  
  
}
