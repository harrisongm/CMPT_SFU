#include <iostream>
using namespace std;

int stringLength(const char str[]){
    int index = 0;
    while(str[index] != '\0'){
        index++;
    }
    return index;
}

int stringCompare(const char s1[], const char s2[]){
    int s1Length = stringLength(s1);
    int s2Length = stringLength(s2);

    if(s1Length < s2Length){
        return -1;
    }else if(s1Length == s2Length){
        return 0;
    }else{
        return 1;
    }
}

int main(){
    char A[] = {"Hello World"};
    // B string shorter than A string.
    char B[] = {"Hello USA"};
    cout << "The result expect to be 1, and the final result we got is " << stringCompare(A,B) << endl;
    // C string longer than A string
    char C[] = {"Hello Canada and USA"};
    cout << "The result expect to be -1, and the final result we got is " << stringCompare(A,C) << endl;
    // D string equal to A string
    char D[] = {"Hello ?????"};
    cout << "The result expect to be 0, and the final result we got is " << stringCompare(A,D) << endl;
    return 0;
}
