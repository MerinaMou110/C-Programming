// #include<stdio.h>
// int main()
// {
//     int n,e_count=0,o_count=0,pos_count=0,neg_count=0;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//         if(arr[i]%2==0)
//         {
//            e_count++;
//         }
//         else if(arr[i]%2!=0)
//         {
//             o_count++;
//         }
        

//     }
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>0)
//         {

//         pos_count++;
//         }
//          else if(arr[i]<0)
//         {

//          neg_count++;
//         }
//     }

//     printf("Even: %d\n",e_count);
//     printf("Odd: %d\n",o_count);
//     printf("Positive: %d\n",pos_count);
//     printf("Negative: %d\n",neg_count);

// return 0;


// }

#include<stdio.h>
int main()
{
    int n,a,even=0,odd=0,positive=0,negative=0,positive1=0,negative1=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
{    
    scanf("%d",&a);
 
    if(a%2==0)
    {
        even++;
        if(a>0){
            positive++;
        }
        else if(a<0){
        negative++;
        }
       
    }
    else if(a%2!=0)
    {
        
        odd++;
        if(a>0){
            positive++;
        }
        else if(a<0){

negative++;
        }
       
    }
    

}

    printf("Even: %d\n",even);
        printf("Odd: %d\n",odd);
            printf("Positive: %d\n",positive);
    printf("Negative: %d\n",negative);


}