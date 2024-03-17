---
Materia: Algoritmos1
tags:
  - haskell
---
En Haskell, `Maybe` es un tipo de dato que se utiliza para representar la posibilidad de un valor opcional o la ausencia de un valor. `Maybe` tiene dos constructores de datos principales: `Just` y `Nothing`.
## `Just` Constructor:
- El constructor `Just` se utiliza para envolver un valor existente. Puedes pensar en `Just` como un contenedor que indica que hay un valor presente.
- La sintaxis general es `Just valor`, donde `valor` es el valor que se está envolviendo.
- Ejemplo:
	```haskell
	-- Un Maybe que contiene el número 42
	maybeConValor :: Maybe Int
	maybeConValor = Just 42
	```

## `Nothing` Constructor:
- El constructor `Nothing` se utiliza para representar la ausencia de un valor. Puedes pensar en `Nothing` como un indicador de que no hay información disponible.
- La sintaxis general es simplemente `Nothing`.
- Ejemplo:
	```haskell
	-- Un Maybe que representa la ausencia de un valor
	maybeSinValor :: Maybe Int
	maybeSinValor = Nothing
	```

El tipo `Maybe` es útil para tratar con situaciones donde un valor puede estar presente o no, y proporciona una forma segura y concisa de expresar estas posibilidades en el código. Al trabajar con `Maybe`, es común utilizar patrones de coincidencia (`case`, `do`, o patrones de función) para manejar los dos casos posibles (`Just` y `Nothing`) de manera explícita.

### Ejemplo de uso con patrones de coincidencia:
```haskell
-- Función que divide dos números, devolviendo un Maybe
divide :: Double -> Double -> Maybe Double
divide _ 0 = Nothing  -- División por cero, retorna Nothing
divide x y = Just (x / y)  -- Retorna Just con el resultado de la división

-- Ejemplos de uso
ejemplo1 = divide 10 2  -- Retorna Just 5.0
ejemplo2 = divide 10 0  -- Retorna Nothing
```
En este ejemplo, la función `divide` toma dos números y devuelve un `Maybe Double`. Si el segundo número es cero, retorna `Nothing` para evitar la división por cero. En otros casos, devuelve el resultado de la división envuelto en `Just`.

## Ejemplo con tipo de dato algebraico
```haskell
-- Definición del tipo de dato Clase
data Clase = Teorico | Taller deriving Show

-- Definición del tipo de dato Dia
data Dia = Lunes | Martes | Jueves | OtroDia deriving (Eq, Show)

-- Función hayClase que devuelve un Maybe Clase dependiendo del día
hayClase :: Dia -> Maybe Clase
hayClase Lunes = Just Taller
hayClase Martes = Just Teorico
hayClase Jueves = Just Teorico
hayClase _ = Nothing  -- Para cualquier otro día, no hay clase

-- Función actividad que devuelve una cadena de texto dependiendo de la existencia de clase
actividad :: Dia -> String
actividad d = case hayClase d of
  Nothing -> "Tareas"         -- No hay clase, hacer tareas
  Just Teorico -> "Teorico"    -- Clase teórica
  Just Taller -> "Taller"      -- Clase de taller
```

### Definición de tipos:
- Se define el tipo de dato `Clase` con dos posibles valores: `Teorico` y `Taller`.
- Se define el tipo de dato `Dia` con los valores posibles `Lunes`, `Martes`, `Jueves` y `OtroDia`.

### Función `hayClase`:
- Esta función toma un `Dia` como argumento y devuelve un `Maybe Clase`.
- Si el día es `Lunes`, hay una clase de `Taller`.
- Si el día es `Martes` o `Jueves`, hay una clase de `Teorico`.
- Para cualquier otro día, devuelve `Nothing`.

## Función `actividad`:
- Esta función toma un `Dia` como argumento y utiliza `case` para realizar coincidencia de patrones en el resultado de `hayClase`.
- Si `hayClase` devuelve `Nothing`, se imprime "Tareas".
- Si devuelve `Just Teorico`, se imprime "Teorico".
- Si devuelve `Just Taller`, se imprime "Taller".
### Ejemplos de uso
```ghci
-- Ejemplos de uso en GHCi
*Main> actividad Lunes
"Taller"
*Main> actividad Martes
"Teorico"
*Main> actividad Jueves
"Teorico"
*Main> actividad OtroDia
"Tareas"
```
