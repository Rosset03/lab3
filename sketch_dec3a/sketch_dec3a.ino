#include <Servo.h>  // Inclua a biblioteca Servo

Servo servoMotor;  // Criação do objeto para o servo

void setup() {
    Serial.begin(9600);  // Inicia a comunicação serial
    servoMotor.attach(1);  // Conecta o servo ao pino 9 (modifique conforme necessário)

    Serial.println("Teste do Servo");
}

void loop() {
    // Teste simples para mover o servo de 0 a 180 graus
    for (int pos = 0; pos <= 180; pos++) {
        servoMotor.write(pos);  // Mover o servo para o ângulo 'pos'
        delay(15);  // Aguarde o servo mover até o novo ângulo
    }
    
    delay(1000);  // Aguarde 1 segundo

    // Agora mova o servo de volta de 180 para 0 graus
    for (int pos = 180; pos >= 0; pos--) {
        servoMotor.write(pos);  // Mover o servo para o ângulo 'pos'
        delay(15);  // Aguarde o servo mover até o novo ângulo
    }
    
    delay(1000);  // Aguarde 1 segundo
}
