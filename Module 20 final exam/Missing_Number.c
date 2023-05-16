#include<stdio.h>
int main(){
    int n,s,a,b,c;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
      scanf("%d %d %d %d",&s,&a,&b,&c);

      int m_num=s-(a+b+c);
      printf("%d\n",m_num);
    }

}