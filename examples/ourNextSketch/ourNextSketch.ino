//
// ourNextSketch.ino
//

const int buttonPin = 6;

void setup() {
  Serial.begin(57600);
  pinMode(buttonPin, INPUT);

}

void loop() {
  Serial.print("Hello, world!\t");
  Serial.print(millis());
  Serial.print((digitalRead(buttonPin) == HIGH) ? "\tON" : "\tOFF");
  Serial.println();
  delay(100);
}
