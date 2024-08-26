#define LED 5
#define POT A1
#define BR 9600

void setup(){
  Serial.begin(BR);
  pinMode(LED, OUTPUT);
  pinMode(POT, INPUT);
}

void loop (){
  int p = analogRead(POT);
  Serial.println(p);
}
