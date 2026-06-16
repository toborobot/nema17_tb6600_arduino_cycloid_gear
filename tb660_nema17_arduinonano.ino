int PUL=5;
int DIR=6;
int ENA=7;
int step=6400*4;
int del=100;
  
void setup() {
  pinMode (PUL, OUTPUT);
  pinMode (DIR, OUTPUT);
  pinMode (ENA, OUTPUT);
 
}
 
void loop() {
  for (int i=0; i<step; i++)    // Вперед на 5000 шагов
  {
    digitalWrite(DIR,LOW);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(del);
    digitalWrite(PUL,LOW);
    delayMicroseconds(del);
  }
  for (int i=0; i<step; i++)   // Назад на 5000 шагов
  {
    digitalWrite(DIR,HIGH);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(del);
    digitalWrite(PUL,LOW);
    delayMicroseconds(del);
  }
}
