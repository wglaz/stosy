#include <stdio.h>

int main()
{
    int i, n=0, m=0, c=0;
    double stosA[] = {1.0, 3.0, 5.0, 8.0};
    double stosB[] = {2.0, 4.0, 5.0, 6.0, 7.0, 9.0};
    double stosC[c];


    n = sizeof(stosA)/ sizeof(stosA[0]);
    m = sizeof(stosB)/ sizeof(stosB[0]);
    c = n+m;

    printf("pierwszy stos:");
    for (i = 0; i < n; i++) {
        printf(" %.1lf ,", stosA[i]);
    }
    printf("\n");

    printf("drugi stos: ");
    for (i = 0;i < m; i++) {
        printf("  %.1lf  ,", stosB[i]);
    }
    printf("\n");

                   //składnie stosow
    for (i=0; i<c; i++);
    {
        if(stosA[n]<=stosB[m])
        {
            stosC[i] = stosA[n];
            n++;
        }else
        {
            stosC[i] = stosB[m];
          m++;
        }
    }
    printf("\n");
    for (int i = 0; i < c; i++)
    {
        printf("%.1ls", stosC[i]);
    }




    return 0;

}