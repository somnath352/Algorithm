#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
#define ll long long
#define lli long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0);

// T.C => O(N*N)
void insertionSort(int arr[], int n) {
    for(int i = 1;i<n;i++) {
        int temp = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > temp) {
            arr[j+1] = arr[j];
            j--;
        }
        
        arr[j+1] = temp;
    }
    
    for(int i = 0;i<n;i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    IOS;
    
    int arr[] = {1,55,7,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
}
