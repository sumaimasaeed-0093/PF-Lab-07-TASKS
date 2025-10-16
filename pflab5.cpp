#include <stdio.h>

int main(){
    int i;
   	int num;
	printf("Enter table num");
	scanf("%d", &num);
    for(i=1;i<=num;i++){
    	printf("%d\tx\t%d\t=\t%d\n", num, i, i*num);
	}
    return 0;
}
