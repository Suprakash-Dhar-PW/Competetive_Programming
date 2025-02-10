#include <stdio.h>

int main() {
	int T,A,B,X,Y,i,required_power,present_power;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
	    scanf("%d",&A);
	    scanf("%d",&B);	    
	    scanf("%d",&X);
	    scanf("%d",&Y);
	    required_power = (A*B);
	    present_power = (X*Y);
        if(required_power<=present_power){
            printf("YES\n");
        }	    
        else{
            printf("NO\n");
        }
	}

}

