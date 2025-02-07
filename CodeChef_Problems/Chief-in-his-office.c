#include <stdio.h>

int main() {
	int T,X,Y,i,sum;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
	    scanf("%d",&X);
	    scanf("%d",&Y);
	    if(X>Y){
	        sum = ((X*4)+(Y));
	        printf("%d\n",sum);
	    }
	}
    return 0;
}

