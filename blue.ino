// 5th pin 3 and 4th mototr red
//ansh.code//9th pin 1 and 2 motor dark green
int A=3; 
int B=5;
int speed;



char input;     // to store input character received via BT.

void setup()
{
  Serial.begin(9600);  
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  

  }

void loop()
{
  speed = analogRead(A0);
  speed = speed * 0.249;
  analogWrite(A, speed);
  analogWrite(B, speed);
  while(Serial.available())
  {
    input =Serial.read();
    if(input == 'F')
    {
      right();
    }

    else if (input== 'R')
    {
        backward();

      
    }

    else if (input== 'L')
    {
      forward();

    
    }  

    else if (input== 'G')
    {
      left();

    
    }  
 else if (input== 'S')
    {
      stop();
    }  
  }

}  
void forward()
  {
  digitalWrite(6, LOW	);
  digitalWrite(4, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
}

void stop()
  {
  digitalWrite(6, LOW	);
  digitalWrite(4, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
}

void backward() 
  {
  digitalWrite(6, HIGH	);
  digitalWrite(4, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
}

void right()
  {
  digitalWrite(6, HIGH	);
  digitalWrite(4, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
}

void left()
  {
  digitalWrite(6, LOW	);
  digitalWrite(4, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
}
