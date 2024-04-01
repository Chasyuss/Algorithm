#include <stdio.h>
int main()
{
    int student[31] = {
        0,
    };
    int num;

    for (int i = 0; i < 28; i++)
    {
        scanf("%d", &num);  // 출석번호 입력
        student[num] = num; // 인덱스 저장
    }
    for (int i = 1; i < 31; i++) // 모든학생 조회
    {
        if (student[i] == 0) // 초기값 변경없다면
        {
            printf("%d\n", i); // 출력
        }
    }
    return 0;
}