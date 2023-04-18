#include<stdio.h>
#include<string.h>
int main(){
    char c[1001];
   
    int i,j,ans=0;
    scanf("%s",c);
    int size=strlen(c);
    i=0;
    j=size-1;
    
    while(size>i){
        if(c[i]==c[j]){
            i++;
            j--;
            ans=1;
        }
        else{
            break;
        }
    }
    
    if(ans==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    

   
}