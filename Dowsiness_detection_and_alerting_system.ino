#define SENSE A0 
#define Buzzer 4

void setup()
{
Serial.begin(9600);
pinMode(SENSE, INPUT);
pinMode(Buzzer, OUTPUT);
}

void loop()
{
delay (3000); 
if(digitalRead(SENSE)==LOW)
{
 digitalWrite(Buzzer, HIGH);
 delay(2000);
}
else
{


 digitalWrite(Buzzer, LOW);
} 
}
