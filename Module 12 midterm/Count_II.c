// Problem Statement

// You will be given a string S as input contains only small English alphabets. You need to tell the number of vowels in it. The string will not contain any spaces.

// Note: Vowels are a,e,i,o and u

// Input Format

// Input will contain a string S.
// Constraints

// 1 <= |S| <= 1000 ; Here |S| means the length of string S.
// Output Format

// Output the number of vowels.
// Sample Input 0

// thefoxisgone

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

                   //count constant

// char ch;
// int cnt=0;
// while(scanf("%c",&ch)!=EOF){
//     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
//           continue;
//     }
//     else{
//         cnt++;
//     }

// }
// printf("%d",cnt);



}