---
Materia: Algoritmos1
tags:
  - programas
  - derivación
---
Para obtener un programa a partir de la especificación hay dos caminos:
1. **De la galera:** Consiste en escribir directamente la función que resuelve el problema y luego demostrar el correcto funcionamiento de la misma.
2. **Derivando:** Consiste en aplicar estrategias conocidas que me permiten obtener el  
	programa a partir de la especificación.

## De la galera
Supongamos que se tiene la siguiente especificación:
$$
⟨ ∀ xs : : todosPos.xs = ⟨ ∀i : 0 ⩽ i < \#xs : xs!i > 0 ⟩ ⟩
$$
Creo yo el programa de la siguiente forma:
En haskell:
```haskell
todosPos :: [Int] -> Bool
todosPos [] = True
todosPos (n:ns) = n > 0 && todosPos ns
```
En lenguaje formal:
$$
\begin{align}
& todosPos :: [Int] \ \rightarrow Bool \\
& todosPos \ [ \ ] \doteq True \\
& todosPos \ (n▷ns) = n > 0 \ \wedge todosPos.ns
\end{align}
$$
Para demostrar, utilizando inducción primero se prueba el caso base:
### Caso base
Reemplazo xs por [ ] y se debería llegar a una igualdad verdadera.
todosPos.[] = True
= { Especificación }
⟨ ∀i : 0 ⩽ i < #[ ] : [ ]!i > 0 ⟩ = True
= { definción de # } 
⟨ ∀i : 0 ⩽ i < 0 : [ ]!i > 0 ⟩ = True
={ aritmética }
⟨ ∀i : False : [ ]!i > 0 ⟩ = True
= { rango vacío }
True = True
= { Lógica }
True

### Paso inductivo
Reemplazo xs por (n▷ns) y se debería llegar a una igualdad verdadera.
todosPos.(n▷ns) = n > 0 ∧ todosPos.ns
= { Especificación }
⟨ ∀i : 0 ⩽ i < #(n ▷ ns) : (n ▷ ns)!i > 0 ⟩ = n > 0 ∧ todosPos.ns
= { def. de # }
⟨ ∀i : 0 ⩽ i < 1 + \#ns : (n ▷ ns)!i > 0 ⟩ = n > 0 ∧ todosPos.ns
= { partición de rango, rango unitario y cambio de variable }
(n ▷ ns)!0 > 0 ∧ ⟨ ∀i : 0 ⩽ i < \#ns : ns!i > 0 ⟩ = n > 0 ∧ todosPos.ns
= { simplificación e Hip. Inductiva }
n > 0 ∧ todosPos.ns = n > 0 ∧ todosPos.ns
= { Lógica }
True

## Derivando
Se tiene la siguiente especificación 
$$
iga.e.xs = 〈 ∀ i : 0 ≤ i < \#xs : xs ! i = e 〉
$$
Para derivar se usará inducción
### Caso base
iga.e.[ ]  
= { especificación de iga }  
〈 ∀ i : 0 ≤ i < <u>#[ ]</u> : [ ] ! i = e 〉  
= { def # }  
〈 ∀ i : <u>0 ≤ i < 0</u> : [ ] ! i = e 〉  
= { lógica }  
〈 ∀ i :<u> False </u>: [ ] ! i = e 〉  
= { rango vacío }  
True

### Paso inductivo
iga.e.(x►xs)  
= { especificación }  
〈 ∀ i : 0 ≤ i < <u>#(x►xs)</u> : (x►xs) ! i = e 〉  
= { def # }  
〈 ∀ i : <u>0 ≤ i < \#xs</u> + 1 : (x►xs) ! i = e 〉  
= { 0 ≤ i < \#xs + 1 es lo mismo que (i = 0) ∨ (1 ≤ i < \#xs+1) }
〈 ∀ i : <u>(i = 0) ∨ (1 ≤ i < \#xs+1)</u> : (x►xs) ! i = e 〉 
= { partición de rango }  
〈 ∀ i : i = 0 : (x►xs) ! i = e 〉 ∧  
<u>〈 ∀ i : 1 ≤ i < \#xs+1 : (x►xs) ! i = e 〉 </u>
= { cambio de variable i → i + 1}  
〈 ∀ i : i = 0 : (x►xs) ! i = e 〉 ∧  
〈 ∀ i : <u>1 ≤ i + 1 < \#xs+1</u> : (x►xs) ! (i + 1) = e 〉  
= { algebra (resto 1 en los tres miembros de la desigualdad) }  
〈 ∀ i : i = 0 : (x►xs) ! i = e 〉 ∧  
〈 ∀ i : 0 ≤ i < \#xs : <u>(x►xs) ! (i + 1)</u> = e 〉  
= { def. ! }  
〈 ∀ i : i = 0 : (x►xs) ! i = e 〉 ∧  
〈 ∀ i : 0 ≤ i < \#xs : xs ! i = e 〉  
= { hipótesis Inductiva }  
<u>〈 ∀ i : i = 0 : (x►xs) ! i = e 〉</u> ∧ iga.e.xs
= { rango unitario }  
<u>(x►xs) ! 0</u> = e ∧ iga.e.xs  
= { def ! }  
x = e ∧ iga.e.xs

### Resultado final
En haskell:
```haskell
iga :: Int -> [Int] -> Bool
iga e [] = True
iga e (x:xs) = (x == e) && iga e xs
```

En lenguaje formal:
$$
\begin{align*}
& iga : Int -> [Int] -> Bool   \\
& iga.e.[ ] ≐ True  \\
& iga.e.(x ►xs) ≐ (x = e) ∧ iga.e.xs \\
\end{align*}
$$

