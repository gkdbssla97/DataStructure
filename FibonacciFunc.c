//
// Created by 하윤 on 2021/08/14.
//

#include <stdio.h>

int Fibo(int n) {
    if(n == 1)
        return 0;
    else if(n == 2)
        return 1;
    else
        return Fibo(n - 1) + Fibo(n - 2);
}

int main(void) {
    for(int i = 1; i < 15; i++)
        printf("%d\n", Fibo(i));

    return 0;
}

