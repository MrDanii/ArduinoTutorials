#define led_1 8         //Nuestro led de salida
#define button_1 7      //Nuestra entrada de satos que será el boton
boolean valor_led_1 = LOW;
boolean valor_button_1 = LOW;

void setup() {
  pinMode(led_1, OUTPUT);
  pinMode(button_1, INPUT);
}

void loop() {
  while(digitalRead(button_1) == LOW)
    valor_button_1 = LOW;
      
  if(valor_button_1 == LOW){
    valor_led_1 = !valor_led_1;
    digitalWrite(led_1, valor_led_1);
    valor_button_1 = HIGH;
  }
}
