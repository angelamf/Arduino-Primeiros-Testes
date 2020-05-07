float number1, number2;
char operation;

void setup() {
  Serial.begin(9600);
  Serial.println("\nDigite a expressão completa!\n");
}

void loop() {
  while (Serial.available()) {

    number1 = Serial.parseFloat();
    operation = Serial.read();
    number2 = Serial.parseFloat();

    Serial.print("Resultado = ");
    Serial.println(resolucao());
    delay(500);
    Serial.flush();
    Serial.println("\nDigite a expressão completa!\n");
  }
}

float resolucao() {
  switch (operation) {
    case '+' :
      return number1 + number2;
    case '-' :
      return number1 - number2;
    case '*' :
      return number1 * number2;
    case '/' :
      return number1 / number2;
    default :
      Serial.println("OPERAÇÃO INVÁVIDA\n");
      return 0;
  }
}
