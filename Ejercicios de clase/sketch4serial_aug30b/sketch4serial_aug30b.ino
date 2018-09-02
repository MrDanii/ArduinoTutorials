char inputData [17];

void setup() {  
  Serial.begin(9600);               // Es la velocidad del serial dado en bits / segundo
}

void loop() {
  if(Serial.available() > 0){       // Solo si el serial está disponible
    delay(100);
    int i = 0;
    while(Serial.available() > 0){
      inputData[i] = Serial.read();
      i ++;
    }
    Serial.println(inputData);
    for(int j = 0; j < 17; j++)     // Limpiamos nuestro arreglo de carácteres
      inputData[i] = 0;
  }
}
