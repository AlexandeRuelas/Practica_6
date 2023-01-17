#define Led_red D8
#define Led_blu D7
#define Led_gre D6

String mensaje1 = "Ingrese un numero: ";
String mensaje2 = "Numero Ingresado: ";

int num;
float x;
void setup() {
  pinMode(Led_red, OUTPUT);
  pinMode(Led_blu, OUTPUT);
  pinMode(Led_gre, OUTPUT);
  Serial.begin(9600);
}
void loop() {

  Serial.println(mensaje1);
    while (Serial.available() == 0) {
    }

 // num = Serial.parseInt();
 // Serial.print(mensaje2);
 // Serial.println(num);

  num = Serial.parseFloat();
//  x = Serial.read();
  if (num = 0) {
    digitalWrite(Led_red, HIGH);
    delay(500);
    } else if (num > 0) {
    digitalWrite(Led_blu, HIGH);
    delay(500);
  } else {
    digitalWrite(Led_gre, HIGH);
    delay(500);
  }

};
