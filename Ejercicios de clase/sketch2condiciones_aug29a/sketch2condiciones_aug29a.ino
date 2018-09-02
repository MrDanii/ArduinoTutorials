#define led_1 8           //definimos el pin 8 de nuestra placa arduino para nuestro led
boolean cambio;           //variable para efectuar el cambio de parpadea, cuando se cumpla una condición
int contador = 3;         //el número de veces que debe parpadear

void setup() {
  pinMode(led_1, OUTPUT); //Es de salida porque alimentará a nuestro LED
}

void loop() {
  if(cambio){             //Si se cumple determinada condición, parpadea de cierta forma
    parpadear(500);    
    if(contador == 0){
      cambio = false;     
      contador = 3;       //reinicioamos el contador
    }      
  }else{
    parpadear(100);
    if(contador == 0){
      cambio = true;
      contador = 3;
    }      
  }
  contador--;             //restamos el contador para cambiar la condición de nuestro parpadeo
}

/**
 * La función parpadear(int)
 * se encarga solamente de mantener encendido y apagado 
 * nuestro led el número de segundos del parámetro milisegundos
 */
void parpadear(int milisegundos){
  digitalWrite(led_1, HIGH);
  delay(milisegundos);
  digitalWrite(led_1, LOW);
  delay(milisegundos);
}
