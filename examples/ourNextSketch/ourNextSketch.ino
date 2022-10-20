
// ourNextSketch.ino

const int buttonPin = 6;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(57600);
}

void loop() {
  Serial.print("Hello, world!\t");
  Serial.print(millis());
  Serial.print((digitalRead(buttonPin) == HIGH) ? "\t ON" : "\t OFF");
  Serial.println();
  delay(1000);
}
