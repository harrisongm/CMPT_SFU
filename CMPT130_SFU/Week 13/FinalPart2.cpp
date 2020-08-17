#include <iostream>
#include <ctime>
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

int algo(int n) {
   int iteration = 0;
   while (iteration <= 100) {
      if (isPalindromicNumber(n)) {
         return iteration;
      } else {
         n = reverse(n) + n;
      }
      iteration++;
   }
   return -1;
}


int main() {
   int size=0;
   int *arr = new int[size];

   srand(time(0));
   int n;
   cout << "Please enter how many number you want to generate: ";
   cin >> n;
   for (int i=0; i<n; i++) {
      appendElemdArr(arr, size, rand() % 77 + 10);
   }

   int *iterations = new int[n];
   for (int i=0; i<n; i++) {
      iterations[i] = algo(arr[i]);
   }

   for (int i=0; i<n-1; i++) {
      for (int j=0; j<n-i-1; j++) {
         if (iterations[j] > iterations[j+1]) {
            int temp = iterations[j];
            iterations[j] = iterations[j+1];
            iterations[j+1] = temp;
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
         }
         else if (iterations[j] == iterations[j+1]) {
            if (arr[j] > arr[j+1]) {
               int temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;
            }
         }
      }
   }
   system("pause");
   return 0;
}
