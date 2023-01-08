 #include <stdio.h>
 int main(){
  int T,i,j,count=0;
  int N[1000000];
  scanf("%d",&T);

  for (  i = 0; i <= T; i++)
  {
     scanf("%d",&N[i]);
  }
  
  for (  i = 0; i < T; i++)
  {
    for (  j = 1; j <= N[i]; j++)
 
       if (N[i]%j==0)
      count++;
      if (count==2)
      {
         printf("Yes\n");
      }
      else{
        printf("No\n");
      }
       
  
    
  }
  
 }
