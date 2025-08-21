# Fire-Safety-IoT-System
An IoT system capable to detect fire according to the Gaz level, temperature and light intensity.
The system is composed of:
- Arduino board
- Breadboard
- Gaz sensor
- Temperature sensor
- Photoresistor (Light Sensor)
- Buzzer
- LCD and Potentiometer
- LED red and LED green
- Wires

The green light remain on if no sensors are detecting a value higher than the threshold value set.
If all conditions are met (detected values higher than threshold values), the system triggers the buzzer, turns the red LED on and then finally prints an alert message on the LCD.
The threshold values are:
- Gaz level >= 300,
- Temperature >= 50,
- Light intensity >= 500.
---
## NO FIRE DETECTED
<img width="1180" height="771" alt="Case 1 - NO FIRE DETECTED" src="https://github.com/user-attachments/assets/857a5a03-f682-449e-833a-463761e34872" />

---
## FIRE DETECTED
<img width="1179" height="754" alt="Case 2 - FIRE DETECTED" src="https://github.com/user-attachments/assets/ac2a67aa-72aa-4250-b18a-17da9bb6f8a4" />
