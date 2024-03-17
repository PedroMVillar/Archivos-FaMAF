---
Materia: Algoritmos1
tags:
  - haskell
---
En Haskell, la palabra clave `instance` se utiliza para definir instancias de clases de tipo para tipos de datos específicos. Este concepto está relacionado con el sistema de clases de tipos en Haskell, que proporciona una forma de definir comportamientos específicos para tipos de datos particulares. 
## Sintaxis general
```haskell
instance ClaseDeTipo Tipo where
  -- Definiciones de funciones de la clase de tipo para el tipo específico
```
- `instance`: Palabra clave que indica que estás definiendo una instancia de una clase de tipo.
- `ClaseDeTipo`: Es el nombre de la clase de tipo para la cual estás definiendo una instancia.
- `Tipo`: Es el tipo de datos para el cual estás definiendo la instancia.
- `-- Definiciones...`: Aquí se proporcionan las definiciones específicas de funciones que pertenecen a la clase de tipo para el tipo dado.

### Ejemplo Práctico:
Este ejemplo define un tipo de datos algebraicos llamado `Figura`, que puede representar círculos y rectángulos en un plano bidimensional. Luego, se define una instancia de la clase de tipo `Eq` para la comparación de igualdad entre figuras basada en el área de las figuras.
#### Definición del Tipo de Datos `Figura`:
```haskell
data Figura = Circulo Punto Radio | Rectangulo Punto Punto
```
En este ejemplo, `Figura` es un tipo de datos algebraico con dos constructores de datos: `Circulo` y `Rectangulo`. Cada constructor lleva parámetros específicos: para `Circulo`, un punto y un radio, y para `Rectangulo`, dos puntos que representan las esquinas opuestas del rectángulo.
#### Definición de Clases y Funciones Auxiliares:
```haskell
-- Definiciones faltantes
type Punto = (Float, Float)
type Radio = Float

area :: Figura -> Float
area (Circulo (x, y) r) = 3.1416 * r * r
area (Rectangulo (x, y) (w, z)) = base * altura
  where
    base = w - x
    altura = z - y
```
En este caso, se han agregado las definiciones faltantes para `Punto` y `Radio`. `Punto` se define como un par de coordenadas `(Float, Float)`, y `Radio` se define como un número de punto flotante (`Float`). Estas definiciones son importantes porque se utilizan en la definición del tipo `Figura` y en la función `area`.
#### Ejemplo de Uso
```haskell
-- Crear instancias de Figura (un círculo y un rectángulo)
miCirculo :: Figura
miCirculo = Circulo (0, 0) 5.0

miRectangulo :: Figura
miRectangulo = Rectangulo (1, 1) (4, 3)

-- Comparar figuras basadas en la igualdad de áreas
comparacion :: Bool
comparacion = miCirculo == miRectangulo
-- Devuelve: True si las áreas son iguales, False si no lo son
```
En este ejemplo, `miCirculo` es una instancia de `Figura` que representa un círculo, y `miRectangulo` es una instancia que representa un rectángulo. La comparación `miCirculo == miRectangulo` devolverá `True` si las áreas de las figuras son iguales y `False` si no lo son, y estas áreas se calculan utilizando la función `area` que hemos definido anteriormente.