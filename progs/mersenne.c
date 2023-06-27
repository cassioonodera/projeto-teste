#include <stdio.h>

void main() {
	long int x, n, d, mers;
	n = 10;
	while (n!= 0) {
		scanf("%d",&n);
		if(n == 0) break;
		for(x=0;x<n;x++) {
			if(x==0) mers = 2;
			else mers = mers * 2;
		}
		mers = mers - 1;
		printf("%do. numero de Mersenne: %d\n\n",n,mers);
		printf("======================================\n\n");
	}
}
