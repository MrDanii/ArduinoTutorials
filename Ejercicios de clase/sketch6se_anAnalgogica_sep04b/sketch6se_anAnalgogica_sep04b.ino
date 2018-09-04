#define pot A0
#define led 9

int valorPot = 0;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  valorPot = analogRead(pot);
  //Serial.print("Valor del potenciómetro");
  Serial.println(valorPot);
  digitalWrite(led, HIGH);
  delay(valorPot);
  digitalWrite(led, LOW);
  delay(valorPot); 
}
