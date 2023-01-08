#include <stdio.h>
int main(){
    int i, T;
    long int  A,B,C,S;
    long int  sum=0;
    long int missing;
    
    
    scanf("%d",&T);
    
         for (  i = 0; i < T; i++)
         {
             scanf("%ld %ld %ld %ld",&S,&A,&B,&C);
           sum=sum+A+B+C;
              

         }
         missing=S-sum;
         printf("%ld",missing);
         printf("\n");
        
         
       
         
         
    
    
    
}