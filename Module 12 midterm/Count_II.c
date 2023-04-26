#include<stdio.h>
#include<string.h>
int main(){
    char c[1001];
    int count=0;
    scanf("%s",c);
    int size=strlen(c);
    for(int i=0;i<size;i++){
            
            if(c[i]=='a'|| c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u'){
                count++;
            }
    }
    printf("%d",count);

    // char c;
    // int cnt=0;
    // while(scanf("%c",&c)!=EOF){
    //     if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
    //         cnt++;
    //     }
    // }
    // printf("%d",cnt);

    // char ch;
    // int s=0,c=0;
    // while(scanf("%c",&ch)!=EOF){
    //     if(ch>='a' && ch<='z'){
    //         s++;
    //     }
    //     else{
    //         c++;
    //     }
    // }
    // printf("small=%d,capital=%d",s,c);
}