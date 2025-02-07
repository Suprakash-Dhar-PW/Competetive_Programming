#include <stdio.h>

int main() {
	int T,N,X,i,ans;
	scanf("%d",&T);
	for(i=1;i<=T;i++){
    scanf("%d",&N);
    scanf("%d",&X);
    if(N%6==0){
        ans = ((N/6)*X);
        printf("%d\n",ans);
    }
    else{
        ans = (((N/6)+1)*X);
        printf("%d\n",ans);
    }
	}
    return 0;
}

