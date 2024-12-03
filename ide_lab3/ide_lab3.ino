#include <Adafruit_MotorShield.h>
#include <Servo.h>
#include <string.h>

// Criação do objeto para o motor shield que estou usando
Adafruit_MotorShield AFMS = Adafruit_MotorShield();

// Criação do objeto para o motor DC no conector M1
Adafruit_DCMotor *dcMotor = AFMS.getMotor(1);

// Criação do objeto para o servo
Servo servoMotor;

int servoAngle = 90;   // Ângulo inicial do servo (posição central/inicial)
const int stepSize = 18; // Tamanho do passo em graus

void setup() {
    Serial.begin(9600);  // Inicia a comunicação serial no geral
    AFMS.begin();        // Inicializa o shield
    servoMotor.attach(1); // Conecta o servo no pino 1 
    servoMotor.write(servoAngle); // Move o servo para a posição inicial
}

void loop() {
    if (Serial.available() > 0) {
        String command = Serial.readStringUntil('\n'); // Lê até '\n'
        

        // Liga o motor DC
        if (command == "MOTOR_ON") {
            Serial.print("Comando recebido: ");
            dcMotor->setSpeed(255); // Velocidade máxima inicial
            dcMotor->run(FORWARD);  // Motor na rotaçao correta
        }
        // Desliga o motor DC
        else if (command == "MOTOR_OFF") {
            dcMotor->run(RELEASE); // Para o motor
        }
        // Ajusta a potência do motor
        else if (command.startsWith("POWER_")) {
            String valueStr = command.substring(6); // Extrai o valor após "POWER_"
            int power = valueStr.toInt();           // Converte para inteiro
            int pwmValue = map(power, 0, 100, 0, 255); // Mapeia de 0-100 para 0-255
            dcMotor->setSpeed(pwmValue);            // Ajusta a potência do motor
        }
        // Move o servo para a esquerda
        else if (command == "SERVO_LEFT") {
            servoAngle = max(servoAngle - stepSize, 0); 
            servoMotor.write(servoAngle);
        }
        // Move o servo para a direita
        else if (command == "SERVO_RIGHT") {
            servoAngle = min(servoAngle + stepSize, 180); // Não permite valores acima de 180
            servoMotor.write(servoAngle);
        }
        
    }
}
