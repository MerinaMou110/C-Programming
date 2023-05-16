#include<stdio.h>
#include<string.h>
int main(){
    char c[1001];
    fgets(c,1001,stdin);
    int l=strlen(c);
   int capital=0,small=0,spaces=0;
    for(int i=0;i<l;i++){
        if(c[i]==' '){
            spaces++;
        }
       else if(c[i]>='A' && c[i]<='Z'){
            capital++;
        }
        else {
            small++;
        }
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d",capital,small,spaces);
}