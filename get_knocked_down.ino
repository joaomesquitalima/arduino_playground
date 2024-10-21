// INCLUSÃO DE BIBLIOTECAS
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// DEFINIÇÕES
#define endereco  0x27 
#define colunas   16
#define linhas    2


// INSTANCIANDO OBJETOS
LiquidCrystal_I2C lcd(endereco, colunas, linhas);


void printOnLcd(String text,int delei) {
  lcd.print(text); 
  delay(delei);       
  lcd.clear();      
}
void setup() {
  lcd.init(); 
  lcd.backlight(); 
  lcd.clear(); //
  lcd.setCursor(0, 0); 

}

int vel1 = 700;
int vel2 = 2200;
void loop() {

 printOnLcd("Pissing the",vel2);
 printOnLcd(" night away",vel2);
 printOnLcd("Pissing the",vel2);
 printOnLcd(" night away",vel2);
 
 printOnLcd("He drinks a ",vel1);
 printOnLcd(" whiskey drink",vel1);
 printOnLcd("He drinks a ",vel1);
 printOnLcd(" vodka drink",vel1); 
 printOnLcd("He drinks a ",vel1);
 printOnLcd(" lager drink",vel1); 
 printOnLcd("He drinks a ",vel1);
 printOnLcd(" cider drink",vel1); 

 printOnLcd("He sings ",vel1);
 printOnLcd("the songs",vel1); 
 printOnLcd("That remind ",vel1); 
 printOnLcd("him of the",vel1);  
 printOnLcd(" good times",vel1); 
 printOnLcd("He sings ",vel1);
 printOnLcd("the songs",vel1); 
 printOnLcd("That remind ",vel1); 
 printOnLcd("him of the",vel1);  
 printOnLcd(" better times",vel1); 

 printOnLcd("Oh Danny Boy",1500);
 printOnLcd("Danny Boy",1500);
 printOnLcd("Danny Boy",1500);



 printOnLcd("I get knocked ",vel1);
 printOnLcd("down,but I ",vel1);
 printOnLcd("get up again ",vel1);
 
 printOnLcd("You are never ",vel1);
 printOnLcd("gonna keep  ",vel1);
 printOnLcd("me down",vel1);

 printOnLcd("I get knocked ",vel1);
 printOnLcd("down,but I ",vel1);
 printOnLcd("get up again ",vel1);

 printOnLcd("You are never ",vel1);
 printOnLcd("gonna keep  ",vel1);
 printOnLcd("me down",vel1);

 printOnLcd("I get knocked ",vel1);
 printOnLcd("down,but I ",vel1);
 printOnLcd("get up again ",vel1);

 printOnLcd("You are never ",vel1);
 printOnLcd("gonna keep  ",vel1);
 printOnLcd("me down",vel1);

 printOnLcd("I get knocked ",vel1);
 printOnLcd("down,but I ",vel1);
 printOnLcd("get up again ",vel1);

 printOnLcd("You are never ",vel1);
 printOnLcd("gonna keep  ",vel1);
 printOnLcd("me down",vel1);

 delay(5000);



}
