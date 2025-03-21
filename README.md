# Digital-Distance-Meter-with-car-parking-siron-Using-Arduino
This project is a digital distance meter with a car parking siren using an Arduino. It utilizes an ultrasonic sensor to measure distance and provides visual and audio alerts based on the detected distance. The measured distance is displayed on an LCD screen, while LEDs and a buzzer act as warning indicators.
Components Used

Arduino Uno

(1) HC-SR04 Ultrasonic Sensor

(2) 16x2 LCD Display

(3) Buzzer

(4) 4 LEDs

(5) Resistors

(6) Connecting Wires

(7) Breadboard (optional)

Working Principle

<> The HC-SR04 ultrasonic sensor sends an ultrasonic pulse and calculates the time taken for the echo to return.

<> The Arduino processes the duration and calculates the distance in centimeters.

<> The LCD displays the measured distance in real-time.

<> Depending on the detected distance, LEDs light up progressively and the buzzer produces different beep patterns.

<> If the object is very close, all LEDs light up and the buzzer sounds continuously, simulating a parking siren.

Circuit Diagram

Refer to the image.png file for the circuit wiring.

Code

The project code is written in Arduino IDE and utilizes the LiquidCrystal library for the LCD display. The full code is available in the repository.

Installation & Usage

Upload the provided Arduino sketch to the Arduino Uno board.

Connect all components as per the circuit diagram.

Power up the Arduino and observe the LCD display, LEDs, and buzzer functioning according to the distance detected.

[Jitendra Sharma] (GitHub: https://github.com/jitendrasharma-eng/Automatic-Water-Filling-System.git)
