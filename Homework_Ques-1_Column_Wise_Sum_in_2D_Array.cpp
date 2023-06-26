#include<iostream>
using namespace std;
void columnWisePrint(int arr[][4],int rows,int cols)
{
    
    // Simply do column wise traversal
    for(int j = 0;j<cols;j++)// Initially sum = 0 for each new column
    {
        int sum = 0; 
        for(int i = 0;i<rows;i++)// Traversing till number of columns
        { 
            sum = sum + arr[i][j]; // Column wise traversal
        }
        cout<<"Sum of "<<(j+1)<<" column is "<<sum<<endl;
    }
}
int main(){
    int arr[3][4] = {{1,2,3,5},{4,5,6,7},{7,8,9,5}};
    int rows = 3;
    int cols = 4;
    columnWisePrint(arr,rows,cols);
    return 0;
}
