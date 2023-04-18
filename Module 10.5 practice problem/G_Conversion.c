#include<stdio.h>
#include<string.h>
int main(){
    char c[100001];
   
   scanf("%s",c);
    int size=strlen(c);
    for(int i=0;i<size;i++){
        if(c[i]>='A' && c[i]<='Z')
        {
            c[i]=c[i]+32;
        }
       else if(c[i]>='a' && c[i]<='z')
        {
            c[i]=c[i]-32;
        }
        else if(c[i]==','){
            c[i]=' ';
        }
    }

    printf("%s",c);
}