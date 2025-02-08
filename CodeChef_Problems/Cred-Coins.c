#include <stdio.h>

int main() {
	int T,X,Y,i,bags,total_coins;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
	    scanf("%d",&X);
	    scanf("%d",&Y);
	    total_coins = X*Y;
	    bags = total_coins/100;
	    printf("%d\n",bags);
    }
    return 0;
}

