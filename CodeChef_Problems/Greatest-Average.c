#include <stdio.h>

int main() {
    int T, a, b, c;
    scanf("%d",&T);
    
    while(T>0){
        
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    if(T>=1 && T<=1000 &&(a>=1 && a<=10) &&(b>=1 && b<=10) &&(c>=1 && c<=10)){
        
        float avg = ((float)a + b)/2;
        if( avg > c ){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    T = T-1;
    }
    return 0;
}

