--------------------------------------------------------
-------------------Ejercicio 1--------------------------
-- Definicion de tipos
data Item = Azucar | Cafe | Maiz | Trigo | Yerba
data Cargamento = SinCarga | Carga Item Toneladas
type Toneladas = Int
type Numeracion = Int
data Tren = Vagon Numeracion Cargamento Tren | Fin

-- Funciones auxiliares
son_iguales :: Item -> Item -> Bool
son_iguales Azucar Azucar = True
son_iguales Cafe Cafe = True
son_iguales Maiz Maiz = True
son_iguales Trigo Trigo = True
son_iguales Yerba Yerba = True
son_iguales _ _ = False

tiene_item :: Cargamento -> Item -> Bool
tiene_item SinCarga _ = False
tiene_item (Carga i _) j = son_iguales i j

-- Funcion principal
vagones_item :: Tren -> Item -> [Numeracion]
vagones_item Fin _ = []
vagones_item (Vagon n c t) i
    | tiene_item c i = n : vagones_item t i
    | otherwise = vagones_item t i
--------------------------------------------------------

-------------------Ejercicio 2--------------------------
-- Definicion de tipos
data TipoDeLeche = Descremada | Entera | Condenzada | Polvo
data UsoDeLeche = Bebida | Preparaciones
type Precio = Int

data Corte = Bife | Molida | Pulpa
type Peso = Float

data TipoDeQueso = Barra | Cremoso | Duro

data Perecedero = Leche TipoDeLeche UsoDeLeche Precio
                | Carne Corte Peso Precio
                | Queso TipoDeQueso Peso Precio

-- Funciones auxiliares
son_iguales_queso :: TipoDeQueso -> TipoDeQueso -> Bool
son_iguales_queso Barra Barra = True
son_iguales_queso Cremoso Cremoso = True
son_iguales_queso Duro Duro = True
son_iguales_queso _ _ = False

son_iguales_uso_leche :: UsoDeLeche -> UsoDeLeche -> Bool
son_iguales_uso_leche Bebida Bebida = True
son_iguales_uso_leche Preparaciones Preparaciones = True
son_iguales_uso_leche _ _ = False

son_iguales_tipo_leche :: TipoDeLeche -> TipoDeLeche -> Bool
son_iguales_tipo_leche Descremada Descremada = True
son_iguales_tipo_leche Entera Entera = True
son_iguales_tipo_leche Condenzada Condenzada = True
son_iguales_tipo_leche Polvo Polvo = True
son_iguales_tipo_leche _ _ = False

son_iguales_corte :: Corte -> Corte -> Bool
son_iguales_corte Bife Bife = True
son_iguales_corte Molida Molida = True
son_iguales_corte Pulpa Pulpa = True
son_iguales_corte _ _ = False

-- Funciones principales
cuantosQuesos :: [Perecedero] -> TipoDeQueso -> Int
cuantosQuesos [] _ = 0
cuantosQuesos (Queso t _ _ : ps) q
    | son_iguales_queso t q = 1 + cuantosQuesos ps q
    | otherwise = cuantosQuesos ps q
cuantosQuesos (_ : ps) q = cuantosQuesos ps q

instance Eq Perecedero where
    (Leche t1 u1 _) == (Leche t2 u2 _) = son_iguales_tipo_leche t1 t2 && son_iguales_uso_leche u1 u2
    (Carne c1 _ _) == (Carne c2 _ _) = son_iguales_corte c1 c2
    (Queso t1 _ _) == (Queso t2 _ _) = son_iguales_queso t1 t2
--------------------------------------------------------

-------------------Ejercicio 3--------------------------
-- Definicion de tipos
data Division = Septima | Sexta | Quinta | Cuarta
type Nota = Int
data NotasDelClub = EvolucionDelJugador String Division Nota Nota Nota NotasDelClub | NoHayMasJugadores

-- Funciones auxiliares
son_iguales_division :: Division -> Division -> Bool
son_iguales_division Septima Septima = True
son_iguales_division Sexta Sexta = True
son_iguales_division Quinta Quinta = True
son_iguales_division Cuarta Cuarta = True
son_iguales_division _ _ = False

-- Funciones principales
pasaDeDivision :: NotasDelClub -> String -> Bool
pasaDeDivision NoHayMasJugadores _ = False
pasaDeDivision (EvolucionDelJugador n d n1 n2 n3 t) nombre
    | n == nombre = (son_iguales_division d Septima || son_iguales_division d Sexta) && (n1 > 7 || n2 > 7 || n3 > 7) && n3 > 6
    | n == nombre = son_iguales_division d Quinta && n1 >= 7 && n2 >= 7 && n3 >= 8
    | otherwise = pasaDeDivision t nombre

devolverDivision :: NotasDelClub -> String -> Maybe Division
devolverDivision NoHayMasJugadores _ = Nothing
devolverDivision (EvolucionDelJugador n d _ _ _ t) nombre
    | n == nombre = Just d
    | otherwise = devolverDivision t nombre
--------------------------------------------------------