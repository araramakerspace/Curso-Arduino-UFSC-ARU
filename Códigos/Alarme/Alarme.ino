const int ledPin = 13;
const int buzzerPin = 12;
const int ldrPin = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ldrPin, INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  int ldrStatus = analogRead(ldrPin);
  if(ldrStatus >= 400)
  {
    tone(buzzerPin,100);
    digitalWrite(ledPin,HIGH);
    delay(100);

    noTone(buzzerPin);
    digitalWrite(ledPin,LOW);
    delay(100);

    Serial.println("---------ALARM ACTIVATED ---------");
    Serial.println(ldrStatus);
    
  }
  else{
   noTone(buzzerPin);
   digitalWrite(ledPin,LOW);
    Serial.println("---------ALARM DESATIVADO ---------");
  

  }
  }

