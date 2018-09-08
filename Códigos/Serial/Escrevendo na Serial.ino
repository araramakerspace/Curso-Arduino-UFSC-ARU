void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); // velocidade de baunds RATE * informação por segundos mandada na serial
Serial.println("Iniciando Serial");
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available())
{
  char c= Serial.read();
    Serial.write(c); // Escrevendo um unico caracter
}
}