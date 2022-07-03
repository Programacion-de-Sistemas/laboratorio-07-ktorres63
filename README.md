# laboratorio-07.5-ktorres63

## LAB 7.5

para que funcione primero debemos instalar:

sudo apt-get install gcc-multilib

----------------------------------

luego podemos probar con :

1. ./dlc -e bits.c
2. make btest
3. ./btest bits.c

el tercero te dira cuantos hiciste 

ej: 1/36


* aparecera un warning arg_test[0] pero debes continuar

Explicacion 

OR 

| a | b | a or b |
|---|---|:------:|
| 0 | 0 | 0      |
| 0 | 1 | 1      |
| 1 | 0 | 1      |
| 1 | 1 | 1      |

XOR

| a | b | a xor b |
|---|---|:-------:|
| 0 | 0 | 0       |
| 0 | 1 | 1       |
| 1 | 0 | 1       |
| 1 | 1 | 0       |

BIS     

| a | b | a bis b |
|---|---|:-------:|
| 0 | 0 | 0       |
| 0 | 1 | 1       |
| 1 | 0 | 1       |
| 1 | 1 | 1       |


BIC  

| a | b | a xor b |
|---|---|:-------:|
| 0 | 0 | 0       |
| 0 | 1 | 0       |
| 1 | 0 | 1       |
| 1 | 1 | 0       |

