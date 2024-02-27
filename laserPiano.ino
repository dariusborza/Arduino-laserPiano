//set input = 1, so that input = 0 will 
//start the buzzer and sound is emitted
int DO = 1;
int RE = 1;
int MI = 1;
int FA = 1;
int SOL = 1;
int LA = 1;
int SI = 1;
int DO1 = 1;

void setup() {
  pinMode(7, INPUT);  //input pin for photoresistor
  pinMode(8, INPUT);  //input pin for photoresistor
  pinMode(9, INPUT);  //input pin for photoresistor
  pinMode(10, INPUT); //input pin for photoresistor
  pinMode(11, INPUT); //input pin for photoresistor
  pinMode(12, INPUT); //input pin for photoresistor
  pinMode(13, INPUT); //input pin for photoresistor
  pinMode(5, INPUT);  //input pin for photoresistor
  pinMode(6, OUTPUT); //output pin for buzzer
}

void loop() {
  //using digitalRead so that we will only have 0 & 1 inputs
  //by reading the value of every photoresistor
  DO = digitalRead(7);
  RE = digitalRead(8);
  MI = digitalRead(9);
  FA = digitalRead(10);
  SOL = digitalRead(11);
  LA = digitalRead(12);
  SI = digitalRead(13);
  DO1 = digitalRead(5);

  if(DO == 1) {
    //Serial.println("Laser");  //using this print only for testing
  }  else { //when the laser is interrupted => D0 == 0
    Serial.println("DO"); //print DO on serial monitor
    tone(6, 523, 300); //pin 6, frequency 523, duration 300ms
  }
  if(RE == 1) {
    //Serial.println("Laser");
  }
  else {
    Serial.println("RE");
    tone(6, 587, 300);
  }
  if(MI == 1) {
    //Serial.println("Laser");
  }
  else {
    Serial.println("MI");
    tone(6, 659, 300);
  }
  if(FA == 1) {
//Serial.println("Laser");
  }
  else {
    Serial.println("FA");
    tone(6, 698, 300);
  }
  if(SOL == 1) {
//Serial.println("Laser");
  }
  else {
    Serial.println("SOL");
    tone(6, 783, 300);
  }
  if(LA == 1) {
   // Serial.println("Laser");
  }
  else {
    Serial.println("LA");
    tone(6, 880, 300);
  }
  if(SI == 1) {
    //Serial.println("Laser");
  }
  else {
    Serial.println("SI");
    tone(6, 987, 300);
  }
   if(DO1 == 1) {
    //Serial.println("Laser");
  }
  else {
    Serial.println("DO1");
    tone(6, 1046, 300);
  }
}