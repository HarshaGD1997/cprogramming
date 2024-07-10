#include <stdio.h>

int lsearch(int key, int arr[], int size){

	for(int i=0; i<size; i++){
		if(arr[i] == key){
			return (i+1);
		}
	}
	return -1;
}

int main(void){

	int arr[5] = {1,2,4,5,3};
	int ret_val = lsearch(2,arr,5);
	if(ret_val != -1){
		printf("\n key found in location %d\n",ret_val);
	}
	else{
		printf("\n key not found \n");
	}
	return 0;
}
