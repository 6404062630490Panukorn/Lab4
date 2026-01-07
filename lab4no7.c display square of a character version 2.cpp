#include <stdio.h>
int main (void)
{
	int c,i,n,j,k;
	scanf("%c %d %d",&c,&n,&i);
	for(j=0;j<i;j++){
		for(k=0;k<n;k++){
		printf("%c",c);
		}
		printf("\n");
	}
return 0;
} 
