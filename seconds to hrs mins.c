#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int d,hr,m,ss,s;
    scanf("%d",&s);
    ss=s%60;
    m=(s%3600)/60;
    hr= (s % (24 * 3600))/3600 ;
    d=s/(24 * 3600) ;
    printf("The Duration is %d days %d hours %d minutes %d seconds",d,hr,m,ss);
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
