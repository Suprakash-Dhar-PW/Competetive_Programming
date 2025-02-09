#include <stdio.h>

int main() {
	int T,X,i;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
	    scanf("%d",&X);
	    if(X<1 || X>10000){
	        printf("INVALID");
	    }
	    if(X<=100){
	        printf("%d\n",X);
	    }
	    else if(X>100 && X<=1000){
	        X -= 25; 
	        printf("%d\n",X);
	    }
	    else if(X>1000 && X<=5000){
	        X -= 100;
	        printf("%d\n",X);
	    }
	    else{
	        X -= 500;
	        printf("%d\n",X);
	    }
	    
	}
    return 0;
}