---
Materia: Algoritmos1
tags:
  - haskell
  - pattern_matching
---
El "pattern matching" (coincidencia de patrones) es una característica fundamental en Haskell y muchos otros lenguajes funcionales. Se utiliza para **descomponer estructuras de datos** de manera concisa y expresiva, permitiendo que el código sea más claro y conciso.
## Pattern matching en listas
```haskell
-- Definición de una función utilizando "pattern matching" en listas
sumaLista :: [Int] -> Int
sumaLista []     = 0        -- Patrón para una lista vacía
sumaLista (x:xs) = x + sumaLista xs  -- Patrón para una lista no vacía, donde x es el primer elemento y xs es el resto de la lista

-- Ejemplos de uso
ejemplo1 = sumaLista [1, 2, 3]  -- Devuelve 6
ejemplo2 = sumaLista []         -- Devuelve 0
```
En este ejemplo, la función `sumaLista` utiliza "pattern matching" para tratar con listas. El primer patrón maneja el caso de una lista vacía, devolviendo 0. El segundo patrón maneja el caso de una lista no vacía, descomponiendo la lista en el primer elemento (`x`) y el resto de la lista (`xs`), y realiza la recursión para sumar el primer elemento con la suma del resto de la lista.
## Pattern matching en expresiones
```haskell
-- Definición de una expresión con "pattern matching" en tuplas
obtenerPrimerElemento :: (Int, String) -> Int
obtenerPrimerElemento (x, _) = x  -- Patrón que obtiene el primer elemento de una tupla, ignorando el segundo elemento

-- Ejemplo de uso
ejemplo3 = obtenerPrimerElemento (42, "Hola")  -- Devuelve 42

```
En este ejemplo, la función `obtenerPrimerElemento` utiliza "pattern matching" para extraer el primer elemento de una tupla, ignorando el segundo elemento. El patrón `(x, _)` se utiliza para indicar que solo nos interesa el primer elemento de la tupla.
## Pattern matching en tipos de datos algebráicos
```haskell
-- Definición de un tipo de dato algebraico llamado 'Expr' para expresiones aritméticas
data Expr = Const Int
          | Var String
          | Add Expr Expr
          | Mul Expr Expr

-- Función para evaluar expresiones aritméticas utilizando "pattern matching"
evaluar :: Expr -> Int
evaluar (Const n)   = n               -- Si es una constante, devolver el valor
evaluar (Var _)      = error "No se puede evaluar una variable"  -- Las variables no son evaluadas en este ejemplo
evaluar (Add e1 e2)  = evaluar e1 + evaluar e2  -- Sumar las evaluaciones de las subexpresiones
evaluar (Mul e1 e2)  = evaluar e1 * evaluar e2  -- Multiplicar las evaluaciones de las subexpresiones

-- Ejemplo de uso
expresion = Mul (Add (Const 2) (Const 3)) (Const 4)
resultado = evaluar expresion  -- Devuelve 20

```
En este ejemplo, el tipo de dato algebraico `Expr` representa expresiones aritméticas con constantes, variables, suma y multiplicación. La función `evaluar` utiliza "pattern matching" para descomponer las diferentes formas posibles de expresiones y calcular el resultado.
## Pattern matching en listas y guardas
```haskell
-- Función para calcular la suma de elementos pares y la multiplicación de elementos impares en una lista
operacionesLista :: [Int] -> (Int, Int)
operacionesLista [] = (0, 1)  -- Caso base: lista vacía, devuelve (0, 1)
operacionesLista (x:xs)
  | even x    = (x + sumaPares, productoImpares)  -- Si x es par, suma a la suma de pares
  | otherwise = (sumaPares, x * productoImpares)  -- Si x es impar, multiplica al producto de impares
  where
    (sumaPares, productoImpares) = operacionesLista xs  -- Llamada recursiva para obtener resultados parciales

-- Ejemplo de uso
listaNumeros = [1, 2, 3, 4, 5]
resultados = operacionesLista listaNumeros  -- Devuelve (6, 15)
```
En este ejemplo, la función `operacionesLista` utiliza "pattern matching" en la lista y también hace uso de guards (`|`) para realizar operaciones específicas en función de la paridad de los elementos de la lista. La función devuelve una tupla con la suma de los elementos pares y el producto de los elementos impares.