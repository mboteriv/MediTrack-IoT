# MediTrack - Sistema de medicación inteligente

MediTrack es un ecosistema prototipado de **Internet de las Cosas (IoT)** y diseño de experiencia de usuario (UX/UI) enfocado en resolver el problema del incumplimiento terapéutico (el cual afecta al 50% de los pacientes globales). 

El sistema combina un hardware inteligente simulado que monitoriza físicamente las dosis mediante variaciones de peso, coordinándose en tiempo real con una aplicación móvil complementaria mediante comunicación inalámbrica Bluetooth.

---

## Prototipo de la interfaz de usuario (Figma)

La aplicación móvil cuenta con un flujo completo de alta de medicamentos, gestión de dosis y alarmas visuales. 

<p align="center">
  <img src="figma_ui/app_mockup.jpg" alt="MediTrack UI Mockup" width="600">
</p>

▶️ **[Interactuar con el prototipo en tiempo real en Figma](https://figma.com)**

---

## Características técnicas y guncionalidades

- **Detección de medicación por peso:** Validación física del consumo real de los fármacos utilizando un sensor de fuerza/peso integrado en la base del dispositivo.
- **Ecosistema conectado (IoT):** Modelo de arquitectura de comunicación directa mediante tecnología Bluetooth Low Energy utilizando el módulo HC-05.
- **Interfaz móvil (UX/UI):** Flujos de usuario completos diseñados para la configuración de dosis, alarmas horarias automatizadas, alertas acústicas/visuales y registro histórico de adherencia.
- **Hoja de ruta de escalabilidad:** Planificación de evolución del producto estructurado en fases de analítica de hábitos y futura integración directa con centros médicos y cadenas farmacéuticas.

## Arquitectura del sistema

El diseño se divide en tres capas de desarrollo tecnológico claramente diferenciadas:

### 1. Hardware IoT (simulado en TinkerCAD)
La electrónica del pastillero inteligente aprovecha un microcontrolador de bajo coste operativo para la lógica física:
- **Núcleo:** Arduino Uno R3.
- **Sensores:** Sensor de presión/fuerza resistivo (FSR) calibrado para discriminar el peso de las pastillas.
- **Lógica de alerta:** Activación automática de alertas intermitentes en el LED cuando el sensor registra un valor inferior al umbral de presencia (medicación retirada de forma incorrecta u omitida).

### 2. Diseño de aplicación (Figma)
Interfaz diseñada bajo un enfoque de accesibilidad e interacción limpia, estructurando los siguientes módulos principales:
- **Configuración:** Registro ágil de fármacos, miligramos y colores distintivos.
- **Alertas activas:** Pantallas de notificación inmediata y temporizadores.
- **Panel de control de historial:** Contador de rachas de cumplimiento diario ("Day Streak") y registros semanales.

## 📁 Estructura del Repositorio

```text
├── hardware/
│   └── meditrack_arduino.ino   # Código C++ de la simulación de Arduino
├── figma_ui/
│   ├── app_mockup.jpg          # Captura de pantalla de la interfaz de usuario
│   └── link_prototipo.txt      # Enlace al prototipo interactivo de Figma
├── documentacion/
│   ├── meditrack_slides.pdf    # Presentación ejecutiva del proyecto
│   └── memoria_tecnica.pdf     # Documentación del proyecto de la UBU
└── README.md                   # Este archivo
```

## Autor
- **Manuel Bote Rivera** - *Concepción de producto, diseño UX/UI y prototipado IoT* - [Tu GitHub](https://github.com)

