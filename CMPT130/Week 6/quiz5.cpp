#include <iostream>
using namespace std;

int luc(int n){
    if(n == 1){
        return 2;
    }
    if(n == 2){
        return 1;
    }
    int sum = 0;
    int previous = 2;
    int current = 1;
    for(int i = 3; i <= n; i++){
        sum = current + previous;
        previous = current;
        current = sum;
    }
    return sum;
}

bool isPrime(int n){
    int startIndex = 2;
    while(startIndex <=  (n / 2) ){
        if(n % startIndex == 0){
            return false;
            break;
        }
        startIndex++;
    }
    return true;
}

int main() {
    int count = 0;
    int number = 1;
    while(count < 10){
        if(isPrime(luc(number))){
            cout << luc(number) << endl;
            count++;
        }
        number++;
    }
    return 0;
}
