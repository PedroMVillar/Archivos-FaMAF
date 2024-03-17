---
Materia: Algoritmos1
tags:
  - ejercicios
  - derivación
---
## Ejemplo 1
Derivar la especificación:
$$
〈 ∑ i : 0 ≤ i < n : x^i 〉
$$
**Necesitamos hacer inducción en n.**
### Caso base
Tomando n = 0 :
sum_pot.x.0
= { especificación }
〈 ∑ i : 0 ≤ i < 0 : $x^i$ 〉
= { lógica y rango vacío }
 0

### Paso inductivo
Tomando n = n + 1 :

sum_pot.x.(n + 1)
= { especificación }
〈 ∑ i : 0 ≤ i < n + 1 : $x^i$ 〉
= { lógica en el rango: 0 ≤ i < n  ∨  i = n }
〈 ∑ i :  0 ≤ i < n  ∨  i = n : $x^i$ 〉
= { partición de rango ya q son disjuntas las dos partes }
〈 ∑ i :  0 ≤ i < n : $x^i$ 〉 + 〈 ∑ i :  i = n : $x^i$ 〉
= { Hipótesis Inductiva }
   sum_pot.x.n + 〈 ∑ i :  i = n : $x^i$ 〉
= { Rango unitario }
  sum_pot.x.n +  $x^n$
{ **acá $x^n$ no es programable, entonces se introduce una modularización especificada como exp.x.n = $x^n$. }**
   sum_pot.x.n + exp.x.n

*Ahora hay que derivar el nuevo problema con la especificación modularizada*

#### Caso base
exp.x.0
= { especificación }
  $x^0$
= { arit }
  1

#### Paso inductivo
exp.x.(n + 1)
= { especificación }
  $x^n$ + 1
= { prop. de la exponenciación }
  $x^n$ * x
= { H.I. }
  exp.x.n * x

### Resultado final
$$
\begin{align*}
& sum\_pot.x.0 ≐ 0 \\
& sum\_pot.x.(n + 1) ≐ sum\_pot.x.n + exp.x.n \\
& \\
& exp.x.0 ≐ 1 \\
& exp.x.(n + 1) ≐ exp.x.n * x 

\end{align*}
$$


## Ejemplo 2
Derivar la siguiente especificación
$$
prod\_suf.xs = 〈∃ i : 0 < i ≤ \#xs : 〈Π j: 0 ≤ j < \#(xs↓i) : (xs↓i)!j〉 = xs!(i-1) 〉
$$
Haremos la derivación por inducción en xs.

### Caso base
Tomando xs = [ ] :

prod_suf.[ ]
= { especificación }
〈∃ i : 0 < i ≤ #[ ] : 〈Π j: 0 ≤ j < #([ ]↓i) : ([ ]↓i)!j〉 = [ ]!(i-1) 〉
= { def. # }
〈∃ i : 0 < i ≤ 0 : 〈Π j: 0 ≤ j < #([ ]↓i) : ([ ]↓i)!j〉 = [ ]!(i-1) 〉
= { rango vacío }
False

### Paso inductivo
Tomando xs = y ►ys.
H.I. : prod_suf.ys = 〈∃ i : 0 < i ≤ \#ys : 〈Π j: 0 ≤ j < #(ys↓i) : (ys↓i)!j〉 = ys!(i-1) 〉

prod_suf.(y►ys)
= { especificación }
〈∃ i : 0 < i ≤ #(y►ys) : 〈Π j: 0 ≤ j < #((y►ys)↓i) : ((y►ys)↓i)!j〉 = (y►ys)!(i-1) 〉
= { def. # }
〈∃ i : 0 < i ≤ \#ys + 1 : 〈Π j: 0 ≤ j < #((y►ys)↓i) : ((y►ys)↓i)!j〉 = (y►ys)!(i-1) 〉
= { lógica }
〈∃ i : i = 1 ∨ 1 < i ≤ \#ys + 1 : 〈Π j: 0 ≤ j < #((y►ys)↓i) : ((y►ys)↓i)!j〉 = (y►ys)!(i-1) 〉
= { part. de rango }
〈∃ i : i = 1 : 〈Π j: 0 ≤ j < #((y►ys)↓i) : ((y►ys)↓i)!j〉 = (y►ys)!(i-1) 〉 ∨
〈∃ i : 1 < i ≤ \#ys + 1 : 〈Π j: 0 ≤ j < #((y►ys)↓i) : ((y►ys)↓i)!j〉 = (y►ys)!(i-1) 〉
= { rango unitario en el 1er cuant }
〈Π j: 0 ≤ j < #((y►ys)↓1) : ((y►ys)↓1)!j〉 = (y►ys)!(1-1) ∨
〈∃ i : 1 < i ≤ \#ys + 1 : 〈Π j: 0 ≤ j < #((y►ys)↓i) : ((y►ys)↓i)!j〉 = (y►ys)!(i-1) 〉
= { def de ↓ y de ! }
〈Π j: 0 ≤ j < \#ys : ys ! j〉= y ∨
〈∃ i : 1 < i ≤ \#ys + 1 : 〈Π j: 0 ≤ j < #((y►ys)↓i) : ((y►ys)↓i)!j〉 = (y►ys)!(i-1) 〉
= { tratemos de llegar a la H.I. : cambio de variable i → i + 1 en el existencial }
〈Π j: 0 ≤ j < \#ys : ys ! j〉= y ∨
〈∃ i : 1 < i + 1 ≤ \#ys + 1 : 〈Π j: 0 ≤ j < #((y►ys)↓(i+1)) : ((y►ys)↓(i+1))!j〉 = (y►ys)!((i+1)-1) 〉
= { logica: resto 1 en la desigualdad }
〈Π j: 0 ≤ j < \#ys : ys ! j〉= y ∨
〈∃ i : 0 < i ≤ \#ys : 〈Π j: 0 ≤ j < #((y►ys)↓(i+1)) : ((y►ys)↓(i+1))!j〉 = (y►ys)!((i+1)-1) 〉
= { def de ↓ : (y►ys)↓(i+1) = ys ! i }
〈Π j: 0 ≤ j < \#ys : ys ! j〉= y ∨
〈∃ i : 0 < i ≤ \#ys : 〈Π j: 0 ≤ j < \#ys↓i : (ys↓i)!j〉 = (y►ys)!((i+1)-1) 〉
= { arit. y def ! : (y►ys)! ((i+1)-1) = (y►ys)! ((i-1)+1) = ys!(i-1) }
〈Π j: 0 ≤ j < \#ys : ys ! j〉= y ∨
〈∃ i : 0 < i ≤ \#ys : 〈Π j: 0 ≤ j < \#ys↓i : (ys↓i)!j〉 = ys!(i-1) 〉
= { H.I. }
(〈Π j: 0 ≤ j < \#ys : ys ! j〉= y ) ∨ prod_suf.ys
= **{ queda esa productoria molestando, modularizamos con la función prod especificada de la siguiente manera: prod.ws = 〈Π j: 0 ≤ j < \#ws : ws ! j〉 }**
( prod.ys = y ) ∨ prod_suf.ys

### Resultado final
$$
\begin{align*}
& prod\_suf.[ ] ≐ False \\
& prod\_suf.(x►xs) ≐ ( prod.xs = x ) ∨ prod\_suf.xs \\
& \\
& prod.[ ] ≐ 1 \\
& prod.(x►xs) ≐ x * prod.xs
\end{align*}
$$

## Ejemplo 3
Derivar la siguiente especificación
$$
cos’.n.x = 〈 ∑ i : 0 ≤ i ≤ n : (-1)^i \cdot x^{(2i)} / (2i)! 〉
$$
Derivamos por inducción en n:
### Caso base 
Tomando n = 0 :
cos’.0.x
= { varios pasos, rango unitario }
$(-1)^0$ \* $x^{(2*0)}$ / (2\*0)!
= { aritmética }
1 * 1 / 1
= { aritmética }
1

### Paso inductivo 
Tomando n = m + 1 :

H.I.: cos’.m.x = 〈 ∑ i : 0 ≤ i ≤ m : $(-1)^i$ \* $x^{(2i)}$ / (2i)! 〉

cos’.(m+1)
= { especificación }
〈 ∑ i : 0 ≤ i ≤ m + 1 : $(-1)^i$ \* $x^{(2i)}$ / (2i)! 〉
= { lógica }
〈 ∑ i : 0 ≤ i ≤ m ∨ (i = m + 1) : $(-1)^i$ \* $x^{(2i)}$ / (2i)! 〉
= { part. rangos disjuntos }
〈 ∑ i : 0 ≤ i ≤ m : $(-1)^i$ \* $x^{(2i)}$ / (2i)! 〉 + 〈 ∑ i : i = m + 1 : $(-1)^i$ \* $x^{(2i)}$ / (2i)! 〉
= { H.I. }
cos’.m.x + 〈 ∑ i : i = m + 1 : $(-1)^i$ \* $x^{(2*i)}$ / (2i)! 〉
= { rango unitario }
cos’.m.x + $(-1)^{(m+1)}$ \* $x^{(2*(m+1))}$ / (2(m+1))!
= { ni exponenciación ni factorial son parte del lenguaje de programación. modularizamos
exp.w.n = w^n , fac.n = n ! }
cos’.m.x + exp.(-1).(m+1) \* exp.x.(2\*(m+1)) / fac.(2*(m+1))

### Resultado Final
$$
\begin{align*}
& cos’.0.x ≐ 1 \\
& cos’.(m+1).x ≐ cos’.m.x + exp.(-1).(m+1) * exp.x.(2*(m+1)) / fac.(2*(m+1)) \\
& \\
& exp.x.0 ≐ 1 \\
& exp.x.(n+1) ≐ x * exp.x.n \\
& \\
& fac.0 ≐ 1 \\
& fac.(n+1) ≐ (n+1) * fac.n 
\end{align*}
$$