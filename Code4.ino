/*
 * Arquivo:     Code4.ino
 * Autor:       Prof. Rodrigo Rimoldi de Lima
 *
 * Criacao:     31/07/2024
 * 
 * Descricao:   Codigo desenvolvido para acionar um display LCD 16x2 em 4 bits.
 * 
 * Pinagem do LCD:  D7(GPIO0), D6(GPIO4), D5(GPIO16), D4(GPIO17),
 *                  D3 a D0 (GND), RS(GPIO5), R/W(GND), E(GPIO18)
 */

#include <LiquidCrystal.h>

// Inicializa a biblioteca com os números dos pinos conectados
LiquidCrystal lcd(18, 5, 17, 16, 4, 0);
              // (RS, E, D4, D5, D6, D7), 4 bits

void setup() {
  // Configura a quantidade de colunas e linhas do LCD
  lcd.begin(16, 2);
  }

void loop() {
  // Define o cursor para a coluna 0, linha 0
  lcd.setCursor(0, 0);
  // Imprime uma mensagem no na linha 1 do LCD
  lcd.print("DEE - MICRO/2024");
  // Define o cursor para a coluna 0, linha 2
  lcd.setCursor(0, 1);
  // Imprime uma mensagem no na linha 1 do LCD
  lcd.print("RODRIGO RIMOLDI ");
  delay(2000);
  lcd.clear();
  // Define o cursor para a coluna 0, linha 0
  lcd.setCursor(0, 0);
  // Imprime uma mensagem no na linha 1 do LCD
  lcd.print("**** CODE 4 ****");
  // Define o cursor para a coluna 0, linha 2
  lcd.setCursor(0, 1);
  // Imprime uma mensagem no na linha 1 do LCD
  lcd.print("LCD: STEP 1");
  delay(2000);
}
