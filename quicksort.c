#include <stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int index = low + 1;
    for(int i = low + 1; i <= high; i++){
        if(arr[i] < pivot){
            swap(&arr[i], &arr[index]);
            index++;
        }
    }

    swap(&arr[index - 1], &arr[low]);

    return index - 1;
}

void quickSort(int* arr, int low, int high){
    if(low < high){
        int part_index = partition(arr, low, high);
        quickSort(arr, low, part_index - 1);
        quickSort(arr, part_index + 1, high);
    }
}

int main(){
    int arr[10] = {5,6,2,3,1,4,9,7,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);


    printf("SORTED ARRAY: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}