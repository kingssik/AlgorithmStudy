#include <stdio.h>

// 삽입정렬 연습문제 

int main(){
	int i, j, temp, n;
	int arr[101];	
	
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	for(i=0; i<n; i++) {
		j = i;
		while(j>0 && arr[j-1]>arr[j]) {
			temp = arr[j-1];
			arr[j-1] = arr[j];
			arr[j] = temp;
			j--;
		}
		for(j=0; j<=i; j++) {
			printf("%d ", arr[j]);
		}
		printf("\n");
	}
	return 0;
}
