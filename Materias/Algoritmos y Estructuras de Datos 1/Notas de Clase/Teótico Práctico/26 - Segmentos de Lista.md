---
Materia: Algoritmos1
tags:
  - segmentos
---
Un segmento de una lista es otra lista que está “**contenida**” en la lista original. Formalmente, una lista ys es segmento (también sublista) de una lista xs si y sólo si:
existen as, bs tales que   $$xs = as ++ ys ++ bs.$$
(o sea, puedo obtener xs agarrando ys y concatenándole una lista a la izquierda y otra a la 
derecha).

## Ejemplo
![[seg.JPG]]
- “papanata” = “pap”++”ana”++”ta”
- “papanata” = “pa”++”pa”++”na”++”ta” (también podría ser pensando que cada letra es una palabra)
- “papanata” = “papa”++”nata”
- “papanata” = “papanata” ++ “”
- “papanata” = “”++“papanata”++””

## Observaciones
- Si xs = as ++ bs y además xs = [ ], entonces as= [ ] y bs = [ ].
- Si xs = as ++ bs y además as = [ ] y bs=[ ], entonces xs= [ ].