//
// Created by 하윤 on 2021/08/14.
//

#include <stdio.h>

int BsearchRecur(int ar[], int first, int last, int target) {
    int mid;

    if(first > last)
        return -1;
    mid = (first + last) / 2;
    if(target == ar[mid])
        return mid;
    else if(target < ar[mid])
        return BsearchRecur(ar,first,mid - 1, target);
    else
        return BsearchRecur(ar,mid + 1,last, target);
}

int main(void) {
    int arr[] = {1, 3, 5, 7 ,9};
    int idx;
    idx = Bsearch(arr, 0, sizeof(arr) / sizeof(int) - 1, 7);
    if(idx == -1)
        printf("Failed\n");
    else
        printf("Saving for target idx: %d\n", idx);

    return 0;
}
