#include <stdio.h>

int main(){
	int c;
	int h;
	int i,j;
	
	c=16;
	h=1;
	for(i=1;i<=8;i++){
		for(j=1;j<c-1;j++)
			printf(" ");
		for(j=i;j<=h;j++)
			printf("%d ",j%10);
		for(j=h-1;j>=i;j--)
			printf("%d ",j%10);
		c-=2;
		h+=2;
		printf("\n");
	}
}
