#include<stdio.h>
int main()
{
    int a,b=0,c,y,m,d,sec;
    scanf("%d",&a);
    while(a--)
    {
        scanf("%d %d %d",&y,&m,&d);
        if(y%400==0||y%100!=0&&y%4==0)
            sec=29;
        else sec=28;
        for(c=1;c<=m;c++)
        switch(c-1)
        {
           case 1:
           case 3:
           case 5:
           case 7:
           case 8:
           case 10:b+=31;break;
           case 2:b+=sec;break;
           case 4:
           case 6:
           case 9:
           case 11:b+=30;break;
        }
        b+=d;
        printf("%d\n",b);
        b=0;
    }
    return 0;
}      
