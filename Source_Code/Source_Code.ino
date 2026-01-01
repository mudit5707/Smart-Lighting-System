int mainLedPin = 11;
int sensorPin = A0;
int sensorValue = 0;
int potPin = A1;
int potValue = 0;
int numLeds = 6;
int leds[] = {2,3,4,5,6,7};

void setup()
{
  pinMode(mainLedPin, OUTPUT);
  for(int i = 0; i<numLeds; i++)
  {
    pinMode(leds[i], OUTPUT);
  }
}

void loop()
{
  sensorValue = 1023 - analogRead(sensorPin);
  potValue = analogRead(potPin);
  if(sensorValue<potValue)
  {
    analogWrite(mainLedPin, sensorValue/4);
    int numOfLeds = map(sensorValue, 0, 1023, 1, numLeds);
    for(int i = 0; i<numLeds; i++)
    {
      if(i<numOfLeds)
      {
        digitalWrite(leds[i], HIGH);
      }
      else
      {
        digitalWrite(leds[i], LOW);
      }
    }
  }
  else
  {
    analogWrite(mainLedPin, potValue/4);
    int numOfLeds = map(potValue, 0, 1023, 1, numLeds);
    for(int i = 0; i<numLeds; i++)
    {
      if(i<numOfLeds)
      {
        digitalWrite(leds[i], HIGH);
      }
      else
      {
        digitalWrite(leds[i], LOW);
      }
    }
  }
}
