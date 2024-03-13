const int ledPin = 4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // Initialisation de la communication série à 9600 bauds
  Serial.println("\nDébut du programme"); // Message indiquant le début du programme
}

void loop() {
  unsigned long calcul;
  unsigned long startTime;
  startTime = millis(); // Enregistrer le temps de début
  while (millis() - startTime < 4000) { // Boucler tant que le temps écoulé est inférieur à 5 secondes
    calcul = millis()*2;
  }
  delay(200);
  startTime = millis();
  while (millis() - startTime < 4000) {
    calcul = millis()/2;
  }
  delay(200);
  startTime = millis();
  while (millis() - startTime < 4000) {
    calcul = millis()+2;
  }
  delay(200);
  startTime = millis();
  while (millis() - startTime < 4000) {
    calcul = millis()-2;
  }
  Serial.println("delay"); // Message indiquant le début du programme
  delay(4000);
}
