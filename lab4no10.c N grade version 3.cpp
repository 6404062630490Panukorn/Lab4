#include <stdio.h>
int main(){
	int score;
	int i,n;
	int A=0,B=0,C=0,D=0,F=0;
	int arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if (arr[i]>= 68){
			if(arr[i]>= 85){
				A++;
				printf("%d(A)\n",arr[i]);
			}else if(arr[i]>= 75){
				B++;
				printf("%d(B)\n",arr[i]);
			}else C++; 
			printf("%d(C)\n",arr[i]);
		}
		else if(arr[i]< 55 ){
		F++;	
		printf("%d(F)\n",arr[i]);	
		}else{
			D++;
			printf("%d(D)\n",arr[i]);
		}
	}
	printf("A(%d)\n",A);
	printf("B(%d)\n",B);
	printf("C(%d)\n",C);
	printf("D(%d)\n",D);
	printf("F(%d)\n",F);
return 0;
}
