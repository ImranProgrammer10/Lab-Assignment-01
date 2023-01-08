#include <stdio.h>
int main(){
    int i, N,K,counter=0;
    int ara[105];
     
    scanf("%d %d",&N,&K);
    
         for (  i = 1; i <= N; i++)
         {
             
            scanf("%d",&ara[i]);
         }
         
         for (  i = 1; i <= N; i++)
         {
            if (ara[i]<K)
            {
               counter++; 
            }
            
         }
         printf("%d",counter);
        
         
         
    
    
    
}