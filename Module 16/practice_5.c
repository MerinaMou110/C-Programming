#include<stdio.h>
#include<string.h>
int is_palindrome(char *a){
    int size=strlen(a);
     int j=size-1;

    for(int i=0;i<size;i++){
       if(a[i]==a[j]){
        return 1;
       }
       else{
        return 0;
        break;
       }
       j--;
    }
    


}
int main(){
    char a[100];
    scanf("%s",a);
    if( is_palindrome(a)== 1){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }    

    return 0;
}