// Problem Statement

// You will be given a string S. The string will contain both small and capital English alphabets only. You need to tell how many of them are capital alphabets and how many are small alphabets.

// Input Format

// Input will contain only S.
// Constraints

// 1 <= |S| <= 1000; Here |S| means the length of S.
// Output Format

// Output the count of capital alphabets first, then the count of small alphabets
// Sample Input 0

// tHeBRoWnFoX
// Sample Output 0

// 6 5



#include<stdio.h>
#include<string.h>
int main(){
    char a[1001];
    scanf("%s",&a);
        int capital=0,small=0;

    int size=strlen(a);
    for(int i=0;i<size;i++){
        if(a[i]>='A' && a[i]<='Z'){
              capital++;
        }
       else if(a[i]>='a' && a[i]<='z'){
            small++;
        }
    }
    printf("%d %d",capital,small);
}