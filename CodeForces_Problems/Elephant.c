#include<stdio.h>
int main(){
    int T,i,x,steps;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&x);
        if(x>0){
            steps = (x + 4) / 5; 
            printf("%d\n", steps);  
        }
        else{
            printf("INVALID");
        }
    }
    return 0;
}