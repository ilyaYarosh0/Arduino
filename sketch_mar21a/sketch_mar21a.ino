
int switchPin = 12;
int ledPin = 13;
int trig=0;
void setup() {
digitalWrite(switchPin, HIGH);
pinMode(ledPin, OUTPUT);
} 
void loop() {
if(digitalRead(switchPin)==LOW){
  delay(120);
  if(digitalRead(switchPin)==LOW)
  trig=~trig;
  }
 digitalWrite(ledPin,trig);
}

