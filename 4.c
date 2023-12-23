/*exercise-qn.1*/
#include <stdio.h>
int main(){
    int Bs,allo,rent,gross;
    printf("enter ramesh basic salary:");
    scanf("%d",&Bs);
    allo=0.4*Bs;
    rent=0.2*Bs;
    gross=Bs+allo+rent;
    printf("Gross salary of ramesh  %d",gross);
    return 0;

}