    //has return+parameter

// #include<stdio.h>
// #include<limits.h>
// int max_num(int a[],int n){
//     int max=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(a[i]>max){
//             max=a[i];
//         }
//     }
//     return max;
   

// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("%d",max_num(a,n));
//     return 0;

// }

          //has return+no parameter
// #include<stdio.h>
// int mul(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int x=a*b;
//   return x;

// }   
// int main(){
//     int m= mul();
//     printf("%d",m);
//     return 0;
// }    

         //no return+parameter
//  #include<stdio.h>
//  void add(int ar[],int n){
//     int sum,z;
//     scanf("%d",&z);
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(ar[i]+ar[j]==z){
//                printf("the summation of %d and %d are =%d",ar[i],ar[j],z); 
//                 break;
//             }
            
//         }
//     }

//  }
//  int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
    
//     }
//     add(a,n);
//     return 0;
//  }

          
           //no return+no parameter
   #include<stdio.h>
   #include<string.h>

   void str(){
    char a[1000];
    scanf("%s",a);
    int small_count=0;
    int size=strlen(a);
    for(int i=0;i<size;i++){
        if(a[i]>='a'&& a[i]<='z'){
            small_count++;
        }
    }
    printf("The count of small letter =%d",small_count);

   }
   int main(){
    str();
    return 0;
    

   }        