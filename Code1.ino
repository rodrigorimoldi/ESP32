// Definições de variáveis e constantes
const int ledPin    = 15;    // GPI15
const int timer     = 1000;

// Parametrizações do dispositivo
void setup() {
  // Definição do modo operacional de cada pino
  pinMode(ledPin, OUTPUT);  // Saída digital
}

void loop() {
  // Liga o LED
  digitalWrite(ledPin, HIGH);
  // Espera por 1 segundo
  delay(timer);
  // Desliga o LED
  digitalWrite(ledPin, LOW);
  // Espera por 1 segundo
  delay(timer);
}
