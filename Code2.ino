// Definições de variáveis e constantes
const int ledPin      = 2;    // GPIO2
const int teclaPin    = 15;   // GPIO15
const int debouncing  = 20;

// Parametrizações do dispositivo
void setup() {
  // Definição do modo operacional de cada pino
  pinMode(ledPin, OUTPUT);
  pinMode(teclaPin, INPUT);
}

void loop() {
  if (!digitalRead(teclaPin)){
    delayMicroseconds(debouncing);
    digitalWrite(ledPin, HIGH);
  }

  else{
    delayMicroseconds(debouncing);
    digitalWrite(ledPin, LOW);
  }
}
