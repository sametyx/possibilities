#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int step=0,us=1,z;

int calculate(int);
int powCal(int);

int main(int argc, char *argv[0]){
	
	int n;
	printf("Please enter n: ");
	
	do{
		scanf("%d",&n);
		if(n<2)
			printf("Value must be at least 2!\nEnter again: \n");
	}while(n<2);
	
	printf("Possibilities: %d\n",calculate(n));
	
}

int calculate(int x){
	
	if(x<2)
		return x;
	else
		z=powCal(x)/x;
	
	return x*z*calculate(x-1);
	
}

int powCal(int y){
	int multiply=1;
	if (step!=0){
		us=us+step*6;
		step++;
	}
		
	else{
		us=1;
		step++;
	}
		
	
	for(int i=0;i<us;i++){
		multiply*=y;
	}
	
	if(multiply<2)
		return y;
	else
		return multiply;
}
