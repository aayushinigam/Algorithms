//Given an array of n numbers, search a number in the array

#include<iostream>

using namespace std;
/*
   int a  : number to be searched
   int arr[] : array inside which the number is to be searched
   int n : size of the array
*/
void linear_search(int a, int arr[], int n) {
    int i;
    for(i=0; i<n; i++) {
        if (arr[i] == a) {
            cout<<"Element is present at index = "<<i;
            break;
        }
    }
    if (i == n) {
        cout<<"Element is not present in the array";
    }
}

int main() {
    int n,x;
    cout<<"Enter number of elements in array";
    cin>>n;
    int arr[n];
    cout<<"Enter elements inside array";
    //taking input from user
    for(int i =0; i<n; i++) {
        cin>>arr[i];
    }
    //number to be searched
    cout<<"enter the number to be searched";
    cin>>x;
    linear_search(x, arr, n);
    return 0;
}

/*
Worst Case Time Complexity : O(n) i.e. when element is present is at the last index or not 
                             not present at all in which loop will iterate n times. 
*/                            