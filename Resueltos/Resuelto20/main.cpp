// EJERCICIO 20. Crear un programa en C++ que pueda utilizar el operador new
// para ingresar un valor por teclado y mostrarlo en pantalla y después borrarlo
// utilizando la función delete

#include <bits/stdc++.h>
using namespace std;
int main() {
  // creamos una variable utilizando el operador new y tambiÃ©n utilizamos el
  // operador delete para borrar dicha variable 
  
  int *a;  
  
  a = new (int);

  cout << "a es "<<a<<"  *a: "<<*a<<'\n';
  
  cout << "Ingrese un valor entero \n";
  cin >> *a;
  cout << endl << "El valor ingresado es: " << *a<<'\n';
  
  delete a;
  cout << "a es "<<a<<"  *a: "<<*a<<'\n';
}