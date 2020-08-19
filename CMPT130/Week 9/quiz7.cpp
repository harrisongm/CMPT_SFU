#include <iostream>

using namespace std;

void swap(int* one, int* two){
    int temp = *one;
    *one = *two;
    *two = temp;
}

void sort(int* firstNum, int* secondNum, int* thirdNum){
    if(*secondNum < *firstNum){
        swap(firstNum,secondNum);
    }
    if(*thirdNum < *secondNum){
        swap(thirdNum, secondNum);
        
        if(*secondNum < *firstNum){
            swap(firstNum,secondNum);
        }
    }
}

int main(){

    int val1 = 12, val2 = 3, val3 = 28;

    sort(&val1, &val2, &val3);

    cout << val1 << " ,   " << val2  << " ,   " << val3 << endl;  // prints 3  ,   12,   28

    return 0;

}
