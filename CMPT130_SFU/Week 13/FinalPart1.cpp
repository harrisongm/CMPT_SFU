#include <iostream>
using namespace std;


int reverse(int n) {
   int remainder, reversed = 0;
   while (n != 0) {
      remainder = n%10;
      if (reversed != 0) {
         reversed = reversed * 10 + remainder;
      } else {
         reversed = remainder;
      }
      n = n / 10;
   }
   return reversed;
}

bool isPalindromicNumber(int n) {
   int reversed = reverse(n);
   if (reversed == n) {
      return true;
   } else {
      return false;
   }
}

void appendElemdArr(int* arr, int &size, int number) {
   int* temp = new int[size];
   for (int i=0; i<size; i++) {
      temp[i] = arr[i];
   }
   delete[] arr;
   size++;

   arr = new int[size];
   for (int i=0; i<size-1; i++) {
      arr[i] = temp[i];
   }
   arr[size - 1] = number;


}


int main() {

   int size = 0;
   int* arr = new int[size];

   appendElemdArr(arr, size, 21);
   appendElemdArr(arr, size, 101);

   for (int i=0; i<size; i++) {
      cout << arr[i] << ", ";
   }
}
