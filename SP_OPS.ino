#include <Servo.h>

Servo leftLeg[3], rightLeg[3];

const int legPinLeft[6] = {1, 2, 3, 4, 5, 6};
const int legPinRight[6] = {7, 8, 9, 10, 11, 12};

void setup() {
  for (int i = 0; i < 6; i++) {
    leftLeg[i].attach(legPinLeft[i]);
  }

  for (int i = 0; i < 6; i++) {
    rightLeg[i].attach(legPinRight[i]);
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
