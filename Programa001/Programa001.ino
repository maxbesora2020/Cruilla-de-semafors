/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int Vermell1 = 2;          // donar nom al pin 5 de l’Arduino
const int Groc1= 3;          // donar nom al pin 6 de l’Arduino
const int Verd1= 4;  
const int Vermell2 = 5;          // donar nom al pin 7 de l’Arduino
const int Groc2 =6 ;          // donar nom al pin 8 de l’Arduino
const int Verd2= 7;          // donar nom al pin 9 de l’Arduino

unsigned int temps=1000; 

//********** Setup ****************************************************************
void setup()
{
  pinMode(Vermell1, OUTPUT);     
  pinMode(Groc1, OUTPUT);     
  pinMode(Verd1, OUTPUT);     
  pinMode(Vermell2, OUTPUT);     
  pinMode(Groc2, OUTPUT);     
  pinMode(Verd2, OUTPUT);    

}

void loop()
{
  digitalWrite(Vermell1, HIGH);    
  digitalWrite(Groc1, LOW);   
  digitalWrite(Verd1, LOW);    
  
  digitalWrite(Vermell2, HIGH);    
  digitalWrite(Groc2, LOW);    
  digitalWrite(Verd2, LOW);    

  delay (temps);

  digitalWrite(Vermell1, HIGH);    
  digitalWrite(Groc1, LOW);   
  digitalWrite(Verd1, LOW);    
  
  digitalWrite(Vermell2, LOW);    
  digitalWrite(Groc2, LOW);    
  digitalWrite(Verd2, HIGH);    

  delay (temps);

  digitalWrite(Vermell1, HIGH);    
  digitalWrite(Groc1, LOW);   
  digitalWrite(Verd1, LOW);    
  
  digitalWrite(Vermell2, LOW);    
  digitalWrite(Groc2, LOW);    
  digitalWrite(Verd2, HIGH);    

  delay (temps);

  digitalWrite(Vermell1, HIGH);    
  digitalWrite(Groc1, LOW);   
  digitalWrite(Verd1, LOW);    
  
  digitalWrite(Vermell2, LOW);    
  digitalWrite(Groc2, LOW);    
  digitalWrite(Verd2, HIGH);    

  delay (temps);

  digitalWrite(Vermell1, HIGH);    
  digitalWrite(Groc1, LOW);   
  digitalWrite(Verd1, LOW);    
  
  digitalWrite(Vermell2, LOW);    
  digitalWrite(Groc2, LOW);    
  digitalWrite(Verd2, HIGH);    

  delay (temps);

  digitalWrite(Vermell1, HIGH);    
  digitalWrite(Groc1, LOW);   
  digitalWrite(Verd1, LOW);    
  
  digitalWrite(Vermell2, LOW);    
  digitalWrite(Groc2, HIGH);    
  digitalWrite(Verd2, LOW);    

  delay (temps);

  digitalWrite(Vermell1, HIGH);    
  digitalWrite(Groc1, LOW);   
  digitalWrite(Verd1, LOW);    
  
  digitalWrite(Vermell2, HIGH);    
  digitalWrite(Groc2, LOW);    
  digitalWrite(Verd2, LOW); 

  delay (temps);

  digitalWrite(Vermell1, LOW);    
  digitalWrite(Groc1, LOW);   
  digitalWrite(Verd1, HIGH);    
  
  digitalWrite(Vermell2, HIGH);    
  digitalWrite(Groc2, LOW);    
  digitalWrite(Verd2, LOW); 

  delay (temps);

  digitalWrite(Vermell1, LOW);    
  digitalWrite(Groc1, LOW);   
  digitalWrite(Verd1, HIGH);    
  
  digitalWrite(Vermell2, HIGH);    
  digitalWrite(Groc2, LOW);    
  digitalWrite(Verd2, LOW); 

  delay (temps);

  digitalWrite(Vermell1, LOW);    
  digitalWrite(Groc1, LOW);   
  digitalWrite(Verd1, HIGH);    
  
  digitalWrite(Vermell2, HIGH);    
  digitalWrite(Groc2, LOW);    
  digitalWrite(Verd2, LOW); 

  delay (temps);

  digitalWrite(Vermell1, LOW);    
  digitalWrite(Groc1, LOW);   
  digitalWrite(Verd1, HIGH);    
  
  digitalWrite(Vermell2, HIGH);    
  digitalWrite(Groc2, LOW);    
  digitalWrite(Verd2, LOW); 

  delay (temps);

  digitalWrite(Vermell1, LOW);    
  digitalWrite(Groc1, HIGH);   
  digitalWrite(Verd1, LOW);    
  
  digitalWrite(Vermell2, HIGH);    
  digitalWrite(Groc2, LOW);    
  digitalWrite(Verd2, LOW); 

  delay (temps);

  digitalWrite(Vermell1, HIGH);    
  digitalWrite(Groc1, LOW);   
  digitalWrite(Verd1, LOW);    
  
  digitalWrite(Vermell2, HIGH);    
  digitalWrite(Groc2, LOW);    
  digitalWrite(Verd2, LOW); 

  delay (temps);
}
