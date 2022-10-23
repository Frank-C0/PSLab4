// EJERCICIO 8. Crear un programa en C++ que utiliza la referencia tres veces
// sobre un mismo valor

#include <iostream>
using namespace std;

int main() {
  int a = 5; // una simple variable
  int &S = a;
  int &S0 = S;
  int &S1 = S0;

//int &&S2 = a;  // no funciona doble referencia
  
  cout << "a = " << a << "\t"
       << "S = " << S << "\t"
       << "S0 = " << S0 << "\t"
       << "S1 = " << S1 << "\n";
  // Todos las referencias no son diferentes en sus valores
  // Ellas hacen referencia a la misma variable
}