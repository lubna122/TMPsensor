#define sensorpin A1
void setup (){
Serial.begin(9600);
pinMode(sensorpin, INPUT);

}
 
void loop ()
{

int val = analogRead(sensorpin);
 
Serial.println(val);
}
