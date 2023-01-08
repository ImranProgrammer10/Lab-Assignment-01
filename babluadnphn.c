 #include <stdio.h>
 int main(){
  int T,i,X[105],miniutes;
  scanf("%d",&T);
  for (  i = 1; i <= T; i++)
  {
     scanf("%d",&X[i]);
  }
   
   for (  i = 1; i <= X[i]; i++)
   {
  if (X[i]<=60)
  {
      miniutes +=(60-X[i])+20*2+20*3;
     printf("%d\n",miniutes);
  }
  // else if (X[i]<=80)
  // {
  //   miniutes +=(80-X[i])*2+(20*3);
  //    printf("%d\n",miniutes);
  // }
  else if (X[i]<=100)
  {
   miniutes +=(100-X[i])*3;
         printf("%d\n",miniutes);
  }
  
   }
   
  
   
}