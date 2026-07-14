/*-------------------------------------------------------------------------
Programa:    meditrack_arduino.ino
Sinopsis:    Lógica de control para el pastillero inteligente MediTrack.
             Monitoriza un sensor de fuerza (FSR) y activa alertas visuales
             mediante un LED si se detecta la ausencia de medicación.
Asignatura:  Fundamentos de Computadores
Universidad: Universidad de Burgos (UBU)
Autor:       Manuel Bote Rivera
--------------------------------------------------------------------------*/

// Definición de pines (GPIO)
const int SENSOR_PIN = A0;  // Entrada analógica para el sensor de fuerza resistivo (FSR)
const int LED_PIN    = 9;   // Salida digital para el LED de alerta visual

// Parámetros de calibración física
const int UMBRAL_PRESENCIA = 100; // Valor límite para determinar si la pastilla está presente
const int DELAY_PARPADEO   = 500; // Tiempo en milisegundos para la alerta visual (Hz)

// Variables globales
int valorSensor = 0; // Almacena la lectura del convertidor analógico-digital (ADC)

/**
 * Configuración inicial del sistema de hardware.
 */
void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600); // Inicialización del canal serie (preparado para módulo Bluetooth HC-05)
}

/**
 * Bucle principal de control (Frecuencia de muestreo continua).
 */
void loop() {
  // Leer el valor analógico del sensor de presión (0 - 1023)
  valorSensor = analogRead(SENSOR_PIN);
  
  // Lógica de control por umbral
  if (valorSensor < UMBRAL_PRESENCIA) { 
    // CONDICIÓN: Medicación retirada o ausente -> Disparar alerta visual intermitente
    digitalWrite(LED_PIN, HIGH);
    delay(DELAY_PARPADEO);
    digitalWrite(LED_PIN, LOW);
    delay(DELAY_PARPADEO);
  } else {
    // CONDICIÓN: Medicación presente -> Mantener sistema en estado de reposo (LED apagado)
    digitalWrite(LED_PIN, LOW);
  }
}
