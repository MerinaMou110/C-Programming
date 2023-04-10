// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     int max=0;
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//   printf("%d",max);
// }

#include<stdio.h>
int main()
{
    int n,a,max=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
     if(a>max){
        max=a;
     }
     

    }
    printf("%d",max);
}