namespace  SpMV
{

template <class fp_type>
class SparseMatrix
{
    private:
        int _nrows = -1;
        int _ncols = -1;
        int _nnz   = -1;

    public:
        SparseMatrix(int nrows, int ncols);  //This is the constructor
       ~SparseMatrix();                      //This is the destructor
};

}

