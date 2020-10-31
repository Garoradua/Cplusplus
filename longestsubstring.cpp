#include <iostream>
using namespace std;
int longestSubSeq(char a[], int n) {
   int length[n] = { 0 }; //set all length to 0
   length[0] = 1;    //subsequence ending with subArr[0] is 1
   for (int i = 1; i < n; i++) {    //ignore first character, second to all
      for (int j = 0; j < i; j++) {    //subsequence ends with subArr[j]
         if (a[j] < a[i] && length[j] > length[i])
            length[i] = length[j];
      }
      length[i]++; //add arr[i]
   }
   int lis = 0;
   for (int i = 0; i<n; i++) // find longest increasing subsequence
      lis = max(lis, length[i]);
   return lis;
}
int main() {
    char a[] = {'a', 'b', 'c', 'z', 'd', '\0'};
   int n = 5;
   cout << "Length of Longest Increasing Subsequence is: " << longestSubSeq(a, n);
   return 0;
}