#ifndef MATRIX_HEADER_HPP
#define MATRIX_HEADER_HPP

#include <vector>

// T as a placeholder for 
template <class T>
class Matrix {
    private:

        // Dimensions instantiation
        int rows;
        int cols;


    public:

        // Constructor instatiations
        Matrix(int rows, int cols, const T *input_matrix);

        // Matrix access/editing methods instantiations
        T get_element(int row, int col);
        void set_element(int row, int col, T input_value);

        // Destructor instantiation
        ~Matrix();

        // Instantiate overloading functions here
        // TODO!


        


};


// *****************************************************************************************************************
// CONSTRUCTOR AND DESTRUCTOR DEFINITIONS
// *****************************************************************************************************************

template <class T>

Matrix<T>::Matrix(int rows, int cols, const T *input_matrix) {
    m_rows = rows;
    m_cols = cols;
    
};

#endif // MATRIX_HEADER_HPP