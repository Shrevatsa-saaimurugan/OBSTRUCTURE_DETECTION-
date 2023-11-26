# OBSTRUCTURE_DETECTION-

When an object appears in front of it, the LED will glow, and the motor will move in a clockwise direction. When there are no objects in front of it, the LED does not glow, and the motor will move in an anticlockwise direction. the materials required to make this are: 2 LEDs (any color), one Adriano uno, one IR sensor, a motor driver, a few male-to-female jumper wires, and a motor uses, an example of this robot being used is when a person comes in front of it. The motor starts to spin in a clockwise direction. When no one is in front, it moves in a clockwise direction and stops at the end.

This Arduino code sets up a simple obstacle avoidance system using an infrared (IR) sensor and a pair of LEDs to indicate the movement direction. The system controls a motor connected to two pins using a motor driver. Here's a breakdown of the code:

1. **Pin Definitions:**
   - `led1Pin`: Connects to an LED for one direction indication (pin 13).
   - `led2Pin`: Connects to another LED for the opposite direction indication (pin 11).
   - `irSensorPin`: Connects to the digital output of an infrared (IR) sensor (pin 3).
   - `motorAPin1`: Connects to one of the motor control pins (pin 6).
   - `motorAPin2`: Connects to the other motor control pin (pin 9).

2. **Setup Function:**
   - Configures the defined pins:
     - Sets `led1Pin` and `led2Pin` as output pins.
     - Sets `irSensorPin` as an input pin.
     - Sets `motorAPin1` and `motorAPin2` as output pins.

3. **Loop Function:**
   - Reads the digital signal from the IR sensor and stores it in the variable `obstacle`.
   - If an obstacle is detected (IR sensor output is LOW):
     - Turns off the first LED (`led1Pin`).
     - Turns on the second LED (`led2Pin`).
     - Calls the `clockwise` function, which sets the motor to rotate in one direction.
   - If no obstacle is detected:
     - Turns on the first LED (`led1Pin`).
     - Turns off the second LED (`led2Pin`).
     - Calls the `counterclockwise` function, which sets the motor to rotate in the opposite direction.

4. **Clockwise Function:**
   - Configures the motor to rotate in one direction by setting `motorAPin1` to LOW and `motorAPin2` to HIGH.

5. **Counterclockwise Function:**
   - Configures the motor to rotate in the opposite direction by setting `motorAPin1` to HIGH and `motorAPin2` to LOW.

In summary, this code establishes a simple obstacle detection system using an IR sensor, controlling the movement of a motor based on whether an obstacle is detected or not. The direction of motor rotation is indicated by LEDs. If an obstacle is present, the motor turns in one direction, and if no obstacle is detected, the motor turns in the opposite direction.

