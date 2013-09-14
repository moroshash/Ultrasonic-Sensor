unsigned long echo = 0;
 int ultraSoundSignal = 9; // Ultrasound signal pin
 unsigned long ultrasoundValue = 0;
 void setup()
 {
 Serial.begin(9600);
 pinMode(ultraSoundSignal,OUTPUT);
 }
 unsigned long ping(){
 pinMode(ultraSoundSignal, OUTPUT); 
 digitalWrite(ultraSoundSignal, LOW); 
 delayMicroseconds(2); 
 digitalWrite(ultraSoundSignal, HIGH); 
 delayMicroseconds(5); 
 digitalWrite(ultraSoundSignal, LOW);
 pinMode(ultraSoundSignal, INPUT); 
 digitalWrite(ultraSoundSignal, HIGH);
 
  echo = pulseIn(ultraSoundSignal, HIGH); 
  ultrasoundValue = (echo / 58.138) * .39; 
 return ultrasoundValue;
 }
 void loop()
 {
 int x = 0;
 x = ping();
  Serial.println(x);
  delay(250); 
 }
