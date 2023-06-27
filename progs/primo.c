#include <stdio.h>

void main() {
	int x, n, d;
	x = 10;
	while (x!= 0) {
	scanf("%d",&n);
	if(x==0) break;
	x = 0;
	for(x=2;x<n;x++) {
		printf("%d\n",x);
		if(n % x == 0) break;	
	}
	if(x<n) printf("Nao eh primo\n");
	else printf("Eh primo\n");
	}
}
