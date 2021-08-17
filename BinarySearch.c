//
// Created by 하윤 on 2021/08/12.
//

#include <stdio.h>

int Bsearch(int ar[], int len, int target) {
    int first = 0;
    int last = len - 1;
    int mid;
    int opCnt = 0; // 비교연산의 횟수 기록

    while(first <= last) {
        mid = (first + last) / 2;
        if(target == ar[mid])
            return mid;
        else{
            if(target < ar[mid])
                last = mid - 1;
            else
                first = mid + 1;
        } opCnt += 1;
    }
    printf("opCnt: %d\n", opCnt); //탐색실패 시 연산 횟수

    return -1;
}

int main(void) {
    int arr[5000] = {0,};
    int idx;
    idx = Bsearch(arr, sizeof(arr) / sizeof(int), 6);
    if(idx == -1)
        printf("Failed\n");
    else
        printf("Saving for target idx: %d\n", idx);

    return 0;
}
//BinarySearch's T(n) = log2n