const int ledPin = 13; // Use the onboard LED pin
const int ldrPin = A0; // LDR connected to analog pin A0
int ldrValue = 0;      // Variable to store the LDR reading

void setup() {
  Serial.begin(9600);           // Start serial communication
  pinMode(ledPin, OUTPUT);      // Set the LED pin as output
}

void loop() {
  ldrValue = analogRead(ldrPin); // Read the value from the LDR (0-1023)
  Serial.println(ldrValue);      // Print the value to the serial monitor

  // Adjust the threshold (e.g., 300) based on your environment's light levels
  if (ldrValue < 300) {
    digitalWrite(ledPin, HIGH); // Turn the LED on (it's dark)
  } else {
    digitalWrite(ledPin, LOW);  // Turn the LED off (it's bright)
  }
  delay(100); // Small delay for stable readings
}