//
// Created by 하윤 on 2021/08/14.
//

#include <stdio.h>

void Recursive(int num) {
    if (num <= 0)
        return;
    printf("Recursive call %d\n", num);
    Recursive(num - 1);
}

int main(void) {
    Recursive(3);

    return 0;
}
