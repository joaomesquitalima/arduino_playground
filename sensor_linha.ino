int pinDigital = 8; 
int pinAnalogico = A0; 
int valorDigital; 
int valorAnalogico;  

void setup() {
  Serial.begin(9600); 
  pinMode(pinDigital, INPUT); 
  pinMode(pinAnalogico, INPUT); 
  pinMode(12,OUTPUT);

}

void loop() {
  valorDigital = digitalRead(pinDigital);
  valorAnalogico = analogRead(pinAnalogico);

 // Serial.print("Leitura Digital: ");
  //Serial.println(valorDigital); 

  //Serial.print("Leitura Analogica: "); 
  Serial.println(valorAnalogico); 
  //Serial.println(); 

  if(valorAnalogico < 227){
    digitalWrite(12,HIGH);
  }
  else{
    digitalWrite(12,LOW);
  }

  

  
  //delay(500);
  Serial.println("----------------------------------------------");
}
