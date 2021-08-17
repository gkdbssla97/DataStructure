//
// Created by 하윤 on 2021/08/14.
//

int Factorial(int n) {
    if(n == 0)
        return 1;
    else
        return n * Factorial(n - 1)
}

int main(void) {
    printf("9! = %d\n", Factorial(9));
}
