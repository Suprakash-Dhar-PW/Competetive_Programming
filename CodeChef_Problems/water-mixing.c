#include <stdio.h>

int main() {
	int T,X,Y,A,B,difference,i;
	scanf("%d",&T);
	for(i=1;i<=T;++i){
	   scanf("%d %d %d %d",&A,&B,&X,&Y);
	   if(A==B){
	       printf("YES\n");
	   }
	   else if(A>B){
    	   difference = A - B;
    	   if(difference>Y){
    	       printf("NO\n");
    	   }
    	   else{
    	       printf("YES\n");
    	   }
	   }
	   else{
	       difference = B - A;
	       if(difference>X){
	           printf("NO\n");
	       }
	       else{
	           printf("YES\n");
	       }
	   }
	}

}

