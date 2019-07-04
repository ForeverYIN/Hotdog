void setup()
{
  pinMode(5,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
}
void onehigh()
{
 digitalWrite(5, HIGH);
}
void onelow()
{
 digitalWrite(5, LOW);
}
void twohigh()
{
 digitalWrite(2, HIGH);
}
void twolow()
{
 digitalWrite(2, LOW);
}
void threehigh()
{
 digitalWrite(3, HIGH);
}

void threelow()
{
 digitalWrite(3, LOW);
}

void fourhigh()
{
   digitalWrite(4, HIGH);
}
void fourlow()
{
  digitalWrite(4, LOW);
}
void loop()
{
   char i;
   i=Serial.read();
   switch(i)
  {
    case'9':
     {onehigh();twolow();threelow();fourhigh();}
     break;
    case'8':
     {onelow();twolow();threelow();fourhigh();}
     break;
    case'7':
     {onehigh();twohigh();threehigh();fourlow();}
     break;
    case'6':
     {onelow();twohigh();threehigh();fourlow();}
     break;
    case'5':
     {onehigh();twolow();threehigh();fourlow();}
     break;
    case'4':
     {onelow();twolow();threehigh();fourlow();}
     break;
    case'3':
     {onehigh();twohigh();threelow();fourlow();}
     break;
    case'2':
     {onelow();twohigh();threelow();fourlow();}
     break;
    case'1':
     {onehigh();twolow();threelow();fourlow();}
     break;
    case'0':
     {onelow();twolow();threelow();fourlow();}
     break;
    default:
  break;
  }
}
