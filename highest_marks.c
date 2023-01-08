#include <stdio.h>
int main(){
    int num[100],i,n,max=0;
    scanf("%d",&n);

    for (  i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }
      max=num[0];

    for (  i = 1; i < n; i++)
    {
        if(max < num[i])
            max=num[i];
          
           
    }
  
    
    

   for (  i = 0; i < n; i++)
   {
     printf("%d ",max-num[i]);
   }
   

    
}