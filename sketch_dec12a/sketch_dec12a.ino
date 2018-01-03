int speed = 200;

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  
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


  digitalWrite(7, HIGH);
  delay(speed);
  digitalWrite(7, LOW);

  digitalWrite(6, HIGH);
  delay(speed);
  digitalWrite(6, LOW);

  digitalWrite(5, HIGH);
  delay(speed);
  digitalWrite(5, LOW);

  digitalWrite(4, HIGH);
  delay(speed);
  digitalWrite(4, LOW); 

  


}
