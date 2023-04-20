#include<stdio.h>
#include<string.h>
int main(){
    int x;
   // scanf("%d",&x);
    char a[100];
    char b[100];
    scanf("%s",a);
  // 
   scanf("%s",b);
   int size=strlen(b);
   printf("%d\n",size);

           //without library function
   for(int i=0;i<=size;i++){
    a[i]=b[i];
   }

           //with library function
           //strcpy(a,b);
printf("%s",a);


}