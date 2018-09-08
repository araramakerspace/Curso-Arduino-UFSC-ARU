//Declaração dos pinos digitais.
const int ledAmarelo = 8;
const int ledVerde = 9;
const int ledVermelho = 10;
const int ledAzul = 11;
const int botao = 2;
 
//Declaração da variável que possuirá os estados do botão.
int estadoBotao = 0;
 
//Método setup, executado uma vez assim que o Arduino é ligado.
void setup() {
  pinMode(ledAmarelo,OUTPUT);  //Definindo pino 8 como saída.
  pinMode(ledVerde,OUTPUT);    //Definindo pino 9 como saída.
  pinMode(ledVermelho,OUTPUT); //Definindo pino 10 como saída.
  pinMode(ledAzul,OUTPUT);     //Definindo pino 11 como saída.
  
  pinMode(botao,INPUT);        //Definindo pino 2 como entrada.
}
 
//Método loop, executado enquanto o Arduino estiver ligado.
void loop() {
  estadoBotao = digitalRead(botao);
  
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
    digitalWrite(ledAzul,HIGH);    
    delay(200);
  } else {
    //Apagando os leds caso o botão não esteja pressionado.
    digitalWrite(ledAmarelo,LOW);    
    digitalWrite(ledVerde,LOW);
    digitalWrite(ledVermelho,LOW);
    digitalWrite(ledAzul,LOW);
  }
}
