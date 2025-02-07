#include <stdio.h>

int main() {
	int T,X,Y,Z,i;
	float value;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
        scanf("%d",&X);
	    scanf("%d",&Y);
	    scanf("%d",&Z);
	    value = (((float)Z/(X*Y))*100);
	    if(value>50.0){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
    return 0;
}

