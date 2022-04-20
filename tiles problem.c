#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int m,n,tiles;
    scanf("%d %d",&m,&n);
    tiles=(m*n)/2;
        if ((m*n)%2==0){
            printf("%d",tiles);}
        else{
            printf("%d",tiles+1);
        }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
