#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int bamt,amt,q,r;
    scanf("%d %d",&amt,&bamt);
    q=amt/bamt;
    r=amt%bamt;
    printf("Quotient:%d\nRemainder:%d",q,r);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
