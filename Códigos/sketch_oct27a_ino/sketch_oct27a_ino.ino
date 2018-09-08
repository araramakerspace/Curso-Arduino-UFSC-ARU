

#define entradaBateria A0
#define medidas 100

float vinA0 = 0.0;
int valorA0 = 0.0;
float R1 = 1000000;
float R2 = 100000;
float relacao = (R2 / (R2 + R1));

void setup(){
  pinMode(entradaBateria, INPUT);
  Serial.begin(9600);
  
}

float leporta(uint8_t portaAnalogica){
  int sum = 0;
  for(int i = 0; i < medidas; i++){
    sum += 1.0*analogRead(portaAnalogica);
    delay(1);
  }
  return sum/(float)medidas;
}

float calculaTensao(float valor){
   float vout = 0.0;
   vout = (valor*5.0) / 1024.0;
   return vout / relacao;
}

void loop(){
  
  valorA0 = leporta(entradaBateria);
  vinA0 = calculaTensao(valorA0);
  
  Serial.print("TENSAO = ");
  Serial.println(vinA0, 2);
  delay(3000);
  
}
