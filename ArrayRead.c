//
// Created by 하윤 on 2021/08/16.
//

#include <stdio.h>

int main(void) {
    int arr[10];
    int readCount = 0;
    int readData;
    int i;

    while(1) {
        printf("자연수 입력: ");
        scanf("%d",&readData);
        if(readData < 0)
            break;

        arr[readCount++] =readData;
    }
    for(int i = 0; i < readCount; i++)
        printf("%d ",arr[i]);

    return 0;
}
// 메모리 특성상 정적이라 입력받는데에 한계가 있음