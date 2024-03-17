---
Materia: Algoritmos1
tags:
  - c
---
1. **Instalar GCC en Windows:**
    - Asegúrate de tener GCC instalado en tu sistema. Puedes usar MinGW (Minimalist GNU for Windows) que proporciona un entorno de desarrollo de software para Windows basado en GCC. Puedes descargarlo desde MinGW.org.
2. **Configurar el Path:**
    - Agrega la ruta del directorio donde instalaste GCC al PATH del sistema. Esto facilitará la ejecución de comandos desde cualquier ubicación en la línea de comandos.
3. **Crear un Programa en C:**
    - Crea un archivo llamado `archivo.c` con tu código en C.
4. **Abrir la Línea de Comandos:**
    - Abre la línea de comandos de Windows. Puedes hacer esto presionando `Win + R`, escribiendo `cmd` y presionando Enter.
5. **Navegar al Directorio del Archivo C:**
    - Usa el comando `cd` para cambiar al directorio donde tienes guardado tu archivo `archivo.c`. Por ejemplo:
    ```bash
    cd Ruta\De\Tu\Directorio
	```
6. **Compilar el Programa con GCC:**
	- Ejecuta el siguiente comando para compilar tu programa C:
	```bash
	gcc -Wall -Wextra -std=c99 archivo.c -o programa
	```
	- `-Wall`: Muestra todos los mensajes de advertencia estándar.
	- `-Wextra`: Habilita algunas advertencias adicionales que no están habilitadas por `-Wall`.
	- `-std=c99`: Especifica el estándar de C que el compilador debe seguir.
	- `archivo.c`: Nombre del archivo fuente.
	- `-o programa`: Especifica el nombre del archivo ejecutable resultante.
7. **Ejecutar el Programa:**
	- Después de compilar con éxito, ejecuta el programa con el siguiente comando:
	```bash
	programa
	```