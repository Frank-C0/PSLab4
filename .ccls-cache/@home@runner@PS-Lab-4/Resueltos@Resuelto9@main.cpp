// EJERCICIO 9. Crea un programa en C++ que permita utilizar un arreglo para ser
// asignado a una variable puntero

#include <bits/stdc++.h>
using namespace std;
void alumnos() {
  // declaramos un arreglo
  int val[3] = {5, 10, 20};
  // declaramos una variable puntero
  int *ptr;
  // Asignamos la direccion del valor de val[0] a ptr
  // nosotros podemos usar ptr=&val[0]; (ambos son los mismo)
  ptr = val;
  cout << "Elementos de el arreglo son: ";
  cout << ptr[0] << " " << ptr[1] << " " << ptr[2];
}
// programa principal
int main() { alumnos(); }