#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int num=0;
	int space=0;
	
	while(num<10){
		space=0;
		while(space <num){
			printf(" ");
			space=space+1;
		}
		
			printf("%d\n",num);
			num = num+1;
		}
		return 0;
	}


