#include<stdio.h>
int main()
{
    int nr, nc;
    printf("Enter number of rows");
    scanf("%d",&nr);
    printf("Enter number of columns");
    scanf("%d",&nc);
    for(int i = 1; i<=nr ; i++)
    {
        for(int a=1; a<=nc; a++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}