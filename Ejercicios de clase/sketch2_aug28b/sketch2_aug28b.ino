#define led_1 8

/*
 * Que el led parpadee N veces rápido y N veces lento
 * Sin usar ciclos
 */
void setup() {
  pinMode(led_1, OUTPUT);
}

void loop() {
  parpadear(500, 3);
  parpadear(100, 3);
}

void parpadear(int milisegundos){
  digitalWrite(led_1, HIGH);
  delay(milisegundos);
  digitalWrite(led_1, LOW);
  delay(milisegundos);
}

void parpadear(int milisegundos, int n){
  parpadear(milisegundos);
  if(n > 0)
    parpadear(milisegundos, (n-1));  
}
