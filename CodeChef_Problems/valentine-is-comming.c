#include <stdio.h>

int main() {
	int T,i,X,Y,chocolates;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
	    scanf("%d",&X);
	    scanf("%d",&Y);
	    chocolates = 0;
	    if(X<Y){
	        printf("%d\n",0);
	    }
	    else{
	        if(X%Y==0){
	            chocolates = X / Y;
	            printf("%d\n",chocolates);
	        }
	        else{
	            chocolates = (((X-Y)/Y)+1);
	            printf("%d\n",chocolates);
	        }
	    }
	}

}

