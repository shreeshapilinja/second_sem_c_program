#include<stdio.h> 
void main() 
{ 
    int n, r, c, s, b; 
    printf("Enter number of rows / co-efficient: "); 
    scanf("%d",&n); 
    for(r=0;r<n;r++) 
    { 
        for(s=1;s<=n-r;s++) 
        printf("  "); b=1; 
        for(c=0;c<=r;c++) 
        { 
            if(c!=0 && r!=0) 
            { 
                b=b*(r-c+1)/c; 
            } 
            printf("%4d",b); 
            
        } 
        printf("\n"); 
    } 
}