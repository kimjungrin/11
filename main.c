#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int grade[5];
    int sum = 0;

    // 성적 입력
    for (i = 0; i < 5; i++)
    {
        printf("grade[%i] = ", i);
        scanf("%d", &grade[i]);
    }

    // 포인터 문법으로 배열 값 출력 및 합계 계산
    for (i = 0; i < 5; i++)
    {
        printf("grade[%i] = %i\n", i , *(grade+i));
        sum = sum + *(grade+i);
    }

    printf("Average : %i\n", sum/5);

    return 0;
}