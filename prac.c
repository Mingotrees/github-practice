#include <stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int arr[3] = {1,2,3};
    swap(&arr[0], &arr[2]);
    for(int i = 0; i < 3; i++){
        printf("%d", arr[i]);
    }
    //amazing discovery
    // for (int i = 0, flag = 1; i < 5 && flag == 1; i++, flag = (i == 2 ? 0 : 1))
    // {
    //     if (i == 2)
    //         flag = 0;
    //     printf("iteration [%d]\n", i);
    // }
    return 0;
}