#include <stdio.h>

int main() {
	int T,i,N,total;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
	    scanf("%d",&N);
	    total = 50*N;
	    total = total-((0.2*total)+(0.2*total)+(0.3*total));
	    printf("%d\n",total);
	}

}

