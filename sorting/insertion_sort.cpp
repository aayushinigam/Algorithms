#include<iostream>
using namespace std;

/*
   int arr[] : array to be sorted
   int n : size of the array
*/
void insertion_sort(int arr[], int n) {
    int j,i,key;
    for(j=1; j<n; j++) {
        key = arr[j];
        i = j-1;
        while(i>-1 && arr[i]>key) {
            arr[i+1] = arr[i];
            i= i-1;
        }
        arr[i+1] = key;
    }

}

int main() {
    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    insertion_sort(arr, n);
    cout<<"Sorted array in increasing order is: "<<endl;
    for(int i=0; i<n; i++) {
        cout<<arr[i];
    }
}
