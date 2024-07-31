/*
 * Arquivo:     Code2.ino
 * Autor:       Prof. Rodrigo Rimoldi de Lima
 *
 * Criacao:     30/07/2024
 * 
 * Descricao:   Codigo desenvolvido para acionar um rele a partir
 *              da verificacao de uma condicao de entrada.
 */

// Definições de variáveis e constantes
#define  rele        19  // GPIO19
#define  tecla       15  // GPIO15
#define  debouncing  20  // Tempo para evitar trepidacoes

// Parametrizações do dispositivo
void setup() {
  pinMode(rele, OUTPUT);
  pinMode(tecla, INPUT);
}

// Loop infinito
void loop() {
  if (digitalRead(tecla)){
    delayMicroseconds(debouncing);
    digitalWrite(rele, HIGH);
  }

  else{
    delayMicroseconds(debouncing);
    digitalWrite(rele, LOW);
  }
}
