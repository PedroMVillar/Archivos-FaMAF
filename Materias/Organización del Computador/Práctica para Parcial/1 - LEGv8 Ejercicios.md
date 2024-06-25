![[6ej6.png]]
**Punto a**
```asm
LSL X2, X4, #1 // X2 = X4*2 
ADD X0, X2, X4 // X0 = (X4*2)+X4 = X4*3
ADD X0, X0, X4 // X0 = (X4*3)+X4 = X4*4
```
El código en C correspondiente es:
```c
f = j*4;
```
Y se puede reescribir para minimizar de esta forma:
```asm
LSL X2, X4, #2
```
**Punto b**
```
LSL X9, X3, #3       // X9    = X3*8
ADD X9, X6, X9       // X9    = X6 + (X3*8) = A[X3]
LSL X10, X4, #3      // X10   = X4*8
ADD X10, X7, X10     // X10   = X7 + (X4*8) = B[X4] 
LDUR X12, [X9, #0]   // X12   = A[X3]
ADDI X11, X9, #8     // X11   = &A[X3+1]
LDUR X9, [X11, #0]   // X9    = A[X3+1]
ADD X9, X9, X12      // X9    = A[X3] + A[X3+1] 
STUR X9, [X10, #0]   // B[X4] = A[X3] + A[X3+1]
```
La secuencia mínima de código C es:
```c
B[j] = A[i] + A[i+1]
```
Se podría minimizar un poco de la siguiente manera:
```
LSL X9, X3, #3       // X9    = X3*8
ADD X9, X6, X9       // X9    = X6 + (X3*8) = A[X3]
LSL X10, X4, #3      // X10   = X4*8
ADD X10, X7, X10     // X10   = X7 + (X4*8) = B[X4] 
LDUR X12, [X9, #0]   // X12   = A[X3]
LDUR X9, [X9, #8]    // X9    = A[X3+1]
ADD X9, X9, X12      // X9    = A[X3] + A[X3+1] 
STUR X9, [X10, #0]   // B[X4] = A[X3] + A[X3+1]
```

---

![[7ej1.png]]
```asm
	  SUBIS X0, X0, #0 // Setea Flags para comparar X0 con 0
	  B.LT else        // Si X0 < 0, entonces salta al else, sino continua 
	  B done           // Salta al final
else: SUB X0, XZR, X0  // X0 = 0 - X0
done:                  
```
Lo que hace este programa es:
```c
(x0 < 0) ? X0 = X0 : X0 = -X0;
```

```asm
	  MOV X9, X0      // X9 = XO
      MOV X0, XZR     // X0 = 0
loop: ADD X0, X0, X9  // X0 = X9 + X0
      SUBI X9, X9, #1 // X9 = X9 - 1
      CBNZ X9, loop   // SI X9 != 0 REPITE
done:
```
Es un cálculo simple de la suma de todos los números desde un número inicial (X9) hasta 1. 
1. `MOV X9, X0`: Mueve el valor del registro X0 al registro X9. Este valor será el número inicial desde el cual se comenzará a contar hacia abajo.
2. `MOV X0, XZR`: Pone el registro `X0` a `0`. Este registro se usará para acumular la suma.
3. `loop: ADD X0, X0, X9`: En cada iteración del bucle, se suma el valor actual de `X9` al total acumulado en `X0`.
4. `SUBI X9, X9, #1`: Decrementa el valor de X9 en 1.
5. `CBNZ X9, loop`: Si `X9` no es cero (lo que significa que todavía hay números que sumar), salta de nuevo al inicio del bucle.
6. `done:`: Esta es solo una etiqueta que marca el punto al que el flujo del programa llegará una vez que se haya completado el bucle.

Entonces, si el valor inicial en `X0` (que se mueve a `X9`) es, por ejemplo, 5, el programa calculará 5 + 4 + 3 + 2 + 1 y almacenará el resultado (15) en `X0`.

---

![[7ej2.png]]

```
	  SUBIS XZR, X9, #0 
	  B.GE else 
	  B done 
else: ORRI X10, XZR, #2 
done:
```
**Punto 1.1**
- `SUBIS XZR, X9, #0`: Compara X9 con 0, como X9 es mayor a 0, salta al else,
- `ORRI X10, XZR, #2`: 
$$
0x0000000000000000 \vee 0x0000000000000002 = 0x0000000000000002 
$$
El valor final de $X10$ es $0x0000000000000002$
**Punto 1.2**
- `SUBIS XZR, X9, #0`: Compara X9 con 0, como X9 es menor a 0, termina la ejecución y no hace nada.

El valor final de $X10$ es $X10=0x0000000000000001$.

![[7ej5.png]]
```asm
      ADD X10, XZR, XZR   // i = 0
loop: LDUR X1, [X0, #0]   // a = MemArray[0]
	  ADD X2, X2, X1      // result = result + MemArray[0]
	  ADDI X0, X0, #8     // MemArray pasa a apuntar al prox elemento
	  ADDI X10, X10, #1   // i = i + 1
	  CMPI X10, #100      // Compara i con 100
	  B.LT loop           // mientras i < 100, vuelve al loop principal
```
El código es el siguiente
```c
for(int i = 0; i < 100; i++) a = MemArray[i], result += a
```

```asm
	  ADDI X10, XZR, #50 // i = 50
loop: LDUR X1, [X0,#0]   // a = MemArray[0]
	  ADD X2, X2, X1     // result = result + a
	  LDUR X1, [X0,#8]   // result = MemArray[1] 
	  ADD X2, X2, X1     // result = result + a
	  ADDI X0, X0, #16   // pasa dos posiciones mas adelante el arreglo
	  SUBI X10, X10, #1  // i = i - 1
	  CBNZ X10, loop     // Mientras i != 0 vuelve a iterar
```
El código es el siguiente:
```c
for(int i = 0; i < 50; i = i + 2){
	a = MemArray[i];
	result += a;
	a = MemArray[i+1];
	result += a;
}
```

---

![[7ej6.png]]















