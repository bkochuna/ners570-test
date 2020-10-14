#include <cstddef>

namespace  SpMV
{

template <class fp_type>
class SparseMatrix
{
    private:
        std::size_t _nrows = -1;
        std::size_t _ncols = -1;
        std::size_t _nnz   = -1;

    public:
        SparseMatrix(std::size_t nrows, std::size_t ncols);  //This is the constructor
       ~SparseMatrix();                                      //This is the destructor
};

}

