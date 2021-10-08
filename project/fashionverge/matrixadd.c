#include<stdio.h>
#include<conio.h>
main()
{
    int a[10][10],b[10][10],c[10][10],i,j,m,n;
    clrscr();
    printf("enter row and column size of a marix\n");
    scanf("%d%d",&m,&n);
    printf("enter vaues into a matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("entr values into b matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];        }
            printf("the addition of matrices is \n");
            for (i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("%3d"c[i][j]);
                }
                printf("\n");
            }
    }
    getch();
}