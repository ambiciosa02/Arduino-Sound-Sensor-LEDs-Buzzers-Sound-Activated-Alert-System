# Arduino-Sound-Sensor-LEDs-Buzzers-Sound-Activated-Alert-System
This Arduino sketch is a sound-activated alert system that lights up LEDs and activates buzzers when the detected sound exceeds a threshold.

🔍 How it works
1️⃣ Hardware setup

Sound sensor → A0

Buzzers → pins 8 and 9

LEDs → pins 2, 3, 4, 5, 6, 7

2️⃣ Program flow

Setup:

Configure buzzer pins as OUTPUT.

Configure LED pins as OUTPUT.

Start Serial Monitor at 9600 bps for debugging.

Loop:

Read sound level from the sensor with analogRead(soundSensorPin).

Print the value to the Serial Monitor.

If soundValue > soundThreshold:

Turn on both buzzers.

Turn on all 6 LEDs.

Else:

Turn off buzzers.

Turn off all LEDs.

Wait 1 second (delay(1000)) before the next reading.

3️⃣ What you’ll see

When a loud sound is detected (above threshold), the LEDs light up and buzzers sound.

Otherwise, all outputs stay off.
