#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
#define ll long long
#define lli long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0);

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int h) {
    int pivot = arr[l];
    int i = l;
    int j = h;
    while(i < j) {
        while(arr[i] <= pivot) i++;
        while(arr[j] > pivot) j--;
        if(i<j) swap(arr, i, j);
    }
    swap(arr, j, l);
    return j;
}

// T.C-> O(NlogN)

void quickSort(int arr[], int l, int h) {
    if(l < h) {
        int pivot = partition(arr, l, h);
        quickSort(arr, l, pivot-1);
        quickSort(arr, pivot+1, h);
    }
    
}

int main() {
    IOS;
    
    int arr[] = {1,55,7,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    for(int i = 0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
