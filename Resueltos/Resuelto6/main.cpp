// EJERCICIO 6. Escribir un programa en C++ que permita realizar lo siguiente:
// Crear una función que reciba una referencia a una variable, la función
// intercambiara los valores de dos variables haciendo que el valor de cada una
// al finalizar la función sea de la otra variable

#include <iostream>

using namespace std;

void swap(int &primero, int &segundo) {
  int temporal = primero;
  primero = segundo;
  segundo = temporal;
}
int main() {
  int a = 2, b = 3;

  cout << "a: " << a << ", b:" << b << '\n';

  swap(a, b);

  cout << "a: " << a << ", b:" << b << '\n';
}
