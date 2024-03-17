-- ╔════════════════════╗
-- |    Ejercicio 1     |
-- ╚════════════════════╝
data EmpresaTelefono = Claro | Personal | Movistar | Tuenti
type Frase = String
fraseEmpresa :: EmpresaTelefono -> Frase
fraseEmpresa Claro = "Claro, La red mas poderosa"
fraseEmpresa Personal = "Personal, es como vos"
fraseEmpresa Movistar = "Movistar, Compartida la vida es mas"
fraseEmpresa Tuenti = "Tuenti es la mas económica"
-- ╔════════════════════╗
-- |    Ejercicio 2     |
-- ╚════════════════════╝
type NombrePersona = String
data MisEmpresas = AgregaEmpresa EmpresaTelefono NombrePersona MisEmpresas
                 | Ninguna
mismaEmpresa :: MisEmpresas -> MisEmpresas -> Bool
mismaEmpresa (AgregaEmpresa Movistar _ _ ) (AgregaEmpresa Movistar _ _ ) = True
mismaEmpresa (AgregaEmpresa Claro _ _ ) (AgregaEmpresa Claro _ _ ) = True
mismaEmpresa (AgregaEmpresa Personal _ _ ) (AgregaEmpresa Personal _ _ ) = True
mismaEmpresa (AgregaEmpresa Tuenti _ _ ) (AgregaEmpresa Tuenti _ _ ) = True
mismaEmpresa (AgregaEmpresa _ _ _ ) (AgregaEmpresa _ _ _) = False
instance Eq MisEmpresas where 
    e1 == e2 = mismaEmpresa e1 e2 == True
tengoEmpresa :: MisEmpresas -> EmpresaTelefono -> NombrePersona -> Bool
tengoEmpresa Ninguna _ _ = False
tengoEmpresa (AgregaEmpresa a b c) a' b' = case a of
                                        a' -> case b of
                                            b' -> True
-- ╔════════════════════╗
-- |    Ejercicio 3     |
-- ╚════════════════════╝
data ListaAsoc a b = Vacia | Nodo a b (ListaAsoc a b)
    deriving (Show)
type NroTel = Int
agregarLA :: ListaAsoc EmpresaTelefono NroTel -> EmpresaTelefono -> NroTel -> ListaAsoc EmpresaTelefono NroTel
agregarLA Vacia _ _  = Vacia     
-- ╔════════════════════╗
-- |    Ejercicio 4     |
-- ╚════════════════════╝
data Arbol a = Hoja | Rama (Arbol a) a (Arbol a) deriving (Show)
buscarEnArbol :: Eq a => a -> Arbol a -> Bool
buscarEnArbol x Hoja = False
buscarEnArbol x (Rama ri n rd)
  | x == n = True
  | otherwise = buscarEnArbol x ri || buscarEnArbol x rd
{-
ghci> buscarEnArbol 2 (Rama (Rama Hoja 4 (Rama (Rama Hoja 1 Hoja) 3 Hoja)) 7 Hoja)
False
ghci> buscarEnArbol 2 (Rama (Rama Hoja 4 (Rama (Rama Hoja 1 Hoja) 3 Hoja)) 2 Hoja)
True
-}