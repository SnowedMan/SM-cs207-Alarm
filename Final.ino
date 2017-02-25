int input;
int AnalogPin = A0;
int piezoPin = 9;

void setup() {
Serial.begin(9600);  
pinMode (piezoPin, OUTPUT);
}

void loop() {
  input = analogRead(AnalogPin);
  Serial.println(input);
  if (input < 20)
  {
  analogWrite (piezoPin, 200);
  delay(5000);
  analogWrite (piezoPin,0);
  }
delay(500);
}
