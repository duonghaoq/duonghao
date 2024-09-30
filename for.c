#include<stdio.h>
       int main(){
        int n;

        scanf("%d" , &n);

        for(int i = 0; ; i++){



       if(i % 2 == 0)

            continue;

      printf("%d", i);
      
      if( i > n)
          
          break;

        }

       
        return 0;
       }
  