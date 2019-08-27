void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

float analogToVoltage(int tick){
  //funcion que transforma de ticks analogicos a voltage
  // sabiendo que 1023 es 5.0v.
  float voltage = tick/204.6; 
  Serial.println("Este fue el mejor cambio del mundo");
  return voltage;
}
