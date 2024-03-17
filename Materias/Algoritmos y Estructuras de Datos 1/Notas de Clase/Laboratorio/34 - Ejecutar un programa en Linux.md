---
Materia: Algoritmos1
tags:
  - c
---
1. **Verificar si GCC está instalado:**
    - La mayoría de las distribuciones de Linux incluyen GCC por defecto. Si no lo tienes instalado, puedes instalarlo utilizando el administrador de paquetes de tu distribución. Por ejemplo, en sistemas basados en Debian, puedes usar:
		```bash
        `sudo apt-get update sudo apt-get install gcc`
        ```
2. **Crear un Programa en C:**
    - Crea un archivo llamado `programa.c` con tu código en C.
3. **Abrir la Terminal:**
    - Abre la terminal de Linux. Puedes hacerlo desde el menú de aplicaciones o utilizando un atajo de teclado como `Ctrl + Alt + T`.
4. **Navegar al Directorio del Archivo C:**
    - Usa el comando `cd` para cambiar al directorio donde tienes guardado tu archivo `programa.c`. Por ejemplo:
        ```bash
		`cd Ruta/De/Tu/Directorio`
		```
5. **Compilar el Programa con GCC:**
    - Ejecuta el siguiente comando para compilar tu programa C:
		```bash
		`gcc -Wall -Wextra -std=c99 programa.c -o holaPrograma`
		```
        - `-Wall`: Muestra todos los mensajes de advertencia estándar.
        - `-Wextra`: Habilita algunas advertencias adicionales que no están habilitadas por `-Wall`.
        - `-std=c99`: Especifica el estándar de C que el compilador debe seguir.
        - `programa.c`: Nombre del archivo fuente.
        - `-o holaPrograma`: Especifica el nombre del archivo ejecutable resultante.
6. **Ejecutar el Programa:**
    - Después de compilar con éxito, ejecuta el programa con el siguiente comando:
    ```bash
    ./holaPrograma
	```
	