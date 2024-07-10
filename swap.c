#include <stdio.h>
#include <string.h>

void swap(void *vp1, void *vp2, int size){
	char buffer[size];

	memcpy(buffer, vp1, size);
	memcpy(vp1, vp2, size);
	memcpy(vp2, buffer, size);
}


int main(void){
	
	//int a=1;
	//int b=2;
	//swap(&a,&b,sizeof(int));
	//printf("\n a value is %d b value is %d\n",a,b);


	/*
	 *
		int c=44;
		short s=5;
		swap(&c,&s,sizeof(short));

	*/

	char *aval = strdup("first string");
	char *bval = strdup("second string");

	//printf("\n addr of aval is %d and bval is %d\n",aval, bval);
	//printf("\n addr of *aval is %d and *bval is %d\n",&aval, &bval);
	swap(&aval, &bval, sizeof(char*));
	
	/*
	 * printf("size of char* is %d\n",sizeof(char*));

	printf("size of int* is %d\n",sizeof(int*));

	*/
	printf("\nafter swap a = %s and b = %s\n",aval,bval);

	return 0;
}
