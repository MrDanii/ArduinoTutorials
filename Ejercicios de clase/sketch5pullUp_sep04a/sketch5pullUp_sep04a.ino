#define pinEntrada 13
boolean flag = false;
float tiempoI = 0;
float tiempoF = 0;

void setup() {
  pinMode(pinEntrada, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  tiempoI = millis();

  while(digitalRead(pinEntrada) == LOW)
    flag = true;
    
  tiempoF = millis();
  
  if(flag == true){
    tiempoF = tiempoF - tiempoI;
    tiempoF /= 1000.0;
    Serial.print("El boton se pulsa");
    Serial.print(tiempoF);
    Serial.print(" Segundos");
    tiempoF = 0;
    flag = false;
  }
}
