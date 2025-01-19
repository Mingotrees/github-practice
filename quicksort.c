#include <stdio.h>

void swap(int arr[], int a, int b){
    int temp;
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int findPart(int arr[], int* low, int* high){
    int index = *low;
    int pivot = arr[*low];
    for(int i = *low; i <= *high; i++){
        if(arr[i] < pivot){
            swap(arr, i, index);
            index++;
        }
    }
    swap(arr, ((high + 1) /2), index);
    return index;
}

void quickSort(int arr[], int* low, int* high){
    if(*low < *high){
        int part = findPart(arr, low, high);
        quickSort(arr, low, &part);
        quickSort(arr, &part, high);
    }
}

int main(){
    int arr[] = {1,5,3,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    //find partition
    int low = 0, high = n-1;
    quickSort(arr, &low, &high);
    for(int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }

}