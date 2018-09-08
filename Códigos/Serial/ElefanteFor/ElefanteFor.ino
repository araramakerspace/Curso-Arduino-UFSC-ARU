void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  Serial.println("Um elefante incomoda muita gente");
  delay(1000); // aguarda um segundo
 
  int quantos; // quantos elefantes
  int vezes; // número de "incomodam"
 
  for (quantos = 2; quantos < 100; quantos = quantos + 1) { // início do "for"
    Serial.print(quantos); // escreve a quantidade
    Serial.println(" elefantes incomodam muito mais!");
    delay(1000);
  } // fim do "for" de quantos
 
} // fim do "loop"