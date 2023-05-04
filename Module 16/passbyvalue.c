#include<stdio.h>
#include<limits.h>
void swap(int x,int y){
      int temp=x;
      x=y;
      y=temp;
    printf("\nafter swap a=%d,b=%d\n",x,y);
    
      

}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("before swap in main function: a=%d,b=%d\n",a,b);
     swap(a,b);
    printf("\nafter swap in main function: a=%d,b=%d\n",a,b);
    return 0;
}