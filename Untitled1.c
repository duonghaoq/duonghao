
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;  
    float delta, x1, x2 , xn ;
    char choice;  

    do {
       
        printf("nhap cac he so  (ax^2 + bx + c = 0):\n");
        printf("a = ");
        scanf("%f", &a);
        printf("b = ");
        scanf("%f", &b);
        printf("c = ");
        scanf("%f", &c);
 
        if (a == 0) {
            if (b == 0) {
                if (c == 0) {
                    printf("Phuong trinh co vô so nghiem.\n");
                } else {
                    printf("Phuong trinh vô nghiem.\n");
                }
            } else {
                printf("Phuong trinh có nghiem duy nhat: x = %.2f\n", -c / b);
            }
        } else {
            
            delta = b * b - 4 * a * c;

            if (delta < 0) {
                printf("Phuong trinh vo nghiem.\n");
                
            } else if (delta == 0) {
            	
            	
                x1 = -b / (2 * a);
                printf("Phuong trinh có nghiem kep: x1 = x2 = %.2f\n", x1);
            } else  {
                x1 = (-b + sqrt(delta)) / (2 * a);
                
                x2 = (-b - sqrt(delta)) / (2 * a);
                printf(" Phuong trinh có 2 nghiem phân biet: x1 = %.2f và x2 = %.2f\n", x1, x2);
            }
        }
        
        
}while (choice == 'y' || choice == 'Y');

        
        
    printf("Ban co muon tiep tuc (y/n)? ");      
 
  scanf(" %c", &choice);  

   return 0;
}

