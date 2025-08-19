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
