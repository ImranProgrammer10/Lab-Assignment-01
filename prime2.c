
#include <stdio.h>
int main() 
{
    int n[100],T,i,count;        //Declare the nummber
 scanf("%d",&T);
    for (  i = 1; i <= T; i++)
    {
        scanf("%d",&n[i]);
    }
    
   
      count = 1;        
    for(int i = 2; i < n[i]; i++)   
    {
        if(n[i] % i == 0  ) 
        count=2;
       
    }
    for ( int i = 1; i <= n[i]; i++)
    {
           
    if (count==1)
    {
        printf("Yes");
    }
    else{
        printf("No");
    }
    
    }

    
   
    return 0;
}