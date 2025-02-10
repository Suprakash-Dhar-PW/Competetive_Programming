#include <stdio.h>

int main() {
    int T,i,X,Y,ans;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&X);
        scanf("%d",&Y);
        ans = ((float)Y/X)*100;
        if(ans>=50){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

}

