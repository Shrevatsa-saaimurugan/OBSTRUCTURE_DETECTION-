
const int led1Pin=13; 
const int led2Pin = 11;
const int irSensorPin = 3;
const int motorAPin1 =6;
const int motorAPin2 = 9;
void setup() {
 pinMode(led1Pin, OUTPUT); 
 pinMode(led2Pin, OUTPUT); 
 pinMode(irSensorPin, INPUT);
 pinMode(motorAPin1, OUTPUT);
 pinMode(motorAPin2, OUTPUT);
}
void loop() {
 int obstacle=digitalRead(irSensorPin);
 
 if (obstacle == LOW) { 
  digitalWrite(led1Pin, LOW);
  digitalWrite(led2Pin, HIGH); 
clockwise();
} else {
  digitalWrite(led1Pin, HIGH);
  digitalWrite(led2Pin, LOW); 
  counterclockwise();
 }
}
void clockwise() {
  digitalWrite(motorAPin1, LOW); 
  digitalWrite(motorAPin2, HIGH);
}
void counterclockwise() {
 digitalWrite(motorAPin1, HIGH); 
 digitalWrite(motorAPin2, LOW);
}
