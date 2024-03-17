-- ╔════════════════════╗
-- |    Ejercicio 1     |
-- ╚════════════════════╝
{-
a) Opción 1: Es una función polimórfica Paramétrica
b) Opción 2: La declaración de tipos está mal, porque debería incluir una clase de tipos.
c) Opción 4: La función incrementar incrementa el valor dentro de un Just en 1 y devuelve Nothing si se le pasa Nothing.
d) Opción 2: El tipo Quizas tiene dos constructores, uno sin parámetros y el otro constructor con un parámetro.
-}
-- ╔════════════════════╗
-- |    Ejercicio 2     |
-- ╚════════════════════╝
data TipoLadrillo = Ceramico| Hormigon| Tradicional 
data UsoDeLadrillo = Pared| Techo
type Precio = Int 
type Largo = Float
data MaterialViga = CementoHierro| Madera
data MarcaCemento = Minetti| LomaNegra 
data MaterialesConstruccion = Ladrillo TipoLadrillo UsoDeLadrillo Precio | Viguetas Largo MaterialViga Precio | Cemento MarcaCemento Precio

mismasMaterialViga:: MaterialViga-> MaterialViga -> Bool
mismasMaterialViga CementoHierro CementoHierro = True
mismasMaterialViga Madera Madera = True
mismasMaterialViga _ _ = False
 
cuantasViguetas :: [MaterialesConstruccion] -> MaterialViga -> Int
cuantasViguetas [] p = 0
cuantasViguetas ((Viguetas l m p):xs) m1 
    | mismasMaterialViga m m1 = 1 + cuantasViguetas xs m1 
    | otherwise = cuantasViguetas xs m1
cuantasViguetas (_:ds) m1 = cuantasViguetas ds m1

mismoTipoLadrillo::TipoLadrillo->TipoLadrillo->Bool
mismoTipoLadrillo Ceramico Ceramico = True
mismoTipoLadrillo Hormigon Hormigon = True
mismoTipoLadrillo Tradicional Tradicional = True
mismoTipoLadrillo _ _ = False
 
mismoUsoLadrillo:: UsoDeLadrillo-> UsoDeLadrillo -> Bool
mismoUsoLadrillo Pared Pared = True
mismoUsoLadrillo Techo Techo = True
mismoUsoLadrillo _ _ = False
 
mismaMarcaCemento:: MarcaCemento-> MarcaCemento -> Bool
mismaMarcaCemento Minetti Minetti = True
mismaMarcaCemento LomaNegra LomaNegra = True
mismaMarcaCemento _ _ = False
 
instance Eq MaterialesConstruccion where
    (Ladrillo t1 u1 p1) == (Ladrillo t2 u2 p2) = (mismoTipoLadrillo t1 t2) && (mismoUsoLadrillo u1 u2)
    (Viguetas l1 m1 p1) == (Viguetas l2 m2 p2) = (mismasMaterialViga m1 m2) && (p1==p2)
    (Cemento ma1 p1) == (Cemento ma2 p2) = mismaMarcaCemento ma1 ma2
    _ == _ = False
-- ╔════════════════════╗
-- |    Ejercicio 3     |
-- ╚════════════════════╝
type Nombre = String
type Nota = Int
data Color = Blanco| Amarillo| Verde deriving (Show, Eq) 
data NotasDelDOJO = EvolucionDelAlumno Nombre Color Nota Nota Nota NotasDelDOJO | NoHayMasAlumnos

pasaDeCinturon::NotasDelDOJO->String-> Bool
pasaDeCinturon NoHayMasAlumnos n = False 
pasaDeCinturon (EvolucionDelAlumno n c k1 k2 ka xs) n1
    | n == n1 = ( ( c==Verde && (k1>=7 && k2>=7 && ka>=8 ) ) || ( (k1>=7 || k2>=7) && ka>=6 ) ) 
    | otherwise = pasaDeCinturon xs n1

devolverColorK2::NotasDelDOJO->String-> Maybe Color
devolverColorK2 NoHayMasAlumnos n = Nothing 
devolverColorK2 (EvolucionDelAlumno n c k1 k2 ka xs) n1
    | n == n1 = Just c
    |otherwise = devolverColorK2 xs n1