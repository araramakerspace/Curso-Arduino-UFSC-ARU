const int trigPin =12;
const int echoPin =13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);// limpar o trigger
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  unsigned long  duracao = pulseIn(echoPin,HIGH);//pino e estado
  int distancia = duracao / 58;
  Serial.print("Distancia em CM:");
  Serial.println(distancia);
  delay(1000);

}
