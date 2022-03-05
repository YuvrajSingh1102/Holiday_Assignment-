/*
Create a class called 'Matrix' containing a constructor that initialises the number of rows and the number of columns of a new Matrix object. The Matrix class has the following information:
1 - number of rows of matrix
2 - number of columns of matrix
3 - elements of matrix (You can use 2D vector)
The Matrix class has functions for each of the following:
1 - get the number of rows
2 - get the number of columns
3 - set the elements of the matrix at a given position (i,j)
4 - adding two matrices.
5 - multiplying the two matrices
You can assume that the dimensions are correct for the multiplication and addition.

*/

#include <iostream>

using namespace std;

class Matrix{
    
    int rows;
    int column;
    int a[20][20];
    
    	public:
    
    	void getRows(int r) {
        	rows = r;
    	}
    
     	void getColumn(int c) {
        	column = c;
    	}
    
    	void InputMatrix(int r, int c, int elements){
        
        	a[r][c] = elements;
	}
		
	void add(Matrix M1, Matrix M2) {
		   
		    rows = M1.rows;
		    column = M1.column;
		    
		    for(int i = 0; i < rows; i++) {
		    	for(int j = 0; j < column; j++) {
		    		a[i][j] = M2.a[i][j] + M1.a[i][j];
		    
		    	}
		    }
	}
	void mul(Matrix M1, Matrix M2) {
		
		rows = M1.rows;
		column = M1.column;
		
		for(int i = 0; i < rows; i++) {
			for(int j = 0; j < column; j++){
				a[i][j] = 0;
				
				for(int k = 0; k < column; k++){
					a[i][j] += M2.a[i][k] * M1.a[k][j];
				}
			}
		}
	}
	void outputMatrix() {
		
		for(int i = 0; i < rows; i++) {
			for(int j = 0; j < column; j++) {
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
	/*	void outputMatrix() {
		    int c[row][column];
		    cout << "Resultamt matrix is : " << endl;
		    for(int i = 0; i < row; i++) {
		        for(int j = 0; j < column; j++) {
		            cout << c[row][column];
		        }
		        cout << endl;
		    }
		}
    */
};

int main() {
    int r, c, element;
    
    Matrix M1, M2, M3, M4;
    
    cout << "Enter the number of rows for Matrix 1: " << endl;
    cin >> r;
    
    cout << "Enter the number of column for Matrix 1: "<< endl;
    cin >> c;
    
    M1.getRows(r);
    M1.getColumn(c);
    
    cout << "Enter the number of rows for Matrix 2: "<< endl;
    cin >> r;
    
    cout << "Enter the number of column for Matrix 2: "<< endl;
    cin >> c;
    
    M2.getRows(r);
    M2.getColumn(c);
    
    cout << "Enter the elements for Matrix 1: " << endl;
    for(int i = 0; i < r; i++) {
    	for(int j = 0; j < c; j++) {
    		cin >> element;
    		M1.InputMatrix(i, j, element);
    	}
    }
    
    cout << "Enter the elements for Matrix 2: " << endl;
    for(int i = 0; i < r; i++) {
    	for(int j = 0; j < c; j++) {
    		cin >> element;
    		M2.InputMatrix(i, j, element);
    	}
    }
    
    cout << "\n" << "Matrix 1: " << endl;
    M1.outputMatrix();
    
    cout << "\n" << "Matrix 2: " << endl;
    M2.outputMatrix();
    
    cout << "Addition of 2 Matrixes: " << endl;
    M3.add(M1, M2);
    M3.outputMatrix();
    
    cout << "Multiplication of 2 Matrixes: " << endl;
    M4.mul(M1, M2);
    M4.outputMatrix();
    
    return 0;
}
