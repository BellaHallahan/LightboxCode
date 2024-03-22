//final code
#define MR1 5
#define MR2 6
#define ML1 7
#define ML2 8

int x;

void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(MR1, HIGH);
  digitalWrite(MR2, LOW);

  digitalWrite(ML1, LOW);
  digitalWrite(ML2, HIGH);

  delay(2000);

  digitalWrite(MR1, LOW);
  digitalWrite(MR2, HIGH);

  digitalWrite(ML1, HIGH);
  digitalWrite(ML2, LOW);

  delay(2000);

  x = digitalRead(3);
  delay(500);

  if (x == 0) {
    Serial.print("White");

  } else {
    Serial.print("Black");
  }
  Serial.println();

} 
