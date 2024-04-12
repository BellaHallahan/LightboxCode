#define MR1 5
#define MR2 6
#define ML1 7
#define ML2 8

#define FWRD 0
#define BKWRD 1
#define RGHT 2
#define LEFT 3
#define WHITE 0
#define BLACK 1

int x;
int y;

void drive_robot(int dir) {
  if (dir == FWRD) {
    digitalWrite(MR1, HIGH);
    digitalWrite(MR2, LOW);
    digitalWrite(ML1, HIGH);
    digitalWrite(ML2, LOW);
  } else {
    digitalWrite(MR1, LOW);
    digitalWrite(MR2, HIGH);
    digitalWrite(ML1, LOW);
    digitalWrite(ML2, HIGH);
  }
}
void turn_robot(int dir) {
  if (dir == RGHT) {
    digitalWrite(MR1, LOW);
    digitalWrite(MR2, HIGH);
    digitalWrite(ML1, HIGH);
    digitalWrite(ML2, LOW);
  } else {
    digitalWrite(MR1, HIGH);
    digitalWrite(MR2, LOW);
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
  pinMode(3, INPUT);
  pinMode(2, INPUT);
  Serial.begin(9600);

}

void loop() {
  int rightSensor = digitalRead(3);
  int leftSensor = digitalRead(2);
  
  if(rightSensor == WHITE){
    drive_robot(BKWRD); 
    delay(1000);
    turn_robot(RGHT);
    delay(1000);
    Serial.println("white");
  }else if (rightSensor == BLACK){
    Serial.println("black");
  }
  
  
  drive_robot(FWRD);
  //delay(1000);
 // turn_robot(RGHT);
  //delay(1000);
  //drive_robot(BKWRD);
  delay(30);

}
