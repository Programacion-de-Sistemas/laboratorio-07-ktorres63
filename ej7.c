
#include <stdio.h>                              \
// Solo usar |, ^
//Con bis, la modificación consiste en establecer “Z” a 1 en
//cada posición donde “m” es 1.
//x bis m = Z
// x bis 1  =1
int bis(int x, int m){
 return x | m;
}
//Con bic, la modificación consiste en establecer
//“Z” a 0 en cada posición donde “m” es 1.
//x bic m =Z
//x bic 1 = 0
int bic(int x, int m){

  return (x|m)^m;
}
/* Calcular x|y usando solo llamadas a las funciones bis y bic */
int bool_or(int x, int y) {
  int resultado = bis(x,y);
  return resultado;
}
/* Calcula x^y usando solo llamadas a las funciones bis y bic */
int bool_xor(int x, int y) {
  int resultado = bis(bic(x,y),bic(y,x));
  return resultado;
}

int mult_ok(int x, int y) {
  int p = x * y;
  /* x es 0, o dividir p por x = y */
  return !x || p / x == y;
}
int main (){
  int x = 12;
  int y = 4;

  printf("%d\n",bool_or(x,y)); //12
  printf("%d\n",bool_xor(x,y)); //8
  //12)2   = 1100 or
  //4)2    = 0100
  //         -----
  //         1100 ->1100)10 = 12
  //
  //         1100 xor
  //         0100
  //         ----
  //         1000 -> 1000)10 = 8
}
