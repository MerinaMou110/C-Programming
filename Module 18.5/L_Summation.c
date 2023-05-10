// #include<stdio.h>
//  int func(int a[],int n,int i,long long int sum){
//     if(i==n) return 0;
    
//     sum=sum+a[i];
//     func(a,n,i+1,sum);
    
//     if(i==n-1){
//         printf("%lld",sum);
        
// }
    
//     }

// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
// func(a,n,0,0);
         

    
// }

#include<stdio.h>
 long long int func(int a[],int n,int i,long long int sum){
    if(i==n) return 0;
    
    
    sum=func(a,n,i+1,sum);
    printf("%d\n",sum);
    return sum=sum+a[i];
    
    }

int main(){
    int n;
    scanf("%d",&n);
     int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
printf("%lld",func(a,n,0,0));
          }