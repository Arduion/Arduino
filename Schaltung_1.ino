
/* Luka Dimitrijevic
   17.4.2018
   Version 1
   
   Ein Simples Programm. Schaltet 3 LED Lichter ein und aus.*/ 

int LED1 = 13;
int LED2 = 12;
int LED3 = 11;

void setup() {
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(LED3, OUTPUT);
}


void loop() {
  digitalWrite(LED1, HIGH);    // Schalte erstes LED Licht ein 
  delay(300);                  // Warte für 300ms
  digitalWrite(LED2, HIGH);    // Schalte zweites LED Licht ein
  delay(300);                  // Warte für 300ms       
  digitalWrite(LED3, HIGH);    // Schalte drittes LED Licht ein
  delay(300);                  // Warte für 300ms
  digitalWrite(LED1, LOW);     // Schalte erstes LED Licht aus
  delay(200);                  // Warte für 200ms
  digitalWrite(LED2, LOW);     // Schalte zweites LED Licht aus
  delay(200);                  // Warte für 200ms
  digitalWrite(LED3, LOW);     // Schalte drittes LED Licht aus
  delay(200);                  // Warte für 200ms. Starte neu.
}
