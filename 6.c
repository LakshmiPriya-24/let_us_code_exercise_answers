#include<stdio.h>
int main(){
    int e,t,m,s,ss,total,percentage;
    printf("enter the marks obtained in each subject:\n");
    scanf("%d""%d""%d""%d""%d",&e,&t,&m,&s,&ss);
    total=e+t+m+s+ss;
    printf("%d",total);
    percentage=(total*100)/500;
    printf("Total percentage obtained is %d",percentage);
    return 0;
}