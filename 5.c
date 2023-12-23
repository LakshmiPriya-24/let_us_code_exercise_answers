#include<stdio.h>
int main(){
    int dist,m,f,i,cm;
    printf("enter the distanst between two cities:");
    scanf("%d",&dist);
    m=dist*1000;
    printf("the distance in meters %d meters\n",m);
    f=dist*3280.84;
        printf("the distance in feet %d feet\n",f);
    i=dist*39370.1;
        printf("the distance in inches %d inches\n",i);
    cm=dist*100000;
        printf("the distance in cetimeter %d centimeter\n",cm);
    return 0;

}
