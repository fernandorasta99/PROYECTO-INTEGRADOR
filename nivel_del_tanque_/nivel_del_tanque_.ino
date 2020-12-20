const int LED=13;
void setup() {
pinMode(LED,OUTPUT);
//Inicializa el puerto serie
Serial.begin(9600);
}
void loop() {
int lectura;
lectura = analogRead(0); //LEEMOS ADC
Serial.print(lectura); //ENVIAMOS LECTURA
delay(500); //GENERAMOS UNA PAUSA
if (lectura > 1020)
{
digitalWrite(LED,HIGH);
}
if (lectura < 1020)
{
digitalWrite(LED,LOW);
}
}
