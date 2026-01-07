#include <stdio.h>
int main(){
	int score;
	int i,n;
	int arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if (arr[i]>= 68){
			if(arr[i]>= 85){
				printf("%d(A)\n",arr[i]);
			}else if(arr[i]>= 75){
				printf("%d(B)\n",arr[i]);
			}else printf("%d(C)\n",arr[i]);
		}
		else if(arr[i]< 55 ){	
		printf("%d(F)\n",arr[i]);	
		}else{
			printf("%d(D)\n",arr[i]);
		}
	}

return 0;
}
