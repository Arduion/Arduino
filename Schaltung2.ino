/* 
 *  Luka Dimitrijevic
 *  17.4.2019
 *  Version 1
 *
 */

int ledPin = 13; // Pin für LED = 13
int inPin = 7;   // INput Pin = 7
int val = 0;     // Variable für Loop

void setup() {
  pinMode(ledPin, OUTPUT);  // Definiere LED als Output
  pinMode(inPin, INPUT);    // Definiere Button als Input
}

void loop(){
  val = digitalRead(inPin);  // Lese INput Wert
  if (val == HIGH) {         // Sehe ob Knopf gedrückt ist
    digitalWrite(ledPin, LOW);  // Falls ja, LED ausschalten
  } else {
    digitalWrite(ledPin, HIGH);  // LED EINSCHALTEN
  }

}
 
