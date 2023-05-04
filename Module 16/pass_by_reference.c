#include<stdio.h>
int add(int *a){
    printf("Before multiply value with x inside function x=%d\n",*a);
    *a=(*a)*2;
    printf("After multiply value with x inside function x=%d\n",*a);

}
int main(){
    int x=50;
    printf("Before function call x=%d\n",x);
    add(&x);
    printf("After function call x=%d\n",x);

    return 0;
}