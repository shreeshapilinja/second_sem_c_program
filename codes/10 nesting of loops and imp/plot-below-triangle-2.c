#include<stdio.h> 
void main() 
{ 
    int n, r, c, s; 
    printf("Enter number of rows : "); 
    scanf("%d",&n); 
    for(r=0;r<n;r++) 
    { 
        for(s=1;s<=n-r;s++) 
        printf("  "); 
        for(c=0;c<=r;c++) 
        { 
            printf("1 "); 
        } 
        printf("\n"); 
    } 
}