void setup() 
{
  Serial.begin(9600);
}
 
void loop() 
{
 
  float sensor_volt;
  float RS_gas; 
  float ratio; 
  int sensorValue = analogRead(A0);
  sensor_volt=(float)sensorValue/1024*5.0;
  RS_gas = (5.0-sensor_volt)/sensor_volt; 
 
  ratio = RS_gas/0.59;  
 
  Serial.print("sensor_volt = ");
  Serial.println(sensor_volt);
  Serial.print("RS_ratio = ");
  Serial.println(RS_gas);
  Serial.print("Rs/R0 = ");
  Serial.println(ratio);
 
  Serial.print("\n\n");
 
  delay(1000);
 
}
