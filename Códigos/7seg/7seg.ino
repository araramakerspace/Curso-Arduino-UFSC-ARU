#include <SevenSeg.h>

//Defines the segments A-G: SevenSeg(A, B, C, D, E, F, G);
SevenSeg disp (2,3,4,5,6,7,8);
//Number of 7 segments
const int numOfDigits =1;  // numero de digitos
//CC(or CA) pins of segment
int digitPins [numOfDigits]={1};

//Variables
int number=0; //
int flag;

void setup() {
  
  Serial.begin(9600);
  // Define o número de dígitos a serem "numOfDigits" e os pinos de dígito para serem os elementos do vetor "digitPins"
  disp.setDigitPins ( numOfDigits , digitPins );
  //Somente para os 7segmentos comuns do cátodo 7
  disp.setCommonCathode();

  
}

void loop()
{ 
  // Verifica se tem algo na serial...
    if (Serial.available() > 0)
    {
      // If it is, we'll use parseInt() to pull out only numbers:
      number = Serial.parseInt();
      flag=0;
    }

  //Numeros de 1
  if (number>=1 && number<=9){
    //Print number to 7 segment display
    disp.writeDigit(number);
    
      //Mostra msg na serial
      if (flag==0){ 
        //Print number to serial monitor
        Serial.print("Number on 7 segment display:");
        Serial.println(number);
        flag=1;
      }
  }
}
