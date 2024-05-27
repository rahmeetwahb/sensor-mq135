const int sensor = A0;
int maxCleanAir = 100;
void setup() {
  Serial.begin(9600);
  pinMode(sensor, INPUT);

}

void loop() {
  int dataSensor = analogRead(sensor);
  Serial.print(dataSensor);
  Serial.print(" ");
  if(dataSensor > maxCleanAir){
    Serial.println("Air quality is not good");
  }else{
    Serial.println("Air quality is good");
  }
  delay(1000);
}
