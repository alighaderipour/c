#include <stdio.h>
int main(){
	int lower, step, upper, far, cels;
	lower =0;
	far = 0 ;
	cels = 0;
	step = 20;
	upper = 300;
	while(far <= upper){
		cels = 5* (far - 32) /9;
		printf("%d\t%d\n", far, cels);
		far = far + step ;
	}
}
