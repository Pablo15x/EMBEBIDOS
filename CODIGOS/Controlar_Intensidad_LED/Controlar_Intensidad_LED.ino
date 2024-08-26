#define LED 5
#define POT A1
#define BR 9600
#define TIME 100

void setup(){
  Serial.begin(BR);
  pinMode(LED, OUTPUT);
  pinMode(POT, INPUT);
}

void loop (){
  //Se guarda mis datos en p
  int p = analogRead(POT);
  //Usamos esta funcion para convertir de 1023 a 255
  int CONV = map(p,0,1023,0,255);
  //Me perimeite trabajar con los valores de encendido y apagado para poder controlar la intenciadad
  analogWrite(LED,CONV);
  Serial.print (p);
  Serial.print ("   ");
  Serial.println(CONV);
  delay(100);
}
