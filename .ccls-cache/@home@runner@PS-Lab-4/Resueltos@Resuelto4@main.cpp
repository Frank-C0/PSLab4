// EJERCICIO 4. Escribir un programa en C++ que permita realizar lo siguiente:
// Pasar como valor de entrada en una función la referencia de una variable para
// que devuelva el cuadrado de dicho valor usando esa misma variable
#include <bits/stdc++.h>
using namespace std;
// Pasar por referencia con argumentos como referencia
void cuadrado3(int &n) {
  // dirección de n en el cuadrado3() es la misma que n3 en la función principal
  cout << "dirección de n3 en cuadrado3(): " << &n << "\n";
  // Implicito rereferenciado (sin "*")
  n *= n;
}
void alumnos() {
  // llamada por referencia con argumentos como referencia
  int n3 = 8;
  cout << "dirección de n3 en la función principal: " << &n3 << "\n";
  cuadrado3(n3);
  cout << "Cuadrado de n3: " << n3 << "\n";
  cout << "Cambio reflejado en n3: " << n3 << "\n";
}
int main() { alumnos(); }