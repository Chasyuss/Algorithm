#include <stdio.h>
#include <string.h>
int main()
{
    char alp[15];
    int count = 0;

    scanf("%s", &alp);

    for (int i = 0; i < strlen(alp); i++)
    {
        if (alp[i] >= 65 && alp[i] <= 67)
        { // ABC
            count += 3;
        }
        if (alp[i] >= 68 && alp[i] <= 70)
        { // DEF
            count += 4;
        }
        if (alp[i] >= 71 && alp[i] <= 73)
        { // GHI
            count += 5;
        }
        if (alp[i] >= 74 && alp[i] <= 76)
        { // JKL
            count += 6;
        }
        if (alp[i] >= 77 && alp[i] <= 79)
        { // MNO
            count += 7;
        }
        if (alp[i] >= 80 && alp[i] <= 83)
        { // PQRS
            count += 8;
        }
        if (alp[i] >= 84 && alp[i] <= 86)
        { // TUV
            count += 9;
        }
        if (alp[i] >= 87 && alp[i] <= 90)
        { // WXYZ
            count += 10;
        }
    }

    printf("%d", count);
    return 0;
}