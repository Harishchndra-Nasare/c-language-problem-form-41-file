#include<stdio.h>
void main(){
	int arr[5],i;
	printf("Eneter the array elements\n");
	for(i=0;i<=4;i++){
		scanf("%d",&arr[i]);
	}
	if(arr[0]==3 &&arr[1]==3 || arr[0]==5 && arr[1]==5 ||arr[1]==3 && arr[2]==3 || arr[1]==5 && arr[2]==5 ||arr[2]==3 && arr[3]==3 && arr[2]==arr[2]==5 && arr[3]==5 || arr[3]==3 && arr[4]==3 || arr[3]==5 && arr[4]==5){
		printf("True");
	}else{
		printf("False");
	}
}
