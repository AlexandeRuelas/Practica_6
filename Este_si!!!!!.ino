#define Ingresar_nombre_led_u_otro D6 // d6 pin numero 6 del NODEMCU

void setup() {
  pinMode(Ingresar_nombre_led_u_otro, OUTPUT);// OUTPUT para que encienda el led
  Serial.begin(9600);// Por defecto 9600 necesario
}

void loop() {
	if(Serial.available()){
    int variable_dato_ingresado_por_teclado;// Definiendo caroables necesarias
	  variable_dato_ingresado_por_teclado = Serial.parseInt();  // Guardando valor en variable_dato_ingresado_por_teclado
    
		digitalWrite(Ingresar_nombre_led_u_otro, LOW);// Apaga el led
		
		if(/*Condicion*/){
			digitalWrite(Ingresar_nombre_led_u_otro, HIGH);// Enciende el led
		}
		else{
      /*Otra tarea*/
		}

	}
