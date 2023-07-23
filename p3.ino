// C++ code
//
int red=8;
int green=9;
int yellow=10;
int orange=11;
int blue=12;
int white=13;
int s1=4;
int s2=5;
int reading=0;
int node=0;
 void setup(){
   for(int i=8;i<=13;i++)
{
pinMode(i, OUTPUT);     
}
 pinMode(s1, INPUT);
  pinMode(s2, INPUT);  
}

void loop()
{
  if(digitalRead(s1)){
    digitalWrite(red, HIGH);
    digitalWrite(green, HIGH);
    digitalWrite(yellow, HIGH);
  }
  else{
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    
}
    if(digitalRead(s2)){
digitalWrite(orange, HIGH);
    digitalWrite(blue, HIGH);
    digitalWrite(white, HIGH);
    }
  else {
    digitalWrite(orange, LOW);
    digitalWrite(blue, LOW);
    digitalWrite(white, LOW);
  }
  }
