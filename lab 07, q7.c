#include <stdio.h>
int main(){
	int id[10], frequency[1000]={
	0}, i;
	for(i=0;i<10;i++){
		printf("Enter id:");
		scanf("%d",&id[i]);
	}
	for(i=0;i<10;i++){
	frequency[id[i]]=	frequency[id[i]]+1;
	if (frequency[id[i]]>1){
		id[i]=-1;
	}
	}
		for(i=0;i<10;i++){
		printf("\n %d", id[i]);
	}
	return 0;
}
