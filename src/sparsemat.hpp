#include <cstddef>


using namespace std;

namespace  SpMV
{

template <class fp_type>
class SparseMatrix
{
    private:
        size_t _nrows = -1;
        size_t _ncols = -1;
        size_t _nnz   = -1;

    public:
        SparseMatrix(size_t nrows, size_t ncols);  //This is the constructor
       ~SparseMatrix();                            //This is the destructor
};

}

