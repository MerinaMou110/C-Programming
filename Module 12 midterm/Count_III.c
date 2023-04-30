
// Problem Statement

// You will be given a string S as input. The string will contain only English small alphabets and will not contain any spaces. You need to tell how many time each alphabets from a to z appears.

// Input Format

// Input will contain only S.
// Constraints

// 1 <= |S| <= 1000; Here |S| means the length of S.
// Output Format

// Ouput in the format show in the sample output.

// Sample Input 
// thebrownfox
// Sample Output 

// a - 0
// b - 1
// c - 0
// d - 0
// e - 1
// f - 1
// g - 0
// h - 1
// i - 0
// j - 0
// k - 0
// l - 0
// m - 0
// n - 1
// o - 2
// p - 0
// q - 0
// r - 1
// s - 0
// t - 1
// u - 0
// v - 0
// w - 1
// x - 1
// y - 0
// z - 0


#include<stdio.h>
#include<string.h>
int main(){
    char a[1001];
    scanf("%s",a);
    int cnt[26]={0};
    for(int i=0;i<strlen(a);i++){
        int val=a[i]-'a';
        cnt[val]++;
    }
    for(int i=0;i<26;i++){
        printf("%c - %d\n",i+'a',cnt[i]);
    }
}