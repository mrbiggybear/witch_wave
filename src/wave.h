
#include <Servo.h>
Servo myservo;

int pos = 0;
const int pin = 2;

void servo_setup(){
  myservo.attach(2);
}

int get_some_val(){
  return !random(0, 1) ?
         random(2) : 
         random(5);
}

void update_servo() {
  int rand_step = random(8, 15);
  for (pos = 0; pos < 180; pos += get_some_val()) {
    myservo.write(pos); 
    delay(rand_step);
  }
  for (pos = 180; pos > 0; pos -= get_some_val()) {
    myservo.write(pos);
    delay(rand_step);
  }
}