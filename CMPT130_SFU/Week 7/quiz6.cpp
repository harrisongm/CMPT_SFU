#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

bool allDistElem(int arr[], int length){
    bool recorder[length];
    for(int i = 0; i < length; i++){
        if(!recorder[arr[i]]){
            recorder[arr[i]] = true;
        }else{
            return false;
        }
    }
    return true;
}

int main() {
    //random number generator
    srand(time(NULL));
    int ARR_SIZE = 8;
    int testSample[ARR_SIZE];
    /**
     * This is for testing
       int testSample2[8] = {1,2,3,4,5,6,7,8};
    **/

    //Assign the number
    for(int i = 0; i < ARR_SIZE; i++){
        //it will generate random number from 3 - 8.
        // rand() % 6 could be 0,1,2,3,4,5, plus 3, min = 3, max = 8.
        testSample[i] = (rand() % 6) + 3;
    }

    //Print the full result include num && outcome.
    for(int i = 0; i < ARR_SIZE; i++){
        //it will generate random number from 3 - 8.
        // rand() % 6 could be 0,1,2,3,4,5, plus 3, min = 3, max = 8.
        cout << testSample[i] << " ";
    }

    cout << endl;

    if(allDistElem(testSample, ARR_SIZE)){
        cout << "It's ture, they are allDistElem" << endl;
    }else{
        cout << "It's false, they are not allDistElem" << endl;
    }

    return 0;
}
