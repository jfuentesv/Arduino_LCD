/* 
 *  LCD con I2C
 *  Programa que permite mostrar un mensaje por pantalla en la pantalla LCD.
 *  Es importante mostrar que  
  
 Board I2C / TWI pins
Uno       =   A4 (SDA), A5 (SCL)

esta configuracion de estos pines se encuentran dentro de la librería "wire" mas info: https://www.arduino.cc/en/Reference/Wire
 */

#include <LiquidCrystal_I2C.h> //DESCARGAR LIBRERÍA:https://github.com/ELECTROALL/Codigos-arduino/blob/master/LiquidCrystal_I2C.zip

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
  lcd.print("Programacion de"); 
  lcd.setCursor (0,1);
  lcd.print("Microcontroladores");
}

void loop() { 

  lcd.display();
  delay(500);
  lcd.noDisplay();
  delay(500);
}
