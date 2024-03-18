#define M1 5
#define M2 6
#define M3 7
#define M4 8

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
  digitalWrite(M1, HIGH);
  digitalWrite(M2, LOW);

  digitalWrite(M3, LOW);
  digitalWrite(M4, HIGH);

  delay(2000);

  digitalWrite(M1, LOW);
  digitalWrite(M2, HIGH);

  digitalWrite(M3, HIGH);
  digitalWrite(M4, LOW);

  delay(2000);

  x = analogRead(3);
  Serial.println(x);
  delay(1000);
}
