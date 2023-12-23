#include<stdio.h>
int main(){
    int l,b,areaofcir,periofcir,area,perimeter,circumofcir,r;
    printf("enter length and breath of rectangle: ");
    scanf("%d%d",&l,&b);
    area=l*b;
    printf("Area of rectangle is %d\n",area);
    perimeter=(l+b)*2;
    printf("Perimeter of rectangle is %d\n",perimeter);
    printf("enter radius of the circle:");
    scanf("%d",&r);
    areaofcir=3.14*r*r;
    printf("area of circle is %d\n",areaofcir);
    circumofcir=2*3.14*r;
    printf("Circumference of circle is %d\n",circumofcir);
    return 0;
}