int speed = 200;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(speed);
  digitalWrite(13, LOW);


  digitalWrite(12, HIGH);
  delay(speed);
  digitalWrite(12, LOW);


  digitalWrite(11, HIGH);
  delay(speed);
  digitalWrite(11, LOW);



  digitalWrite(10, HIGH);
  delay(speed);
  digitalWrite(10, LOW);


  digitalWrite(9, HIGH);
  delay(speed);
  digitalWrite(9, LOW);




  digitalWrite(8, HIGH);
  delay(speed);
  digitalWrite(8, LOW);


  

}
