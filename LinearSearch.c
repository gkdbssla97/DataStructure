//
// Created by 하윤 on 2021/08/12.
//

#include <stdio.h>

int LSearch(int ar[], int len, int target) {
    int i;
    for (int i = 0; i < len; i++)
        if (ar[i] == target)
            return i;

    return -1;
}

int main(void) {
    int arr[] = {3,5,2,4,9};
    int idx;
    idx = LSearch(arr, sizeof(arr)/sizeof(int), 4);
    if(idx == -1)
        printf("Failed\n");
    else
        printf("Saving for target idx: %d\n", idx);

    return 0;
}
