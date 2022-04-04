
int photo = 0;

void setup() {
pinMode(LED_BUILTIN, OUTPUT);
digitalWrite(LED_BUILTIN, LOW);
Serial.begin(9600);
}

void loop() {
  photo = analogRead(0);
  Serial.println(photo);
  
  if(photo >= 512){
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else{
    digitalWrite(LED_BUILTIN, LOW);

  }
}
