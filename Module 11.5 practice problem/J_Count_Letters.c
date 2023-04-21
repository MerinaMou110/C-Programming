
// Given a string S. Determine how many times does each letter occurred in S.

// Input
// Only one line contains the string S (1 ≤ |S| ≤ 107) where |S| is the length of the string and it consists of only lowercase English letters.

// Output
// For each character that appears in S, print a single line that contains the following format: "X : Y" where X is the letter and Y is the number of times that letter X occurred in S.

// Note: you must print letters in ascending order.

// input
// aaabbc
// output
// a : 3
// b : 2
// c : 1



#include<stdio.h>
#include<string.h>
int main(){
   char c;
  
   int cnt[26]={0};
   while(scanf("%c",&c)!=EOF){
      int val=c-'a';
      cnt[val]++;
      

   }
   for(int i=0;i<26;i++){
      if(cnt[i]>0){
      printf("%c : %d\n",i+'a',cnt[i]);
      }
   }
                 //or
// for(char i='a';i<='z';i++){
//    if(cnt[i-'a']>0){
//       printf("%c : %d\n",i,cnt[i-'a']);
//    }
// }
}