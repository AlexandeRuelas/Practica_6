#define L_6 D6 // d6 pin numero 6 del NODEMCU
#define L_7 D7
#define L_8 D8

void setup() {
  pinMode(L_6, OUTPUT);// OUTPUT para que encienda el led
  pinMode(L_7, OUTPUT);
  pinMode(L_8, OUTPUT);
  
  Serial.begin(9600);// Por defecto 9600 necesario
}

void loop() {
	if(Serial.available()){
		int num;// Definiendo caroables necesarias
	 	num = Serial.parseInt();  // Guardando valor en variable_dato_ingresado_por_teclado
		digitalWrite(L_6, LOW);// Apaga el led
		digitalWrite(L_7, LOW);
    		digitalWrite(L_8, LOW);
    
		if(num == 0){
			digitalWrite(L_6, HIGH);// Enciende el led
		}
		else if(num > 0){
      			digitalWrite(L_7, HIGH);
		}
    		else{
      			digitalWrite(L_8, HIGH);
    		}
	}

}
