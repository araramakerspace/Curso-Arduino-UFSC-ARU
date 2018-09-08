
const int ledVerde = 10;
const int ledAmarelo = 11;
const int ledVermelho = 12;
const int Botao = 2;
int soma = 0;
int estadoBotao = 0;
int old = 0;
void setup() {
  // 
  pinMode(ledVerde,OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(Botao, INPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
 //delay(1000);
 estadoBotao = digitalRead(Botao);
 
 if(estadoBotao == 1) {
   
    delay(10);
    estadoBotao = digitalRead(Botao);
      if(estadoBotao==0)
      {
        soma = old + 1;
      }
 }else
 {
  delay(200);
 }
 
  switch (soma) 
  {
    case 1:
      digitalWrite(ledAmarelo, HIGH);
      digitalWrite(ledVermelho,LOW);
      digitalWrite(ledVerde, LOW);
      old = soma;
      break;
    case 2:
      digitalWrite(ledAmarelo, LOW);
      digitalWrite(ledVermelho,HIGH);
      digitalWrite(ledVerde, LOW);
      old = soma;
      //delay(1000);
      break;
    case 3:
      
      digitalWrite(ledAmarelo, LOW);
      digitalWrite(ledVermelho,LOW);
      digitalWrite(ledVerde, HIGH );
      old = soma;
      //delay(1000);
      break;
    default: 
      
      digitalWrite(ledAmarelo, LOW);
      digitalWrite(ledVermelho,LOW);
      digitalWrite(ledVerde, LOW );
      old =0;
      break;
  }
}
