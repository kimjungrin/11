#include <stdio.h>

int main(void)
{
    int i = 10;
    char c = 'a';

    int *iptr;       // 정수형 포인터 선언
    char *cptr;      // 문자형 포인터 선언
    int *iptr2;      // 정수형 포인터 선언

    iptr = &i;       // iptr이 i의 주소를 가리킴
    cptr = &c;       // cptr이 c의 주소를 가리킴
    iptr2 = iptr;    // iptr2도 iptr과 같은 주소를 가리킴

printf("i : %p\n%p (size:%i)\n", iptr, &i, sizeof(iptr));
printf("c : %p\n%p (size:%i)\n", cptr, &c, sizeof(cptr));
printf("iptr2 : %p, %i\n", iptr2, *iptr2);

return 0;

}