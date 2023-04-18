#include<stdio.h>
#include<string.h>
int main(){
    int n,i,count=0,b,c;
    scanf("%d",&n);
    char a[101];
    for(int i=0;i<n;i++){
        scanf("%s",&a);
        int size=strlen(a);
        if(size>10){
       
       for(int j=1;j<size-1;j++){
        count++;
       }
                   printf("%c%d%c\n",a[0],count,a[size-1]);

        }
        else{
        printf("%s\n",a);
        }
    }

}