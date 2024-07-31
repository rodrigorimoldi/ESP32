/*
 * Arquivo:     Code1.ino
 * Autor:       Prof. Rodrigo Rimoldi de Lima
 *
 * Criacao:     30/07/2024
 * 
 * Descricao:   Codigo desenvolvido para piscar um LED e desenvolver o
 *              primeiro contato com a programacao do ESP32.
 */

// Definições de variáveis e constantes
#define ledPin  2     // GPIO2
#define timer   1000  // Tempo definido

// Parametrizações do dispositivo
void setup() {
  // Definição do modo operacional de cada pino
  pinMode(ledPin, OUTPUT);  // Saída digital
}

//Loop infinito
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
