#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=5000)
    {
        printf("GOING TO COX'S BAZAR");
        if(tk>=10000)
        {
            printf("\nGoing to saint Martin");

        }
        else{
            printf("\nBack");
        }
    }
    else
    printf("kothao jabo nh");
    return 0;
}