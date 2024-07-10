#include<stdio.h>
#include<string.h>

int cmpfn(void *ele1, void *ele2){
	int *ip1 = ele1;
	int *ip2 = ele2;
	return (*ip1-*ip2);
}

void *lsearch(void *key, void *base, int n, int size, int(*cmpfn)(void*, void*)){
	void* ele_addr;
	for(int i=0;i<n;i++){
		ele_addr = (char*) base+(i*size);
		if(cmpfn(key,ele_addr) == 0){
			return (ele_addr);
		}	
	}
	return NULL;
 
}

int main(void){

	int arr[] = {39,22,4,2,5};
	int size = 5;
	int key;

	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}

	printf("\n enter the key \t");
	scanf("%d",&key);

	void* ret = lsearch(&key, arr, size, sizeof(int), cmpfn);
	
	if(ret != NULL){
		printf("\n found index at %d \n",((int*)ret-arr+1));
	}
	else
		printf("\n not found \n");

	return 0;
}
