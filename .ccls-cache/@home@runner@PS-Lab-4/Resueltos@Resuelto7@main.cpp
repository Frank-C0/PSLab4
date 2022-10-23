// EJERCICIO 7. Crear un programa en C++ que utilize puntero doble y triple de
// una variable

#include <iostream>
using namespace std;
int main() {
  int i = 10;       // varialbe simple
  int *p = &i;      // puntero simple
  int **pt = &p;    // doble puntero
  int ***ptr = &pt; // triple puntero
  // Todos los punteros anteriores son diferentes
  cout << "i=" << i << "\t"
       << "p=" << p << "\t"
       << "pt= " << pt << "\t"
       << "ptr= " << ptr << "\n";

  cout << "i=" << i << "\t"
       << "p=" << *p << "\t"
       << "pt= " << *pt << "\t"
       << "ptr= " << *ptr << "\n";

  cout << "i=" << i << "\t"
       << "p=" << *p << "\t"
       << "pt= " << **pt << "\t"
       << "ptr= " << **ptr << "\n";

  cout << "i=" << i << "\t"
       << "p=" << *p << "\t"
       << "pt= " << **pt << "\t"
       << "ptr= " << ***ptr << "\n";
}
