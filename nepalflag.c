#include<stdio.h>

void triangleShape(int n);
void flagPole(int n);

int main()
{
    int row=5;
    triangleShape(row);
    triangleShape(row);
    flagPole(row);
    return 0;
}

void triangleShape(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void flagPole(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("*\n");
    }
}