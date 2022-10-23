// EJERCICIO 1. Crear un programa en C++ para mostrar a una variable, con el
// valor de 20, la dirección en memoria que esta variable ocupa

#include <bits/stdc++.h>

using namespace std;

void alumnos() {
  int var = 20;
  int *ptr; // declaramos una variable puntero
  ptr = &var;
  // el tipo de dato var y ptr son lo mismo
  // asignamos la direccion de una a un puntero
  cout << "Valor para ptr = " << ptr << "\n";

  cout << "Valor para var = " << var << "\n";
  cout << "Valor para *ptr = " << *ptr << "\n";
}
// funcion principal
int main() { alumnos(); }


//  pwd
// /home/runner/PS-Lab-4
//  cd Resueltos/
//  cd Resuelto1/
//  g++ -o main main.cpp
//  ./main
// Valor para ptr = 0x7ffc90c28c24
// Valor para var = 20
// Valor para *ptr = 20
//  ^C
//  