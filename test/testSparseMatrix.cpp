#include <iostream>
#include "sparsemat.hpp"

int main()
{
  cout << "Hello World!" << endl;
  {
    cout << "Before Constructor" << endl;
    SpMV::SparseMatrix<float> A(10,10);
    cout << "After Constructor" << endl;
  }
  cout << "After Destructor" << endl;
}
