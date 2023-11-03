#include <stdio.h>
int main()
{
    char score[2] = {"",}; // 배열로 만들기.
    double sum = 0.0; // 점수입력은 2.3 이런식으로 되니까

    scanf("%s", &score); //점수 입력 

    if(score[0] == 'A') // A는 4.0을 기준으로
    {
        sum = 4; 
    }
    else if (score[0] == 'B')
    {
        sum = 3; 
    }

     else if (score[0] == 'C')
    {
        sum = 2; 
    }

     else if (score[0] == 'D')
    {
        sum = 1; 
    }

    if(score[1] == '+') // +하면 0.3씩 커지고 
    {
        sum += 0.3;
    }

     else if(score[1] == '-') //-하면 0.3씩 작아짐 
    {
        sum -= 0.3;
    }
    
    printf("%.1lf", sum);
}