//Prueba Buzzer
#define bocina 3

void setup() {
  //no es necesario darle un modo al pin, si utilizamos un buzzer
}

void loop() {
  //la frecuencia acepta rangos 31 Hz a 65535 Hz
  // genera un tono de 440Hz durante un segundo
  tone(bocina, 240); //tone(nPin, frecuencia);
  delay(100);          //noTone(nPin);
  tone(bocina, 340); //tone(nPin, frecuencia);
  delay(100);          //noTone(nPin);
  tone(bocina, 440); //tone(nPin, frecuencia);
  delay(100);          //noTone(nPin);
  tone(bocina, 540); //tone(nPin, frecuencia);
  delay(100);          //noTone(nPin);
  tone(bocina, 640); //tone(nPin, frecuencia);
  delay(100);          //noTone(nPin);
  tone(bocina, 740); //tone(nPin, frecuencia);
  delay(100);          //noTone(nPin);
  tone(bocina, 840); //tone(nPin, frecuencia);
  delay(100);          //noTone(nPin);
  tone(bocina, 940); //tone(nPin, frecuencia);
  delay(100);          //noTone(nPin);

  //detenemos el tono durante 500ms
  noTone(bocina);
  delay(5000);

  //generamos un tono de 600Hz durante 500ms, y detenerlo durante 500ms
  tone(bocina, 1000, 300);
  delay(300);
}
