/*
 * Project 1 — LED Flasher
 * Prema knjizi "Beginning Arduino SECOND EDITION" Michael McRoberts strana 21
 * Shema je spojena u Tinkercad-u
 * 
 * Program
 * Napisao:     ROBERT SPUDIC 21.05.2019.
 * Izmijenio:   ROBERT SPUDIC 21.05.2019.
 */

// definiranje varijabli
int ledPin = 10; // pin na kojem se nalazi LED dioda


void setup() {
  // postavi ledPin kao izlaz
  pinMode(ledPin, OUTPUT);

}


void loop() {
  // upali LEDicu na pinu ledPin
  digitalWrite(ledPin, HIGH);
  // cekaj 1000 ms
  delay(1000);
  // ugasi LEDicu na pinu LedPin
  digitalWrite(ledPin, LOW);
  // cekaj 1000 ms
  delay(1000);

}