void setup()
{
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(5,OUTPUT);
}
void forward()
 {
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(7, LOW);
  digitalWrite(5, HIGH);
 }
void backward()
 {
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);  
  digitalWrite(7, HIGH);
  digitalWrite(5, LOW);
 }
void left()
 {
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);  
  digitalWrite(7, LOW);
  digitalWrite(5, HIGH);
 }
void right()
 {
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
 }
void stop()
 {
  digitalWrite(11, LOW); 
  digitalWrite(10, LOW);
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
 }
void loop()
{
 switch(Serial.read())
  {
  case'1':
     forward();
     break;
  case'2':
     backward();
     break;
  case'3':
     left();
     break;
  case'4':
     right();
     break;
  case'5':
     stop();
     break;
  default:
   break;
 }  
}
