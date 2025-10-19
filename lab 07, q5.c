#include <stdio.h>
int main(){
	int array[10], max,min,i;
	for(i=0; i<10; i++){
		printf("Enter a number:");
		scanf("%d",& array[i]);
	}
	max= array[0];
	min= array[0];
	for (i=1;i<10;i++){
		if (max< array[i]){
			max= array[i];
		}
		if (min> array[i]){
			min= array[i];
		}
	}
	printf("\nThe difference between the max and min number entered is %d", max-min);
	return 0;
}
