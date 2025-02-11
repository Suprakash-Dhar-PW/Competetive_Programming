#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    if(!(i&1) && i!=2){
       printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}