#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
#define ll long long
#define lli long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0);


void merge(int arr[], int low, int mid, int high) {
    int i = low, j = mid+1;
    int k = 0;
    int arr2[high-low+1];
    while(i<=mid && j<=high) {
        if(arr[i] < arr[j]) {
            arr2[k] = arr[i];
            i++;
        }
        else {
            arr2[k] = arr[j];
            j++;
        }
        k++;
    }
    if(i > mid) {
        while(j <= high) {
            arr2[k] = arr[j];
            k++; j++;
        }
    }
    else {
        while(i<=mid) {
            arr2[k] = arr[i];
            k++; i++;
        }
    }
    
    for(i = low; i <=high;i++) {
		arr[i] = arr2[i - low];
	}
}

// T.C-> O(NlogN)

void mergeSort(int arr[], int low, int high) {
    if(low < high) {
        int mid = (low+high)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
    
}

int main() {
    IOS;
    
    int arr[] = {1,2,7,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, n-1);
    for(int i = 0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
