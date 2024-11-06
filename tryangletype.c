#include <stdio.h>
void main(){
    printf("Enter the  three side of the triangle\n");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a){
        printf("The sides of the triangle are valid\n");
        if(a==b && b==c){
            printf("The triangle is equilateral\n");
        }else if(a==b || b==c || a==c){
            printf("The triangle is isosceles\n");
        } else{
            printf("The triangle is scalene\n");
        }
    } else{
        printf("The sides of the triangle are not valid\n");
    }
}