void setup()
{
   Serial.begin(9600);
  pinMode(12, OUTPUT);
}

class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
  private:
    int _pin;
};

Morse::Morse(int pin)
{
  pinMode(pin,OUTPUT);
  _pin=pin;
}
Morse morse(8);

void Morse::dot()
{
  digitalWrite(_pin,HIGH);
  delay(250);
  digitalWrite(_pin,LOW);
  delay(250);
}

void Morse::dash()
{
  digitalWrite(_pin,HIGH);
  delay(1500);
  digitalWrite(_pin,LOW);
  delay(250);
}

void loop()
{
  while (Serial.available() > 0) 
  {
    switch(char i=char(Serial.read()))
    {
      case'a':{morse.dot();morse.dash();delay(3000);}
        break;
      case'b':{morse.dash();morse.dot();morse.dot();morse.dot();delay(3000);}
        break;
      case'c':{morse.dash();morse.dot();morse.dash();morse.dot();delay(3000);}
        break;
      case'd':{morse.dash();morse.dot();morse.dot();delay(3000);}
        break;
      case'e':{morse.dot();delay(3000);}
        break;
      case'f':{morse.dot();morse.dot();morse.dash();morse.dot();delay(3000);}
        break;
      case'g':{morse.dash();morse.dash();morse.dot();delay(3000);}
        break;
      case'h':{morse.dot();morse.dot();morse.dot();morse.dot();delay(3000);}
        break;
      case'i':{morse.dot();morse.dot();delay(3000);}
        break;
      case'j':{morse.dot();morse.dash();morse.dash();morse.dash();delay(3000);}
        break;
      case'k':{morse.dash();morse.dot();morse.dash();delay(3000);}
        break;
      case'l':{morse.dot();morse.dash();morse.dot();morse.dot();delay(3000);}
        break;
      case'm':{morse.dash();morse.dash();delay(3000);}
        break;
      case'n':{morse.dash();morse.dot();delay(3000);}
        break;
      case'o':{morse.dash();morse.dash();morse.dash();delay(3000);}
        break;
      case'p':{morse.dot();morse.dash();morse.dash();morse.dot();delay(3000);}
        break;
      case'q':{morse.dash();morse.dash();morse.dot();morse.dash();delay(3000);}
        break;
      case'r':{morse.dot();morse.dash();morse.dot();delay(3000);}
        break;
      case's':{morse.dot();morse.dot();morse.dot();delay(3000);}
        break;
      case't':{morse.dash();delay(3000);}
        break;
      case'u':{morse.dot();morse.dot();morse.dash();delay(3000);}
        break;
      case'v':{morse.dot();morse.dot();morse.dot();morse.dash();delay(3000);}
        break;
      case'w':{morse.dot();morse.dash();morse.dash();delay(3000);}
        break;
      case'x':{morse.dash();morse.dot();morse.dot();morse.dash();delay(3000);}
        break;
      case'y':{morse.dash();morse.dot();morse.dash();morse.dash();delay(3000);}
        break;
      case'z':{morse.dash();morse.dash();morse.dot();morse.dot();delay(3000);}
        break;
      case' ':{delay(7000);}
        break;     //空格
      default:{delay(10000);}
        break;    //回车
     }
  }
    delay(3000);
}
