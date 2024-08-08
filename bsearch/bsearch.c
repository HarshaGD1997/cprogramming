#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int CmpFn(void *vp1, void *vp2){


}

void *BSearch(void *key, void *base, int n, int size, int(*CmpFn)(void*, void*)){

	int mid = n/2;
	void *first_ele = (char*)base;
	//printf("\n\n %d",(char*) first_ele);
	void *last_ele = (char*)base + (n-1) * size;
	//printf("\n\n %d\n",(char*) last_ele);
	void *mid_ele = (char*)base + (mid) * size;
	//printf("\n\n mid add = %d\n",(char*) mid_ele);
	
	/*while((char*)first_ele <= (char*)last_ele){
		if(CmpFn()){
			printf("\nfound \n");
			break;
		}
		else if(CmpFn(mid_ele, key) == -1){
			
		}
		else if(CmpFn(mid_ele, key) == -2){
			
		}
	}*/

	//printf("%d\n", *(int*)base);


	while((int*)first_ele <= (int*)last_ele){
		if(*(int*)mid_ele == *(int*)key){
			printf("\nElement found at position : %d\n",mid+1);
			break;
		}
		else if(*(int*)key > *(int*)mid_ele){
			*first_ele = *mid_ele;

		}

		first_ele += size;
	}

	return NULL;	

}

int main(void){

	int size = 5;
	int arr[] = {45,55,200,500,530};

	printf("\n---%d---\n",arr);

	printf("elements : \t");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	int key;

	printf("Enter the element to search : \t");
	scanf("%d",&key);
	
	//printf("last ele %d\n\n",arr[size-1]);
	//printf("last ele add %d\n\n",&arr[size-1]);
	//printf("mid add = %d\n",&arr[2]);


	int *ret = BSearch(&key, arr, size, sizeof(int), CmpFn);

	return 0;
}
