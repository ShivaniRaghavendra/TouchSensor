int led=33;
int TouchSensor=5;
void setup() {
  // put your setup code here, to run once:
  pinMode(TouchSensor,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  if( digitalRead(TouchSensor)==1)
  {
    digitalWrite(led,HIGH);
    
  }
  else{
    digitalWrite(led,LOW);
  }
  if(digitalRead(led)==1){
    Serial.println("Led On");
  }

}
