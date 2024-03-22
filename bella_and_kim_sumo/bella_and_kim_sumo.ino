#define MR1 5
#define MR2 6
#define ML1 7
#define ML2 8

#define FWRD 0
#define BKWRD 1

int x;

//k
void drive_robot(int dir){
  if (dir == FWRD){
    digitalWrite(MR1, HIGH);
    digitalWrite(MR2, LOW);
    digitalWrite(ML1, HIGH);
    digitalWrite(ML2, LOW);
  }else{
    digitalWrite(MR1, LOW);
    digitalWrite(MR2, HIGH);
    digitalWrite(ML1, LOW);
    digitalWrite(ML2, HIGH);
  }
}

void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  drive_robot(BKWRD);
  
  x = analogRead(3);
  Serial.println(x);
  delay(1000);
}
