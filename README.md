# LDR-Light-Detection-System-Tinkercad-akig1019
A responsive light-sensing circuit designed and simulated using Arduino and Tinkercad. This project processes analog signals from a Photoresistor (LDR) to trigger automated hardware responses based on environmental light thresholds.

## Hardware Components (Simulated)
* **Microcontroller:** Arduino Uno R3
* **Sensor:** Light Dependent Resistor (LDR / Photoresistor)
* **Outputs:** LEDs (with appropriate current-limiting resistors)
* **Control:** 10kΩ Resistor (for voltage divider network)

## Circuit Schematic
![Circuit Diagram](https://www.tinkercad.com/things/0XNP2qIYifS-automated-light-detection-system-circuit?sharecode=BghQ6Gi64dv7B1-a4nnBpd0GJgZ34z0PGXjxmoBccS0) 

## How it Works
1. **Signal Input:** The LDR and a fixed resistor form a voltage divider. As ambient light levels change, the resistance of the LDR changes, altering the voltage drop.
2. **ADC Processing:** The Arduino reads this variable voltage via an analog input pin (`A0`) and converts it to a digital value between 0 and 1023.
3. **Threshold Logic:** The firmware compares the sensor reading against a predefined threshold. If the ambient light drops below the limit (simulating darkness), the Arduino drives a digital pin `HIGH` to illuminate the LED.

## Code Snippet
```cpp
// Quick look at the core threshold logic
if (analogRead(LDR_PIN) < THRESHOLD) {
    digitalWrite(LED_PIN, HIGH); // Turn on light in the dark
} else {
    digitalWrite(LED_PIN, LOW);
}
