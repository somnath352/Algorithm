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

// T.C => O(N*N)
void bubbleSort(int arr[], int n) {
    for(int i = 0;i<n-1;i++) {
        bool checkSwap = false;
        for(int j = 0;j<n-i-1;j++) {
            if(arr[j+1] < arr[j]) {
                checkSwap = true;
                swap(arr, j+1, j);
            }
        }
        if(!checkSwap) break;
    }
    
    for(int i = 0;i<n;i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    IOS;
    
    int arr[] = {1,55,7,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
}
