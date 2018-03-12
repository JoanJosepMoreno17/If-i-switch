float co2 = 49;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.print("EL nivell de co2 es ");
Serial.println(co2);
Serial.print("La qualitat de l'aire es ");
if ( co2 < 3.5)
Serial.print("A");
else if (co2 < 6.5)
Serial.print("B");
else if (co2 < 11.1)
Serial.print("C");
else if (co2 < 17.7)
Serial.print("D");
else if (co2 < 38.2)
Serial.print("E");
else if (co2 < 43.2)
Serial.print("f");
else if (co2 >= 43.2)
Serial.print("G");
}

void loop() {
  // put your main code here, to run repeatedly:

}
