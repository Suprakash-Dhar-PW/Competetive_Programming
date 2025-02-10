#include <stdio.h>

int main() {
	int T,R1,R2,R3,R4,i;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
	    scanf("%d",&R1);
	    scanf("%d",&R2);
	    scanf("%d",&R3);
	    scanf("%d",&R4);
	    int out = 0;
	    int arr[] = {R1,R2,R3,R4};
	    for(int x=0;x<=3;x++){
	        if(arr[x] == 1){
	            out++;
	        }
	    }
	    if(out!=0){
	        printf("OUT\n");
	    }
	    else{
	        printf("IN\n");
	    }
	}
    return 0;
}

