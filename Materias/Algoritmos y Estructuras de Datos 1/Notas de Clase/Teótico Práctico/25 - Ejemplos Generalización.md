---
Materia: Algoritmos1
tags:
  - ejercicios
  - derivación
  - generalizacion
---
## Ejemplo 1
Derivar la siguiente especificación
$$
⟨ ∀ i : 0 ≤ i ≤ \#xs : sum.(xs↑i) ≥ 0 ⟩
$$
Intentaremos hacerlo por inducción en xs.

### Caso base
Tomando xs = [ ] :

psum.[  ]
= { especificación }
  ⟨ ∀ i : 0 ≤ i ≤ #[  ] : sum.([  ]↑i) ≥ 0 ⟩
= { def. # }
  ⟨ ∀ i : 0 ≤ i ≤ 0 : sum.([  ]↑i) ≥ 0 ⟩
= { lógica }
  ⟨ ∀ i : i = 0 : sum.([  ]↑i) ≥ 0 ⟩
= { rango unitario }
   sum.([  ]↑0) ≥ 0
= { def ↑ y de sum  }
   0 ≥ 0
= { lógica }
   True

### Paso inductivo
**Hipótesis Inductiva: psum.xs = ⟨ ∀ i : 0 ≤ i ≤ \#xs : sum.(xs↑i) ≥ 0 ⟩**

psum.(x►xs)
= { especificación } 
   ⟨ ∀ i : 0 ≤ i ≤ #(x►xs) : sum.((x►xs)↑i) ≥ 0 ⟩
= { def de # }
   ⟨ ∀ i : 0 ≤ i ≤ \#xs + 1 : sum.((x►xs)↑i) ≥ 0 ⟩
= { lógica }
   ⟨ ∀ i :  i = 0  ∨  1 ≤ i ≤ \#xs + 1  : sum.((x►xs)↑i) ≥ 0 ⟩
= { partición de rango }
  ⟨ ∀ i : i = 0 : sum.((x►xs)↑i) ≥ 0 ⟩ ∧  ⟨ ∀ i : 1 ≤ i ≤ \#xs + 1 : sum.((x►xs)↑i) ≥ 0 ⟩
= { Cambio de variable i → i + 1. }
   ⟨ ∀ … ⟩ ∧  ⟨ ∀ i : 1 ≤ i + 1 ≤ \#xs + 1 : sum.((x►xs)↑(i+1)) ≥ 0 ⟩
= { arit: resto 1 }
   ⟨ ∀ … ⟩ ∧  ⟨ ∀ i : 0 ≤ i ≤ \#xs : sum.((x►xs)↑(i+1)) ≥ 0 ⟩
= { def de ↑ }
   ⟨ ∀ … ⟩ ∧  ⟨ ∀ i : 0 ≤ i ≤ \#xs : sum.(x   ►   (xs↑i)  ) ≥ 0 ⟩
= { def de sum }
   ⟨ ∀ … ⟩ ∧  ⟨ ∀ i : 0 ≤ i ≤ \#xs : x + sum.((xs↑i)) ≥ 0 ⟩
   = { No hay forma de llegar a la H.I., no hay nada que podamos hacer para deshacernos de ese “x + “ que molesta. }
   **Formamos una nueva función**
   gpsum.n.xs = ⟨ ∀ i : 0 ≤ i ≤ \#xs :  n  +  sum.(xs↑i) ≥ 0 ⟩
### Nuevo caso base
  gpsum.n.[ ]
= { especificación }
  ⟨ ∀ i : 0 ≤ i ≤ #[  ] : n + sum.([  ]↑i) ≥ 0 ⟩
= { def. # }
  ⟨ ∀ i : 0 ≤ i ≤ 0 : n + sum.([  ]↑i) ≥ 0 ⟩
= { lógica }
  ⟨ ∀ i : i = 0 : n + sum.([  ]↑i) ≥ 0 ⟩
= { rango unitario }
   n + sum.([  ]↑0) ≥ 0
= { def ↑ y de sum  }
   n + 0 ≥ 0
= { arit }
   n ≥ 0

### Nuevo paso inductivo
  gpsum.n.(x►xs)
= { especificación } 
   ⟨ ∀ i : 0 ≤ i ≤ #(x►xs) : n + sum.((x►xs)↑i) ≥ 0 ⟩
= { def de # }
   ⟨ ∀ i : 0 ≤ i ≤ \#xs + 1 : n + sum.((x►xs)↑i) ≥ 0 ⟩
= { lógica }
   ⟨ ∀ i :  i = 0  ∨  1 ≤ i ≤ \#xs + 1  : n + sum.((x►xs)↑i) ≥ 0 ⟩
= { partición de rango }
	⟨ ∀ i : i = 0 : n + sum.((x►xs)↑i) ≥ 0 ⟩ ∧ ⟨ ∀ i : 1 ≤ i ≤ #xs + 1 : n + sum.((x►xs)↑i) ≥ 0 ⟩
= { cambio de variable segundo predicado }
	⟨ ∀ … ⟩ ∧  ⟨ ∀ i : 1 ≤ i + 1 ≤ \#xs + 1 : n + sum.((x►xs)↑(i+1)) ≥ 0 ⟩
= { arit: resto 1 }
   ⟨ ∀ … ⟩ ∧  ⟨ ∀ i : 0 ≤ i ≤ \#xs : n + sum.((x►xs)↑(i+1)) ≥ 0 ⟩
= { def de ↑ }
   ⟨ ∀ … ⟩ ∧  ⟨ ∀ i : 0 ≤ i ≤ \#xs : n + sum.(x   ►   (xs↑i)  ) ≥ 0 ⟩
= { def de sum }
   ⟨ ∀ … ⟩ ∧  ⟨ ∀ i : 0 ≤ i ≤ \#xs : n + (  x + sum.((xs↑i)) ) ≥ 0 ⟩
= { asociatividad }
   ⟨ ∀ … ⟩ ∧  ⟨ ∀ i : 0 ≤ i ≤ \#xs : (n+x)  +   sum.((xs↑i)) ≥ 0 ⟩
= { Ahora sí H.I. y volvemos a mirar la primera parte. }
   ⟨ ∀ i : i = 0 : n + sum.((x►xs)↑i) ≥ 0 ⟩  ∧  gpsum.(n+x).xs
= { Rango unitario y más pasos como el caso base. }
   n ≥ 0  ∧  gpsum.(n+x).xs


- psum.xs es caso particular de gpsum.n.xs cuando n = 0. Más formalmente: psum.xs = gpsum.0.xs.
- gpsum generaliza a psum.

### Programa final
$$
\begin{align*}
& psum.xs ≐ gpsum.0.xs \\
& \\
& gpsum.n.[ ]         ≐ n ≥ 0 \\
&  gpsum.n.(x►xs) ≐ n ≥ 0  ∧  gpsum.(n+x).xs

\end{align*}
$$
## Ejemplo 2
Derivar la especificación
$$
〈∃ i : 0 ≤ i < \#xs : xs ! i = sum.(xs ↑ i) 〉
$$
### Caso base
Tomando xs = [ ] :

sum_ant.[ ]
= { def #, rango vacío }
False

### Paso inductivo
Tomando xs = y►ys, 
H.I. : sum_ant.ys = 〈∃ i : 0 ≤ i < \#ys : ys ! i = sum.(ys ↑ i) 〉

sum_ant.(y►ys)
= { esp. }
〈∃ i : 0 ≤ i < #(y►ys) : (y►ys) ! i = sum.((y►ys) ↑ i) 〉
= { def. # y lógica }
〈∃ i : i = 0 ∨ 1 ≤ i < \#ys + 1 : (y►ys) ! i = sum.((y►ys) ↑ i) 〉
= { part. rango }
〈∃ i : i = 0 : (y►ys) ! i = sum.((y►ys) ↑ i) 〉 ∨
〈∃ i : 1 ≤ i < \#ys + 1 : (y►ys) ! i = sum.((y►ys) ↑ i) 〉
= { buscamos la H.I. en la 2da cuantificación: cambio de variable i → i + 1}
〈∃ i : i = 0 : (y►ys) ! i = sum.((y►ys) ↑ i) 〉 ∨
〈∃ i : 1 ≤ i + 1 < \#ys + 1 : (y►ys) ! (i+1) = sum.((y►ys) ↑ (i+1)) 〉
= { def ! y def ↑ }
〈∃ i : i = 0 : (y►ys) ! i = sum.((y►ys) ↑ i) 〉 ∨
〈∃ i : 1 ≤ i + 1 < \#ys + 1 : ys ! i = sum.(y ► (ys ↑ i)) 〉
= { resto 1 en la desigualdad del rango, def. sum }
〈∃ i : i = 0 : (y►ys) ! i = sum.((y►ys) ↑ i) 〉 ∨ 
〈∃ i : 0 ≤ i < \#ys : ys ! i = y + sum.(ys ↑ i) 〉
Debo generalizar:
sum_ant_gen.xs.k =〈∃ i : 0 ≤ i < \#xs : xs ! i = k + sum.(xs ↑ i) 〉

### Nuevo caso base
Tomando xs = [ ] :

sum_ant_gen.[ ].k
= { esp. }
〈∃ i : 0 ≤ i < #[ ] : [ ] ! i = k + sum.([ ] ↑ i) 〉
= { def # y rango vacío }
False

### Paso inductivo 
Tomando xs = y►ys,
H.I.: sum_ant_gen.ys.j =〈∃ i : 0 ≤ i < \#ys : ys ! i = j + sum.(ys ↑ i) 〉

sum_ant_gen.(y►ys).k
= { esp. }
〈∃ i : 0 ≤ i < #(y►ys) : (y►ys) ! i = k + sum.((y►ys) ↑ i) 〉
= { mismos pasos que la derivación de sum_ant pero cuidando que esté el “k +” en todos lados}
〈∃ i : i = 0 : (y►ys) ! i = k + sum.((y►ys) ↑ i) 〉 ∨
〈∃ i : 0 ≤ i < \#ys : ys ! i = k + (y + sum.(ys ↑ i)) 〉
= { asociatividad de la + }
〈∃ i : i = 0 : (y►ys) ! i = k + sum.((y►ys) ↑ i) 〉 ∨
〈∃ i : 0 ≤ i < \#ys : ys ! i = (k + y) + sum.(ys ↑ i) 〉
= { H.I. }
〈∃ i : i = 0 : (y►ys) ! i = k + sum.((y►ys) ↑ i) 〉 ∨ sum_ant_gen.ys.(k + y)
= { rango unitario }
(y►ys) ! 0 = k + sum.((y►ys) ↑ 0) ∨ sum_ant_gen.ys.(k + y)
= { def ! y def ↑ }
y = k + sum.[ ] ∨ sum_ant_gen.ys.(k + y)
= { def sum }
y = k ∨ sum_ant_gen.ys.(k + y)


### Resultado final
$$
\begin{align*}
& sum\_ant.xs ≐ sum_ant_gen.xs.0 \\
& \\
& sum\_ant_gen.[ ].k ≐ False \\
& sum\_ant_gen.(x►xs).k ≐ x = k ∨ sum_ant_gen.xs.(k + x)
\end{align*}
$$