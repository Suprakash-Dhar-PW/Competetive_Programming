#include <stdio.h>

int main() {
    int T,N,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&N);
        N = (N*1000);
        N = N/100;
        printf("%d\n",N);
    }
}

