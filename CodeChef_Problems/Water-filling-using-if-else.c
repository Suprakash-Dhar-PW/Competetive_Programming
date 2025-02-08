#include <stdio.h>

int main() {
	int T,B1,B2,B3,i;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
	    scanf("%d",&B1);
	    scanf("%d",&B2);
	    scanf("%d",&B3);
	    if(B1==0 && B2==0){
	        printf("Water filling time\n");
	    }
	    else if(B1==0 && B3==0){
	        printf("Water filling time\n");
	    }
	    else if(B3==0 && B2==0){
	        printf("Water filling time\n");
	    }
	    else{
	        printf("Not now\n");
	    }
	}
    return 0;
}

