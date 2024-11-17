void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  pinMode(4,INPUT);
  Serial.begin(9600);
}

int ligado = 0;
int desligado = 1;
int apertado = 0;
int liberado = 0;

void keyUp(){
  if(digitalRead(4) == HIGH){
    apertado = 1;
  }
  if(digitalRead(4) == LOW){
    liberado = 1;
  }
}

void trocaLed(){
  int led = digitalRead(3);
  if(led == 0){
    digitalWrite(3,HIGH);
  }
  else{
    digitalWrite(3,LOW);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  int btn = digitalRead(4);
  int led = digitalRead(3);
  Serial.println(led);

  if(btn){
    keyUp();
  }
  

  if(apertado == 1 and liberado == 1){
    apertado = 0;
    liberado = 0;
    trocaLed();
  }

  
  


 
 




  

  





}
