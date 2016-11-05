const int sensorPin=A2;


void setup(){
Serial.begin(9600);   
}
void loop(){
int sensorval=analogRead(sensorPin);
Serial.print("\t");
Serial.println(analogRead(A5)-sensorval);
//Serial.print("ADC,");
//float voltage=(sensorval/1024.0)*5.0;
//
//Serial.print(voltage);
//Serial.println("Volts, ");
delay(100);
}


