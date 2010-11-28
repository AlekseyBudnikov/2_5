#include <stdio.h>

int S=0,y;

int chose(int mark)
{
    int n;
    int arrS[4][2]={{1,2},{3,0},{1,2},{3,0}};
    int arrY[4][2]={{2,4},{1,3},{2,5},{0,3}};

    if(mark==2)
        n=0;
    if(mark==5)
        n=1;

    y=arrY[S][n];
    S=arrS[S][n];

    return y;
}

int main()
{
    int i,mark[10]/*={2,2,5,2,5,2,5,5,5,2}*/;
    char feel[][256]={"Take the belt","Scold","Calm","Hope","Rejoice","Exult"};

    printf("Enter marks: ");
    for(i=0;i<=9;i++)
        scanf("%d%c",&mark[i]);

    for(i=0;i<=9;i++)
    {
        y=chose(mark[i]);
        printf("y%d - %s\n",y,feel[y]);
    }

    return 0;
}
