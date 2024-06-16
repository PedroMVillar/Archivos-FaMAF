## Instrucciones de tipo `R`
**Las instrucciones de tipo R en LEGv8 son instrucciones que operan en registros.**
### *Core Instruction Set*
- `ADD Rd, Rn, Rm` : Suma el contenido de los registros `Rn` y `Rn` y almacena el resultado en el registro `Rd`.
- `SUB Rd, Rn, Rm`: Resta el contenido del registro `Rm` del registro `Rn` y almacena el resultado en el registro `Rd`.
- `AND Rd, Rn, Rm`: Realiza una operación **AND** bit a bit en los registros `Rn` y `Rm` y almacena el resultado en el registro `Rd`.
- `ORR Rd, Rn, Rm`: Realiza una operación **OR** bit a bit en los registros `Rn` y `Rm` y almacena el resultado en el registro `Rd`.
- `EOR Rd, Rn, Rm`: Realiza una operación **XOR** bit a bit en los registros `Rn` y `Rm` y almacena el resultado en el registro `Rd`.
- `LSL Rd, Rn, Rm`: Desplaza los bits en el registro `Rn` a la izquierda por el valor en el registro `Rm` y almacena el resultado en el registro `Rd`.
- `LSR Rd, Rn, Rm`: Desplaza los bits en el registro `Rn` a la derecha por el valor en el registro `Rm` y almacena el resultado en el registro `Rd`.
### Arithmetic Core Instruction Set
- `FADD Rd, Rn, Rm`: Suma los valores flotantes en los registros `Rn` y `Rm` y almacena el resultado en el registro `Rd`.
- `FDIVS Rd, Rn, Rm`: Divide el valor flotante en el registro `Rn` por el valor flotante en el registro `Rm` y almacena el resultado en el registro `Rd`. La **S** indica que se utilizan números de precisión simple.
- `FDIVD Rd, Rn, Rm`: Similar a FDIVS pero utiliza números de doble precisión.
- `FMULS Rd, Rn, Rm`: Multiplica los valores flotantes en los registros `Rn` y `Rm` y almacena el resultado en el registro `Rd`. La **S** indica que se utilizan números de precisión simple.
- `FMULD Rd, Rn, Rm`: Similar a FMULS pero utiliza números de doble precisión.
- `FSUBS Rd, Rn, Rm`: Resta el valor flotante en el registro `Rm` del registro `Rn` y almacena el resultado en el registro `Rd`. La **S** indica que se utilizan números de precisión simple.
- `FSUBD Rd, Rn, Rm`: Similar a FSUBS pero utiliza números de doble precisión.
- `MUL Rd, Rn, Rm`: Multiplica los valores en los registros `Rn` y `Rm` y almacena el resultado en el registro `Rd`.
- `SDIV Rd, Rn, Rm`: Divide el valor en el registro `Rn` por el valor en el registro `Rm` y almacena el resultado en el registro `Rd`. Esta operación es una división con signo.
- `SMULH Rd, Rn, Rm`: Multiplica los valores en los registros `Rn` y `Rm`, toma la parte alta del resultado y la almacena en el registro `Rd`.
- `STURS Rt, [Rn, #imm]`: Almacena un valor de precisión simple en la memoria en la dirección calculada sumando el valor inmediato a `Rn`.
- `STURD Rt, [Rn, #imm]`: Similar a STURS, pero almacena un valor de doble precisión.
- `UDIV Rd, Rn, Rm`: Divide el valor en el registro `Rn` por el valor en el registro `Rm` y almacena el resultado en el registro `Rd`. Esta operación es una división sin signo.
- `UMULH Rd, Rn, Rm`: Multiplica los valores en los registros `Rn` y `Rm`, toma la parte alta del resultado y la almacena en el registro `Rd`. Esta operación es una multiplicación sin signo.
### Límites 
![[Pasted image 20240616132030.png]]
- `opcode`: ocupa 11 bits,
- `Rm`: el segundo registro operando ocupa 5 bits, es decir toma valores en $[0,2^5)$.
- `shampt`: el valor de desplazamiento ocupa 6 bits, es decir toma valores en $[0,2^6)$.
- `Rn`: el primer registro operando ocupa otros 5 bits, toma valores en $[0,2^5)$.
- `Rd`: el registro de destino ocupa también 5 bits, toma valores en $[0,2^5)$.
