// EJERCICIO 3. Escribir un programa en C++ que permita lo siguiente: Pasar por
// argumento la dirección de una variable y utilizarla dentro de la función para
// obtener el cuadrado de este valor, mostrando la dirección de esta variable y
// el valor resultado de esta función<

#include <bits/stdc++.h>

using namespace std;

void cuadrado2(int *n) {
  // dirección de n en cuadrado2() es la misma de n2 en la función principal()
  cout << "dirección de n2 en cuadrado2(): " << n << "\n";
  // Rereferencias explicitamente para obtener el valor al cual se apunta
  *n *= *n;
}
void alumnos() {

  // llamda por referencia con punteros como argumentos
  int n2 = 8;
  cout << "dirección de n2 en la función principal(): " << &n2 << "\n";
  cuadrado2(&n2);
  cout << "cuadrado de n2: " << n2 << "\n";
  cout << "Cambio visto en n2: " << n2 << "\n";
}
int main() { alumnos(); }
