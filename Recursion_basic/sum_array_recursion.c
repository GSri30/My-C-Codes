// code to find the sum of elements of an array using recursion

#include <stdio.h>
#include <string.h>
int sum(int arr[],int n){
	if (n<1){
		return 0;}
	return sum(arr,n-1)+arr[n-1];
}
int main(){
	int array[]={2,4,1,3,6};
	int n=sizeof(array)/sizeof(array[0]);
	printf("%d", sum(array,n));
	return 0;
}
