void setup() {
  Serial.begin(9600);
}

void loop() {
  while(!Serial.available());
  String texto = Serial.readString();
  delay(50);
  texto.toUpperCase();
  Serial.print("Você disse: ");
  Serial.println(texto);
}
