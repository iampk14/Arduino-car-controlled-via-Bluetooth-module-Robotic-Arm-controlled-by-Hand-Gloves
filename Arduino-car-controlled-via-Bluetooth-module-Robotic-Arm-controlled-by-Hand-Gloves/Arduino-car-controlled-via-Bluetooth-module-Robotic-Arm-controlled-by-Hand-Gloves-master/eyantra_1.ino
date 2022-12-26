  
int r = 8; 
int br = 10; 
int l = 9;   
int bl = 11;  
    

void setup()
{
  pinMode(r, OUTPUT);
  pinMode(l, OUTPUT);
  pinMode(br, OUTPUT);
  pinMode(br, OUTPUT);
  Serial.begin(9600):
}

void FR()   
{
  digitalWrite(fr, HIGH);
  digitalWrite(br, LOW);
}

void FL()
{
  digitalWrite(l, HIGH);
  digitalWrite(bl, LOW);
}

void BR()
{
  digitalWrite(br, HIGH);
  digitalWrite(r, LOW);
}

void BL()   
{
  digitalWrite(bl, HIGH);
  digitalWrite(r, LOW);
  }

void right()
{
  digitalWrite(l, HIGH);
  digitalWrite(br, HIGH);
}

void left()
{
  digitalWrite(r, HIGH);
  digitalWrite(bl, HIGH);
}

void brake()
{
  digitalWrite(r, LOW);
  digitalWrite(br, LOW);
  digitalWrite(bl, LOW);
  digitalWrite(l, LOW);
}

void loop()
{
  if(Serial.available())   
  {
   in = Serial.read(); 
   if(bt == 'F')   
   {
    FR();
    FL();  
   }

   else if(bt == 'B')  
   {
    BR();
    BL();
   }

   else if(bt == 'L')  
    left();
   }

   else if(bt == 'R') 
   {
    right();
   }

   else
   {
    brake();
   }
  }
} 
