#include <stdio.h>
int main(void){
	int i,n,nstars,nspaces;
	printf("Enter size: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(nspaces=1;nspaces<=i-1;nspaces++){
			printf(" ");
		}
		for(nstars=1;nstars<=n+1-i;nstars++){
			printf("*");
		}
		printf("\n");
	}
}
