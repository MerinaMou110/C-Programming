#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
     int max=INT_MIN;
    int min=INT_MAX;
    int pos,pos1;
    
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        
        if(max<a[i]){
            max=a[i];
            pos=i;
        }
     if(min>a[i]){
            min=a[i];
            pos1=i;
        }

}
    //int temp=max;
    a[pos]=min;
    a[pos1]=max;
   
   for(int i=0;i<n;i++){
        printf("%d ",a[i]);

    }
    
    }

