#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int* get_original_indexes(int* arr, int size){

    //same size dynamic array, store the sorted index of the elements.
    int* result = new int[size];
    int* temp = new int[size];

    for(int i = 0; i < size; i++){
        temp[i] = arr[i];
    }

    //sort the array
    for(int i = 0; i < size; i++){
        for(int j = i; j < size; j++){
            if(temp[i] > temp[j]){
                swap(&temp[i], &temp[j]);
            }
        }
    }

    //Now temp is sorted, let check the index and input the position
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(temp[i] == arr[j]){
                result[i] = j;
            }
        }
    }
    delete[] temp;
    return result;
}

int main(){
    int size = 5;
    int* arr = new int[size]{20, 73, 12, 65, 37};
    int* result = get_original_indexes(arr, size);
    for(int i = 0; i < size; i++){
        cout << result[i] << ", ";
    }
    delete[] arr;
    delete[] result;
    return 0;
}
