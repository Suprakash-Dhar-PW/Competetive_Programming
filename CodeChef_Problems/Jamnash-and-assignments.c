#include <stdio.h>

int main() {
	int T,X,i;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
	    scanf("%d",&X);
	    if((10-X)<3){
	        printf("No\n");
	    }
	    else {
	        printf("Yes\n");
	    }
	}
    return 0;
}

