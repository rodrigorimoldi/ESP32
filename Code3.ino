/*
 * Arquivo:     Code3.ino
 * Autor:       Prof. Rodrigo Rimoldi de Lima
 *
 * Criacao:     06/08/2024
 * 
 * Descricao:   Codigo desenvolvido para acionar um display
 *              de 7 segmentos, unitário, 2 ou 4 unidades.
 */


// Definições de variáveis e constantes
#define display1  35    // GPIO35
#define display2  32    // GPIO32
#define display3  33    // GPIO33
#define display4  25    // GPIO25
#define seg1      12
#define seg2      13
#define seg3      14
#define seg4      27


// Parametrizações do dispositivo
void setup() {
  pinMode(display1, OUTPUT);
  pinMode(display2, OUTPUT);
  pinMode(display3, OUTPUT);
  pinMode(display4, OUTPUT);
  pinMode(seg1, OUTPUT);
  pinMode(seg2, OUTPUT);
  pinMode(seg3, OUTPUT);
  pinMode(seg4, OUTPUT);
}

// Loop infinito
void loop() {
  digitalWrite(display1, HIGH);
  /*digitalWrite(seg1, LOW);
  digitalWrite(seg2, LOW);
  digitalWrite(seg3, LOW);
  digitalWrite(seg4, LOW);
  delay(1000);
  digitalWrite(seg1, LOW);
  digitalWrite(seg2, LOW);
  digitalWrite(seg3, LOW);
  digitalWrite(seg4, HIGH);
  delay(1000);
  digitalWrite(seg1, LOW);
  digitalWrite(seg2, LOW);
  digitalWrite(seg3, HIGH);
  digitalWrite(seg4, LOW);
  delay(1000);
  digitalWrite(seg1, LOW);
  digitalWrite(seg2, LOW);
  digitalWrite(seg3, HIGH);
  digitalWrite(seg4, HIGH);
  delay(1000);
  digitalWrite(seg1, LOW);
  digitalWrite(seg2, HIGH);
  digitalWrite(seg3, LOW);
  digitalWrite(seg4, LOW);
  delay(1000);
  digitalWrite(seg1, LOW);
  digitalWrite(seg2, HIGH);
  digitalWrite(seg3, LOW);
  digitalWrite(seg4, HIGH);
  delay(1000);
  digitalWrite(seg1, LOW);
  digitalWrite(seg2, HIGH);
  digitalWrite(seg3, HIGH);
  digitalWrite(seg4, LOW);
  delay(1000);
  digitalWrite(seg1, LOW);
  digitalWrite(seg2, HIGH);
  digitalWrite(seg3, HIGH);
  digitalWrite(seg4, HIGH);
  delay(1000);
  digitalWrite(seg1, HIGH);
  digitalWrite(seg2, LOW);
  digitalWrite(seg3, LOW);
  digitalWrite(seg4, LOW);
  delay(1000);
  digitalWrite(seg1, HIGH);
  digitalWrite(seg2, LOW);
  digitalWrite(seg3, LOW);
  digitalWrite(seg4, HIGH);
  delay(1000);
  digitalWrite(seg1, HIGH);
  digitalWrite(seg2, LOW);
  digitalWrite(seg3, HIGH);
  digitalWrite(seg4, LOW);
  delay(1000);
  digitalWrite(seg1, HIGH);
  digitalWrite(seg2, LOW);
  digitalWrite(seg3, HIGH);
  digitalWrite(seg4, HIGH);
  delay(1000);
  digitalWrite(seg1, HIGH);
  digitalWrite(seg2, HIGH);
  digitalWrite(seg3, LOW);
  digitalWrite(seg4, LOW);
  delay(1000);
  digitalWrite(seg1, HIGH);
  digitalWrite(seg2, HIGH);
  digitalWrite(seg3, LOW);
  digitalWrite(seg4, HIGH);
  delay(1000);
  digitalWrite(seg1, HIGH);
  digitalWrite(seg2, HIGH);
  digitalWrite(seg3, HIGH);
  digitalWrite(seg4, LOW);
  delay(1000);*/
  digitalWrite(seg1, HIGH);
  digitalWrite(seg2, LOW);
  digitalWrite(seg3, HIGH);
  digitalWrite(seg4, LOW);
  //delay(1000);
}
