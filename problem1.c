#include<stdio.h>
   
   int main(){
   int n,k;
   int safe_position;
   
   printf("Enter number of people(n):\n");
   scanf("%d",&n);
   printf("Enter the positionwhere person sitting is killed \n");
   scanf("%d",&k);
   
   for(int i=2;i<=n;i++){
   safe_position=(safe_position+k)%i;
   
   }
   printf("The safe position in the table:%d\n", safe_position+1);
   
   return 0;
   }