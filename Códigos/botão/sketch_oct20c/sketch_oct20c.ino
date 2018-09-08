
const int ledVerde = 10;
const int ledAmarelo = 11;
const int ledVermelho = 12;
const int Botao = 2;

int estadoBotao = 0;

void setup() {
  // 
  pinMode(ledVerde,OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(Botao, INPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
 estadoBotao = digitalRead(Botao);

  if (estadoBotao == HIGH) {
    //Acendendo os leds caso o botão esteja pressionado, com 
    //um intervalo de tempo (delay) entre os acendimentos para 
    //criar um pequeno efeito.
    digitalWrite(ledAmarelo,HIGH);
    delay(200);    
    digitalWrite(ledVerde,HIGH);
    delay(200);    
    digitalWrite(ledVermelho,HIGH);
    delay(200);    
    //digitalWrite(ledAzul,HIGH);    
  //  delay(200);
  } else {
    //Apagando os leds caso o botão não esteja pressionado.
    digitalWrite(ledAmarelo,LOW);    
    digitalWrite(ledVerde,LOW);
    digitalWrite(ledVermelho,LOW);
//    digitalWrite(ledAzul,LOW);
  }
 
}
