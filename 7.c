#include<stdio.h>
int main(){
    int fah,centi;
    printf("enter the frhrenhit degree:");
    scanf("%d",&fah);
    centi=(fah-32)*5/9;
    printf("the temperature in centigrade degree:%d",centi);
    return 0;

}