---
Materia: Algoritmos1
tags:
  - invariante
---
El primer paso en la derivación de un ciclo es la determinación del invariante INV y la guarda B, los cuales, como hemos dicho, deben satisfacer INV ∧ ¬B ⇒ Q, donde Q es la postcondición del problema. A continuación describiremos algunas técnicas para determinar invariantes.
## Tomar términos de una conjunción
En algunas ocasiones la postcondición es una conjunción, digamos $Q = Q_0 ∧Q_1$, o puede reescribirse como tal. En estos casos, la implicación INV ∧ ¬B ⇒ Q puede asegurarse fácilmente tomando como INV a uno de los términos de la conjunción y como B a la negación del otro: $INV = Q_0$ y B = ¬Q1.

### Ejemplo
Dados dos números, hay que encontrar el cociente y el resto de la división entera entre ellos.
Para enteros x ≥ 0 e y > 0, el cociente q y el resto r de la división entera de x por y están caracterizados por x = q ∗ y + r ∧ 0 ≤ r ∧ r < y. Por lo tanto, debemos derivar un programa S que satisfaga:

var x, y, q, r : Int 
{P : x ≥ 0 ∧ y > 0} (precondición) 
S 
{Q : x = q ∗ y + r ∧ 0 ≤ r ∧ r < y} (postcondición)

La postcondición es una conjunción de tres términos. El primero de ellos, x = q ∗ y + r, debe ser válido en todo momento, ya que en cualquier paso intermedio de una división se verifica que el cociente obtenido hasta el momento multiplicado por el divisor más el resto que se tiene en ese momento es igual al dividendo. El término 0 ≤ r también debe valer en todo momento, puesto que la división no admite restos negativos. El término restante, r < y, no es necesariamente válido en todo momento de la división; más aún, solo se verifica al completar la misma.
Por ello elegimos como invariante {INV : x = q ∗ y + r ∧ 0 ≤ r}. La guarda es la negación del resto de la conjunción, es decir ¬(r < y), de donde resulta {B : r ≥ y}.

El próximo paso es establecer el invariante inicialmente. Como en INV intervienen q y r, que no aparecen en la precondición R, la inicialización debe consistir en una asignación de valores a estas variables. Debemos elegir expresiones enteras E y F tales que P ⇒ wp.(q, r := E, F).P.

wp.(q, r := E, F).P 
≡ { definición de wp y P } 
(x = q ∗ y + r ∧ 0 ≤ r)(q, r := E, F) 
≡ { sustitución en predicados } 
x = E ∗ y + F ∧ 0 ≤ F
⇐ { precondición y E, F : Int } 
E = 0 ∧ F = x

Hasta aca se tiene el programa:

var x, y, q, r : Int 
{P : x ≥ 0 ∧ y > 0} 
q, r := 0, x 
{INV : x = q ∗ y + r ∧ 0 ≤ r} 
**<u>do</u>** r ≥ y →
S 
<u>**od**</u> 
{Q : x = q ∗ y + r ∧ 0 ≤ r ∧ r < y}

Lo único que resta es derivar el cuerpo del ciclo. El análisis que hemos efectuado para determinar la cota nos indica que r debe decrecer. Postulemos, entonces, ejecutar q, r := E, r − k y determinemos los valores adecuados de E y k, teniendo en cuenta que debemos mantener el invariante, es decir, se debe satisfacer {INV ∧ B} (q, r := E, r − k) {INV}. Esto queda garantizado demostrando INV ∧ B ⇒ wp.(q, r := E, r − k).INV.

wp.(q, r := E, r − k).P 
≡ { definición de wp } 
(x = q ∗ y + r ∧ 0 ≤ r)(q, r := E, r − k) 
≡ { sustitución en predicados } 
x = E ∗ y + (r − k) ∧ 0 ≤ r − k 
≡ { P y aritmética } 
q ∗ y + r = E ∗ y + r − k ∧ k ≤ r 
≡ { aritmética }
$E = q + \frac{k}{y} ∧ k ≤ r$
Como E debe ser entero, k debe ser múltiplo de y. Además, k debe ser positivo, para que t decrezca. Podemos elegir, entonces, cualquier múltiplo positivo de y. Continuemos la derivación:
⇐ { Elegimos k = y, el menor múltiplo positivo de y } 
E = q + 1 ∧ y ≤ r 
≡ { y ≤ r por B } 
E = q + 1

Finalmente obtenemos el programa completo:

var x, y, q, r : Int;
q, r := 0, x 
**<u>do</u>** r ≥ y → 
q, r := q + 1, r − y 
**<u>od</u>**

## Reemplazo de constantes por variables
A veces es imposible expresar la postcondición como una conjunción. En estos casos, hay que apelar a otras técnicas para la determinación de invariantes. Una técnica muy simple, pero no por ello menos útil, es la de reemplazar en la postcondición constantes por variables.

## Ejemplo
Dado un arreglo de enteros, se debe devolver en una variable la suma de todos los elementos del arreglo.
Debemos derivar un programa que satisfaga la siguiente especificación:

Const N : Int, A : Array[0, N) of Int;
Var res : Int;
{ P: N ≥ 0 }
   S
{ Q: res = 〈∑ i : 0 ≤ i < N : A.i 〉}

El cuantificador que aparece en la postcondición involucra las constantes 0 y N. Tomemos como invariante INV lo que se obtiene al reemplazar en la postcondición la constante N por la variable n:
<center> INV ≡  res = 〈∑ i : 0 ≤ i < N : A.i 〉</center>

Con esta definición de INV, resulta INV ∧ (n = N) ⇒ Q. De aquí que la guarda es ¬(n = N), es decir, n ≠ N. Ahora bien, no podemos permitir valores de n mayores que N, pues la evaluación a.i que aparece en el invariante solo tiene sentido cuando 0 ≤ i ≤ N. Por eso, al introducir variables nuevas, es generalmente necesario reforzar el invariante, a fin de evitar indefiniciones. El refuerzo consiste en agregar una cláusula indicando el rango para la variable recientemente introducida. En nuestro caso, debemos pedir:
- invariante: INV : x = h P i : 0 ≤ i < n : a.i i ∧ 0 ≤ n ≤ N 
- guarda: B : n ≠ N

El programa queda como:

										 
Const N : Int, A : Array[0, N) of Int;
Var res, pos : Int;
{ P: N ≥ 0 }

   S1 ;  // inicialización

{ INV }
   **<u>do</u>** pos < N → 

             { INV  ∧ B  }

              S2     // cuerpo del ciclo

             { INV }

**<u>od</u>**
{ Q: res = 〈∑ i : 0 ≤ i < N: A.i 〉}

### Inicialización
Encontrar S1 tal que vale la terna:

{ P: N ≥ 0 }

   S1 ;  // inicialización

{ INV: res = 〈∑ i : 0 ≤ i < pos : A.i 〉  ∧   0 ≤ pos ≤ N }

Probamos con una asignación:   res, pos := E, F. Supongamos la precondición P: N ≥ 0, y veamos la wp:

  wp.S1.INV
≡ { def. wp para := }
  E = 〈∑ i : 0 ≤ i < F : A.i 〉  ∧   0 ≤ F ≤ N 
≡ { elijo F = 0 ,  E = 0   }
  0 = 〈∑ i : 0 ≤ i < 0 : A.i 〉  ∧   0 ≤ 0 ≤ N 
≡ { pasos varios … }
  True

### Cuerpo del ciclo
Encontrar S2 tal que vale la terna:

{ INV  ∧ B :  res = 〈∑ i : 0 ≤ i < pos : A.i 〉  ∧   0 ≤ pos ≤ N  ∧ pos ≠ N }

              S2     // cuerpo del ciclo

{ INV :  res = 〈∑ i : 0 ≤ i < pos : A.i 〉  ∧   0 ≤ pos ≤ N  }

Probamos con una asignación: res, pos := E, F, como tenemos que recorrer un arreglo, sabemos de antemano que F = pos + 1, entonces res, pos := E, pos + 1

  wp.(res, n := E, n - 1).INV
≡ { def wp para := }
   E = 〈∑ i : n - 1 ≤ i < N : A.i 〉  ∧   0 ≤ n-1 ≤ N
≡  {  n-1 ≤ N vale ya que n ≤ N, 0 ≤ n-1 vale ya que por hip n ≥ 0  y además n ≠ 0  
      (o sea n ≥ 1). }
   E = 〈∑ i : n - 1 ≤ i < N : A.i 〉
≡ { reescribimos rango por lógica }
   E = 〈∑ i :  i = n - 1   ∨   n ≤  i < N : A.i 〉
≡ { part. rango  }
   E = 〈∑ i :  n ≤  i < N : A.i 〉 + 〈∑ i :  i = n - 1 : A.i 〉
≡ { hip. }
   E = res  + 〈∑ i :  i = n - 1 : A.i 〉
≡ {  rango unitario }
   E = res  +  A.(n-1)
≡ { elijo E = res  +  A.(n-1) }
  True

### Resultado final

Const N : Int, A : Array[0, N) of Int;
Var res , n : Int;
   res, n := 0, N ;
   **<u>do</u>** n ≠ 0 → 
          res, n :=  res + A.(n-1) , n - 1
   **<u>od</u>**
{ Q: res = 〈∑ i : 0 ≤ i < N : A.i 〉}


