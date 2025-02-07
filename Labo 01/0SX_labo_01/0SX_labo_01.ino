
const int ledPin = 13;
int brightnessUp=15;
void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}
void loop(){
Allume();
Clignotement();
Variation();
Eteint();
}
 void Allume(){
  digitalWrite(ledPin, HIGH); 
  Serial.println("Allume-1970812"); 
  delay(2000); 
 }
 void Clignotement(){
  for (int i = 0; i < 2; i++) {
    digitalWrite(ledPin, HIGH);
    delay(250); 
    digitalWrite(ledPin, LOW); 
    delay(250); 
  }
  Serial.println("Clignotte-1970812");
 }
 void Variation(){
  for (int lumen = 0; lumen <= 255; lumen+=15) {
    analogWrite(ledPin, lumen); 
    delay(137); 
  }
   Serial.println("Variation-1970812");
 }
 void Eteint(){
    digitalWrite(ledPin, LOW);
  Serial.println("Eteint-1970812");
  delay(2000);
 }