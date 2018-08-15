#include<iostream>
using namespace std;
/*
   int arr[] : array in which the number has to be searched
   int first : first index of the array
   int last : last index of the array
   int x : element to be searched 
*/
void binary_search(int arr[], int first, int last, int x) {
   if(first <= last) {
       int mid = first + (last-first)/2;
       if(x == arr[mid]) {
           cout<<"Element is present at index: "<<mid;
           return;
       } else if(x < arr[mid]) {
           binary_search(arr, first, mid-1, x);
       } else {
           binary_search(arr, mid+1, last, x);
       }
   } else {
       cout<<"Element is not present in the given array";
   }
}

int main() {
    int n,x;
    cout<<"Enter number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array in increasing order : ";
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<"Enter the number to be searched : ";
    cin>>x;
    binary_search(arr, 0, n-1, x);
}

/*
   Worst Case Time Complexity : O(logn) 
                                Recurrence relation : T(n) = T(n/2) + 1 , if n>1
                                                      T(n) = 1, if n=1
*/