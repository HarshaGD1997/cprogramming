#include <stdio.h>
#include <string.h>

void *lsearch(void *key, void *base, int n, int size){
	for(int i=0; i<n; i++){
		void *ele_addr = (char*)base+(i*size);
		if(memcmp(key,ele_addr,size) == 0){
			return (ele_addr);
		}	
	}
	return NULL;

}

int main(void){

	int n=5;
	char arr[5] = {'a','b','d','z','c'};

	for(int i=0;i<n;i++){
		printf("%c \t",arr[i]);
	}

	printf("\nEnter the key\t");
	char key;
	scanf(" %c",&key);
	void *res = lsearch(&key, arr, n, sizeof(char));
       	char *ret_add = (char*)res;	
	if(res != NULL)
		printf("\nfound at index %d\n",(ret_add-arr)+1);
	else
		printf("\nnot found\n");
	return 0;
}
