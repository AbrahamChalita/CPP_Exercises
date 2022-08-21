// Abraham Chalita Núñez 
// 21/08/2022

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printFinalOrder(vector<vector<int>> matrix){
    for(int i = 0; i < matrix.size(); i++){
        cout << i + 1 << ": " << matrix[i][0] << endl;
    }

}
int sumVector(vector<int> vec){
    int num = 0;
    for(int i = 0; i < vec.size(); i++){
        num += vec[i];
    }

    return num;
}

int getSum(vector<vector<int>> matrix){
    int sum = 0;
    vector<int> temp;

    for(int i = 0; i < matrix.size(); i++){
        temp.push_back(matrix[i][1]);
        sum += sumVector(temp);
    }
    return sum;
}

void minimizeTime(vector<vector<int>> matrix){
    vector<vector<int>> solutionSet = matrix;

    do{
        if(getSum(matrix) < getSum(solutionSet)){
            solutionSet = matrix;
        }
        cout << "Conteo de tiempo: " << getSum(matrix) << endl;
    } while(next_permutation(matrix.begin(), matrix.end()));

    cout << endl;
    cout << "Tiempo minimizado: " << getSum(solutionSet) << endl;
    printFinalOrder(solutionSet);
}


int main(){
    
    vector<vector<int>> values = {{1,6}, {2,12}, {3,4}};
    minimizeTime(values);
    

    return 0;
}