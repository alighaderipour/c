#define PI  3.14
#include <stdio.h>
float area(float r){
	return PI * r * r ;
}
int main(){
	float n ;
	printf("enter a radius\n");
	scanf("%f", &n);
	printf("%f\n",area(n));
	return 0;
}
