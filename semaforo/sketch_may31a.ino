#define Rojo 2
#define Verde 4
#define Amarillo 7

void setup() {
  // put your setup code here, to run once:
  pinMode(Rojo,OUTPUT);
  pinMode(Verde,OUTPUT);
  pinMode(Amarillo,OUTPUT);
  digitalWrite(Rojo,HIGH);
  digitalWrite(Verde,LOW);
  digitalWrite(Amarillo,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Rojo,HIGH);
  delay(5000);
  digitalWrite(Rojo,LOW);
  digitalWrite(Verde,HIGH);
  delay(10000);
  digitalWrite(Verde,LOW);
  digitalWrite(Amarillo,HIGH);
  delay(2000);
  digitalWrite(Amarillo,LOW);
}
