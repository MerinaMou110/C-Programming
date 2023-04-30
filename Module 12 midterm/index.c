//given n and a rray of n,given a number p ..find which index in p have
// input:
// 6
// 4 3 5 3 3 5
//3
// output:
// 1

#include<stdio.h>
int main()
{
      int n;
      scanf("%d",&n);
      int arr[n];
      for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
      }
     int flag=-1;
     int p;
     scanf("%d",&p);
     for(int i=0;i<n;i++){
        if(arr[i]==p){
            flag=i;
            break;
        }
     } 
     printf("%d",flag);
}
