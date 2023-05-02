#include<stdio.h>

// return_type name(parameter){
//     code
//     return what?
// }
int sum(int x,int y){
   //code
   int sum=x+y; 
   return sum;
}
int main(){
    
    printf("%d\n",sum(100,200));
    printf("%d",sum(500,200));

      
}

//                     or
// int sum(int x,int y);
// int main(){
    
//     printf("%d\n",sum(100,200));
//     printf("%d",sum(500,200));

      
// }
// int sum(int x,int y){
//    //code
//    int sum=x+y; 
//    return sum;
// }