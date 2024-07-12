#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int StrCmp(void* vp1, void* vp2){

	char *s1 = *(char**)vp1;
	char *s2 = *(char**)vp2;

	return strcmp(s1,s2);
}

void *lsearch(void* key, void* base, int n, int size, int(StrCmp)(void*, void*)){

	for(int i=0;i<n;i++){
		void* ele_addr = (char*) base+(i*size);
		if(StrCmp(key, ele_addr) == 0){
			return ele_addr;
		}
	
	}	
	return NULL;
}


int main(void){

	int size = 3;
	char *names[] = {"harsha", "bob", "alice"};

	printf("\n[");
	for(int i=0; i<size; i++){
		printf("%s\t",names[i]);
	}
	printf("]\n");

	char *name = malloc(100*sizeof(char));
	if(name == NULL){
		printf("error allocating\n");
		return -1;
	}
	printf("\nEnter name to search\t");
	
	scanf("%99s",name);

	printf("\nTo search : %s \n", name);


	char **found = lsearch(&name, names, size, sizeof(char*), StrCmp);

	if(found != NULL){
		printf("\nfound at the index of : %d\n",(found-names)+1);

		
	}
	else{
		printf("\nnot found\n");
	}

	free(name);
	return 0;
}
