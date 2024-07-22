#include <LiquidCrystal.h>

// Inicializa a biblioteca com os números dos pinos conectados
LiquidCrystal lcd(34, 35, 32, 33, 25, 26);

void setup() {
  // Configura o número de colunas e linhas do LCD
  lcd.begin(16, 2);
  // Imprime uma mensagem no LCD
  lcd.print("Hello, World!");
}

void loop() {
  // Define o cursor para a coluna 0, linha 1
  lcd.setCursor(0, 1);
  // Imprime o número de segundos desde que o programa começou
  lcd.print(millis() / 1000);
}
