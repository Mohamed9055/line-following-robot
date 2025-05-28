#define dt 70
//Motor Control Pins
#define motor_right1 4
#define motor_right2 3
#define motor_left1 7
#define motor_left2 2
#define emr 6
#define eml 5
  
//IR Sensors
#define sfr 8
#define sfl 9
#define sc 13

void setup() {
// Motors
pinMode(emr,OUTPUT);
pinMode(motor_right1,OUTPUT);
pinMode(motor_right2,OUTPUT);
pinMode(eml,OUTPUT);
pinMode(motor_left1,OUTPUT);
pinMode(motor_left2,OUTPUT);
// sensors
Serial.begin(9600);
pinMode(sfr,INPUT);
pinMode(sfl,INPUT);
pinMode(sc,INPUT);
// for memory
analogWrite(emr,0);
analogWrite(eml,0);
}

void stop(){
analogWrite(emr,0);
analogWrite(eml,0);
digitalWrite(motor_right1,LOW);
digitalWrite(motor_right2,HIGH);
digitalWrite(motor_left1,LOW);
digitalWrite(motor_left2,HIGH);
delay(dt);
}

void forward() {
analogWrite(emr,75);
analogWrite(eml,70);
digitalWrite(motor_right1,HIGH);
digitalWrite(motor_right2,LOW);
digitalWrite(motor_left1,HIGH);
digitalWrite(motor_left2,LOW);
delay(10);
}

void Right() {
analogWrite(emr,0);
analogWrite(eml,70);
digitalWrite(motor_right1,HIGH);
digitalWrite(motor_right2,LOW);
digitalWrite(motor_left1,HIGH);
digitalWrite(motor_left2,LOW);
delay(dt);
}

void Left() {
analogWrite(emr,70);
analogWrite(eml,0);
digitalWrite(motor_right1,HIGH);
digitalWrite(motor_right2,LOW);
digitalWrite(motor_left1,HIGH);
digitalWrite(motor_left2,LOW);
delay(dt);
}

void backward() {
  analogWrite(emr,75);
analogWrite(eml,70);
digitalWrite(motor_right1,LOW);
digitalWrite(motor_right2,HIGH);
digitalWrite(motor_left1,LOW);
digitalWrite(motor_left2,HIGH);
delay(150);
}

void Right2() {
analogWrite(emr,0);
analogWrite(eml,100);
digitalWrite(motor_right1,HIGH);
digitalWrite(motor_right2,LOW);
digitalWrite(motor_left1,HIGH);
digitalWrite(motor_left2,LOW);
delay(dt);
}

void Left2() {
analogWrite(emr,100);
analogWrite(eml,0);
digitalWrite(motor_right1,HIGH);
digitalWrite(motor_right2,LOW);
digitalWrite(motor_left1,HIGH);
digitalWrite(motor_left2,LOW);
delay(dt);
}



void loop() {
 if(digitalRead(sfr)==LOW && digitalRead(sc)==LOW && digitalRead(sfl)==LOW){
  forward();
 }
  else if(digitalRead(sfr)==HIGH && digitalRead(sc)==LOW && digitalRead(sfl)==LOW){
  Left();
 }
   else if(digitalRead(sfr)==LOW && digitalRead(sc)==LOW && digitalRead(sfl)==HIGH){
  Right();
 }

    else if(digitalRead(sfr)==LOW && digitalRead(sc)==HIGH && digitalRead(sfl)==HIGH){
  Right2();
 }
    else if(digitalRead(sfr)==HIGH && digitalRead(sc)==HIGH && digitalRead(sfl)==LOW){
  Left2();
 }
    else if(digitalRead(sfr)==HIGH && digitalRead(sc)==HIGH && digitalRead(sfl)==HIGH){
  backward();
  delay(200);
  Left();
 }
    else if(digitalRead(sfr)==HIGH && digitalRead(sc)==LOW && digitalRead(sfl)==HIGH){
  forward();
 }

    else if(digitalRead(sfr)==LOW && digitalRead(sc)==HIGH && digitalRead(sfl)==LOW){
      stop();
      backward();
      delay(200);
      Left();
      delay(200); 
 }

}
 
