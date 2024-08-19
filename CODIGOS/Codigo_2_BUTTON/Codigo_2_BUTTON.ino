#define LED 13
#define BUTTON 2

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop (){
  
  short DATO = digitalRead(BUTTON);
  
  if (DATO == HIGH){
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}
