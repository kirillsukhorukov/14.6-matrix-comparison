#include <iostream>

using namespace std;

//Функция конвертации матрицы в диаганальную и ее вывода
void matrix_transform (int array [4][4])
{
    cout << "Diagonal form of a matrix: " << endl;
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            if (i != j) array[i][j]=0;
            cout << array [i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl;
}

//Функция сравнения матриц
bool matrix_comparison (const int array1 [4][4], const int array2 [4][4])
{
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            if (array1[i][j] != array2[i][j]) return false;
        }
    }
    return true;
}

int main() {

    cout << "------------Matrix comparison------------\n\n";

    //Инициализация двух матриц
    int matrix1 [4][4];
    int matrix2 [4][4];

    //Ввод элементов первой матрицы
    cout << "Enter 16 elements of the first matrix: " << endl;
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            cin >> matrix1 [i][j];
        }
    }

    //Ввод элементов второй матрицы
    cout << "Enter 16 elements of the second matrix: " << endl;
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            cin >> matrix2 [i][j];
        }
    }

    //Сравнение матриц и вывод результата
    if (matrix_comparison(matrix1,matrix2)) matrix_transform(matrix1);
    else cout << "The matrices are not equal!" << endl;

    return 0;
}