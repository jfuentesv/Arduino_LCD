# Arduino_LCD
Pequeño programa para mostrar informacion en una pantalla LCD de 16x2 utilizando I2C
/* 
 *  LCD con I2C
 *  Programa que permite mostrar un mensaje por pantalla en la pantalla LCD.
 *  El I2C utiliza solamente 4 pines. las conexiones son las siguientes:
 *  En la placa Arduino UNO:
 *  A4(SDA)
 *  A5 (SCL)
 *  GND (GND)
 *  VCC(VCC)
 */

// Se puede buscar la libreria con el gestor de placas, o en la dirección: 
// https://github.com/ELECTROALL/Codigos-arduino/blob/master/LiquidCrystal_I2C.zip 

#include <LiquidCrystal_I2C.h>

// Permite trabajar con un objeto llamado LiquidCrystal
LiquidCrystal_I2C lcd(0x27,16,2); // si no te sale con esta direccion  puedes usar (0x3f,16,2) || (0x27,16,2)  ||(0x20,16,2) 

void setup() {
  // Permite inicializar la pantalla LCD
  lcd.init();
  // Inicia la luz de fondo
  lcd.backlight();
  // Limpia el mensaje que muestra por pantalla
  lcd.clear();
  // Coloca el cursor en la posición 0,0
  lcd.setCursor(0,0);
  // Imprime el mensaje en la primera fila
  lcd.print("Programacion de"); 
  // Coloca el cursor en la segunda fila
  lcd.setCursor (0,1);
  // Imprime el mensaje en la segunda fila
  lcd.print("Microcontrolador");
}

void loop() { 

  lcd.display();
  delay(500);
  lcd.noDisplay();
  delay(500);
}
