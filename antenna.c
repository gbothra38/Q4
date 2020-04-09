#include<stdio.h>
#include<stdlib.h>
void range_of_antenna(int no_of_houses,int *houses,int *range_array){
	int i=0,j=0,count=0;
	for(i=0;i<no_of_houses;i++){
		j=i-1;
		count=1;
		if(i==0){
			range_array[i]=count;
		}
		else{
			while(j>=0 && houses[j]<=houses[i]){
				count++;
				j--;
			}
			range_array[i]=count;
		}
	}
}

int main(){
	int *houses,no_of_houses,i,*range_array;
	scanf("%d",&no_of_houses);
	houses=(int*)malloc(sizeof(int)*no_of_houses);
	range_array=(int*)malloc(sizeof(int)*no_of_houses);
	for(i=0;i<no_of_houses;i++){
		scanf("%d",&houses[i]);
	}
	range_of_antenna(no_of_houses,houses,range_array);
	for(i=0;i<no_of_houses;i++){
		printf("%d ",range_array[i]);
	}
	return 0;
}