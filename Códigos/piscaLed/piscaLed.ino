int ledVermelho = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledVermelho, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledVermelho, HIGH);
  delay(1000);
  digitalWrite(ledVermelho, LOW);
  delay(1000);
  
}
