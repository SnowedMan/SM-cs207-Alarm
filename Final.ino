int input;
int AnalogPin = A0;
int piezoPin = 11;
int button1 = 10;

void setup() {
Serial.begin(9600);  
pinMode (piezoPin, OUTPUT);
pinMode (button1, OUTPUT);
pinMode (AnalogPin, INPUT);
}

void loop() {
  input = analogRead(AnalogPin);
  Serial.println(input);
  Serial.println(digitalRead(button1));
  
  if (input < 600)
  {
    
    while (digitalRead(button1) != 1)
  {
     analogWrite (piezoPin, 200);

  }
  
   analogWrite (piezoPin,0);
  }

  
delay(500);
}
