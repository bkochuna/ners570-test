#include <iostream>
#include "sparsemat.hpp"

using namespace std; 
using namespace SpMV;

//Defines the Constructor Operation
template <class fp_type>
SparseMatrix<fp_type>::SparseMatrix(const size_t nrows, const size_t ncols)
{
    cout << "Called SpMV::SparseMatrix<fp_type> constructor!" << endl;
    _nrows = nrows;
    _ncols = ncols;
}



//Defines the Destructor Operation
template <class fp_type>
SparseMatrix<fp_type>::~SparseMatrix()
{
    _nrows = -1;
    _ncols = -1;
    cout << "Called SpMV::SparseMatrix<fp_type> destructor!" << endl;
}

