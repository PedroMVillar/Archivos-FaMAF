---
Materia: Algoritmos1
tags:
  - c
---
La biblioteca `assert.h` en C proporciona una macro llamada `assert` que se utiliza como una herramienta de depuración para validar expresiones y detectar posibles errores en el código durante el desarrollo. 
### 1. Inclusión de la Biblioteca:
```c
#include <assert.h>
```
Antes de utilizar la macro `assert`, debes incluir la biblioteca `assert.h` en tu programa.

### 2. **La Macro `assert`:
```c
void assert(int expresion);
```
**Parámetro:**
- `expresion`: Es una expresión lógica que se evalúa como verdadera (`true`) o falsa (`false`).

### 3. Funcionamiento:
La macro `assert` se utiliza para verificar que la expresión proporcionada sea verdadera. Si la expresión es verdadera, no ocurre nada y el programa continúa su ejecución normal. Sin embargo, si la expresión es falsa, `assert` imprime un mensaje de error en la salida estándar de error (`stderr`) y termina la ejecución del programa.

### 4. Ejemplo de Uso:
```c
#include <stdio.h>
#include <assert.h>

int main() {
    int x = 5;

    // Verificar que x sea igual a 10
    assert(x == 10);

    // Este código solo se ejecutará si la expresión dentro de assert es verdadera
    printf("Después de la verificación.\n");

    return 0;
}
```
En este ejemplo, la expresión `x == 10` en el `assert` se evalúa como falsa, ya que el valor de `x` es 5. Como resultado, el programa imprimirá un mensaje de error y se detendrá.
