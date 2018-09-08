#include <Servo.h>

Servo servo1;  // Cria um Objeto servo chamado Servo1 

void setup() {
  servo1.attach(3);  // Pino 3 controla o servo
} 
    
void loop() {
  int pos;
  
  for (pos = 0; pos <= 180; pos += 1) { // ele gira de 0 até 180 graus
    // de 1 em 1 grau
    servo1.write(pos);              // pede para o servo girar para o angulo pos
    delay(15);                       // espera 15 ms
  }
  for (pos = 180; pos >= 0; pos -= 1) { // faz o contrário
    servo1.write(pos);             
    delay(15);                       
  }
  
}