#include <stdio.h>

int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);

	int s = 1;

	for(int i=1;i<=n;i++){
		s = s*i;
	}
	printf("S=%f",s);
}