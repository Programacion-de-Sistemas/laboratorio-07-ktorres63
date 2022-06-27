//x (op) m = Z
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

  return 0;
}
/* Calcular x|y usando solo llamadas a las funciones bis y bic */
int bool_or(int x, int y) {
  int resultado = __________;
  return resultado;
}
/* Calcula x^y usando solo llamadas a las funciones bis y bic */
int bool_xor(int x, int y) {
  int resultado = __________;
  return resultado;
}
int mult_ok(int x, int y) {
  int p = x * y;
  /* x es 0, o dividir p por x = y */
  return !x || p / x == y;
}
