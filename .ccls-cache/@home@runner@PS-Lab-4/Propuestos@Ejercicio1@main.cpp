#include <iostream>
using namespace std;

void setCero(int[], int);
void printPascal(int);
void printArray(int[], int);
void printSpaces(int);

int main() { printPascal(15); }

void printPascal(int niveles) {
  int array[niveles];
  int *iter = array;
  setCero(array, niveles);
  *iter = 1;
  
  printSpaces(niveles );
    printArray(array, 0);
  for (int i = 1, j = 0; i < niveles; i++) {
    iter = array + i;
    // cout << "--> *iter: " << *iter << " ,  iter: " << iter << '\n';
    while (iter != (array)) {
      *iter += *(iter - 1);
      iter--;
      // cout << "*iter: " << *iter << " ,  iter: " << iter << '\n';
      // printArray(array, niveles);
      j++;
    }
    printSpaces(niveles - i);
    printArray(array, i);
  }
}
void printArray(int arr[], int n) {
  int *iter = arr;
  while (iter != arr + n) {
    cout << *iter << "\t\t";
    iter++;
  }
  cout << *iter << '\n';
}
void setCero(int arr[], int n) {
  int *iter = (arr+1);
  while(iter!=(arr+n)){
    *iter=0;
    iter++;
  }
}
void printSpaces(int n) {
  for (int i = 0; i < n; i++)
    cout << '\t';
}