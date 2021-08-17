//
// Created by 하윤 on 2021/08/14.
//

#include <stdio.h>

void HanoiTowerMove(int num, char from, char by, char to) {
    if(num == 1)
        printf("원반1을 %c에서 %c로 이동\n",from, to);
    else {
        HanoiTowerMove(num - 1, from, to, by);
        printf("원반%d을(를) %c에서 %c로 이동\n", num, from, to);
        HanoiTowerMove(num - 1, by, from, to);
    }
}

int main(void) {
    HanoiTowerMove(3, 'A', 'B', 'C');

    return 0;
}
/* 크게 3단계로 나뉜다.
 * 작은 원반 n-1개를 (맨 아래 원반 제외한 나머지) A->B 이동
 * 맨 아래의 큰 원반 1개를 A->C로 이동
 * 작은 원반 (n-1개)를 B->C로 이동
 */
