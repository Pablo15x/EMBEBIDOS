#define LED 13
#define t 1000 
void setup() {
  // put your setup code here, to run once:
  pinMode (LED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);  
  delay(t);                
  digitalWrite(LED, LOW);  
  delay(t);                

}
