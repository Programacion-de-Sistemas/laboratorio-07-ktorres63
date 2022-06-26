int bis(int x, int m);
int bic(int x, int m);
/* Calcular x|y usando solo llamadas a las funciones bis y bic */
int bool_or(int x, int y) {
int resultado = __________ ;
return resultado;
}
/* Calcula x^y usando solo llamadas a las funciones bis y bic */
int bool_xor(int x, int y) {
int resultado = __________;
return resultado;
}
int mult_ok(int x, int y) {
int p = x*y;
/* x es 0, o dividir p por x = y */
return !x || p/x == y;
}
