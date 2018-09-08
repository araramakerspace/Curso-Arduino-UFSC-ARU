
const int Verde = 10;
const int Amarelo = 11;
const int Vermelho = 12;


void setup() {
  // 
  pinMode(Verde,OUTPUT);
  pinMode(Amarelo, OUTPUT);
  pinMode(Vermelho, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(Vermelho,HIGH);
 delay(10000);
 digitalWrite(Vermelho,LOW);
 
 digitalWrite(Verde,HIGH);
 delay(5000);
 digitalWrite(Verde,LOW);
 
 digitalWrite(Amarelo,HIGH);
 delay(2000);
 digitalWrite(Amarelo,LOW);
 

 
}
