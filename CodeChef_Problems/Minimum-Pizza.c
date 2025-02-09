#include <stdio.h>

int main() {
	int T,i,N,X,pizza;
	scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&N);
        scanf("%d",&X);
        pizza = (N*X);
        if(pizza%4==0){
            pizza = pizza / 4;
             printf("%d\n",pizza);
        }
        else if(pizza%4!=0){
            pizza = (pizza / 4) + 1;
            printf("%d\n",pizza);
        }
    }
}

