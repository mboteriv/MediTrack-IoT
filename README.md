# MediTrack - Smart Medication System

MediTrack es un ecosistema prototipado de **Internet de las Cosas (IoT)** y diseño de experiencia de usuario (UX/UI) enfocado en resolver el problema del incumplimiento terapéutico (el cual afecta al 50% de los tratamientos médicos globales). 

El sistema combina un hardware inteligente simulado que monitoriza físicamente las dosis mediante variaciones de peso, coordinándose en tiempo real con una aplicación móvil complementaria mediante comunicación inalámbrica.

## Características técnicas y funcionalidades

- **Detección de Medicación por Peso:** Validación física del consumo real de los fármacos utilizando un sensor de fuerza/peso integrado en la base del dispositivo.
- **Ecosistema Conectado (IoT):** Modelo de arquitectura de comunicación directa mediante tecnología Bluetooth Low Energy (BLE) entre el microcontrolador y el terminal móvil.
- **Interfaz Móvil (UX/UI):** Flujos de usuario completos diseñados para la configuración de dosis, alarmas horarias automatizadas, alertas acústicas/visuales y registro histórico de adherencia.
- **Hoja de Ruta de Escalabilidad:** Planificación de evolución del producto estructurado en fases de analítica de hábitos y futura integración directa con centros médicos y cadenas farmacéuticas.

## Arquitectura del sistema

El diseño se divide en tres capas de desarrollo tecnológico claramente diferenciadas:

### 1. Hardware IoT (simulado en TinkerCAD)
La electrónica del pastillero inteligente aprovecha un microcontrolador de bajo coste operativo para la lógica física:
- **Cerebro:** Arduino Uno R3.
- **Sensores:** Sensor de presión/fuerza resistivo (FSR) calibrado para discriminar el peso de los blisters o pastillas individuales.
- **Actuadores/Outputs:** Diodo LED indicador de estado y alertas físicas.

### 2. Diseño de Aplicación (prototipado en Figma)
Interfaz diseñada bajo un enfoque de accesibilidad e interacción limpia, estructurando los siguientes módulos principales:
- **Configuración:** Registro ágil de fármacos, miligramos y colores distintivos.
- **Alertas Activas:** Pantallas de notificación inmediata y temporizadores.
- **Dashboard de Historial:** Contador de rachas de cumplimiento diario ("Day Streak") y registros semanales.

## Estructura sugerida para el repositorio

Para que el proyecto se entienda perfectamente de un vistazo, te sugiero estructurar las carpetas de tu repositorio público así:
```text
├── hardware/
│   ├── meditrack_arduino.ino   # Código C++ de la simulación de Arduino
│   └── esquema_circuito.png    # Captura del circuito montado en TinkerCAD
├── figma_ui/
│   ├── app_mockups.pdf         # Exportación en PDF de las vistas de Figma
│   └── link_prototipo.txt      # Enlace al prototipo interactivo de Figma
├── documentacion/
│   └── meditrack_slides.pdf    # Presentación ejecutiva del proyecto
└── README.md                   # Este archivo
```

## Autor
- **Manuel Bote Rivera** - *Concepción de producto, diseño UX/UI y prototipado IoT* - [Tu GitHub](https://github.com)
