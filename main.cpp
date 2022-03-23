#include <iostream>
#include <stdlib.h>
#include <time.h>

void BubbleSort(int DataSet[], int Length){
	int i=0;
	int j=0;
	int temp=0;
	
	for(i=0;i<Length-1;i++){
		for(j=0;j<Length-(i+1);j++){
			if(DataSet[j]>DataSet[j+1]){
				temp = DataSet[j+1];
				DataSet[j+1] = DataSet[j];
				DataSet[j] = temp;
			}
		}
	}
}

int main(int argc, char** argv) {
	srand(time(NULL));
	int DataSet[10000] = {0};
	//int Length = sizeof(DataSet)/sizeof(DataSet[0]);
	int i=0;
	
	for(i=0;i<10000;i++){
		DataSet[i] = rand();	
	}
	BubbleSort(DataSet, 10000);
	
	for(i=0;i<10;i++){
		printf("%d\n",DataSet[i]);
	}
	
	

	/*
	for(i=0;i<10;i++){
		printf("%d",DataSet[i]);
	}
	printf("\n");
	*/
	return 0;
}
