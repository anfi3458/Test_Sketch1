/****************************************************************** Created with PROGRAMINO IDE for Arduino - 13.05.2018 14:52:44
 Projekt:     LED_Ansteuerung_OOP3.2 
              .1  abgeänderteVersion (nur 1 LED aber Eingabe Dauer und Pause)
              .2  Klasse in Tab als include
 Status:      ok 16.11.23
 Libraries:   
 Autor:       ich und Quelle
 Quelle:      https://spacehal.github.io/docs/arduino/objectOriented  
 Inhalt:      LED_BUILTIN soll als D4 bzw 2, Pause und Dauer blinken 
*********************************************************************************************************************/
#include "Led_Schlaufe.h"
int x=1;
void zaehle(){
  x++;
  Serial.println(x);
}

Led ledBlau(2, 100,100);  // ein `Led` Objekt mit dem Namen `ledGreen` mit Pin 4


void setup() {
  Serial.begin(115200);
  // Rest bleibt leer
}

void loop() {
  ledBlau.toggle();       // Methodenaufruf vom Objekt ledBlau 
  zaehle();               //Funktion macht nur x++ und SeriMoni-Ausgabe
}
