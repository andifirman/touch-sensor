/*
  Andi Firmansyah
  Unikom CodeLabs
*/

int touch = 3;

void setup() {
  Serial.begin(9600);
  pinMode(touch, INPUT);
}

void loop() {
  int val = digitalRead(touch);
  
  if(val == HIGH){
    Serial.print("EH?");
    delay(1000);
  }else{
    Serial.println("Hehehe");
    delay(1000);
  }
}
