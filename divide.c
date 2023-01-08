#include <stdio.h>
int main(){  
    int Roll[201]; 
    int i,j,K,N;  
    
   scanf("%d",&N);
    for(i=0; i<N; i++)  
    {  
        
        scanf("%d", &Roll[i]);  
     
    }  
       
  
    scanf("%d",&K);

    if (K==0)
    {
  for(i=0; i<N; i++)  
    {  
        printf("%d ", Roll[i]);  
    } 
    }
    else{
       for(i=K; i<N; i++)  
    {  
        printf("%d ", Roll[i]);  
    } 
    for (j  = 0; j < 5; j++)
    {
       
      
          printf("%d ", Roll[j]);  
    }

    }
    
    
   
    
    
}
