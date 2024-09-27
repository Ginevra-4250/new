#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b, c, max;
	scanf_s("%d%d%d", &a, &b, &c); 
	if(a>b)
	{
		max = a;
		}
	else {
		max = b;
	}
	if(max<c){
		max = c;
	}
	
	{
		printf("max=%d\n", max);
}
	return 0;
}
