#include<stdio.h>

     int main(){

        int n;
        double x, y;
        printf("enter an integer:");
        scanf("%d", &n);
        printf("enter 2 real numbers:\n");
        scanf("%lf%lf", &x,&y);
        double num1, num2;
        char op;
        printf("enter an expression + - * /:");
        
        scanf("%lf%c%lf", &num1, &op , &y);
        printf(" expression inputed is : %lf%c%lf\n", num1, op , num2);
        getchar();
        getchar();
        return 0;

     }
     
