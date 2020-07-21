#include <iostream>
#include <stdlib.h>
using namespace std;

int* foundSameArr(int* arr1, int* arr2, const int size1, const int size2, int& newSize){
    int* result = new int[newSize];
    int index = 0;
    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            if(arr1[i] == arr2[j]){
                result[index] = arr1[i];
                if(index < newSize){
                    index++;
                }else{
                    break;
                }
                continue;
            }
        }
    }
    return result;
}

int main(){
    int size1 = rand() % 4 + 4;
    int* arr1 = new int[size1];
    int size2 = rand() % 4 + 4;
    int* arr2 = new int[size2];

    int newSize = rand() % 4 + 4;

    for(int i = 0; i < size1; i++){
        arr1[i] = rand() % 4 + 4;
    }
    for(int i = 0; i < size2; i++){
        arr2[i] = rand() % 4 + 4;
    }


    int* result = foundSameArr(arr1, arr2, size1, size2, newSize);


    return 0;
}
