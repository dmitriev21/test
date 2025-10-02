#include "index_first_zero.h"
#include "index_last_zero.h"
#include <stdlib.h>

int sum_before_and_after(int arr[], int size){
	int sum = 0;
	int first_index = index_first_zero(arr,size);
	int last_index = index_last_zero(arr,size);
	if(first_index == -1 && last_index == -1){
		return 0;

	}
	if(first_index != -1){
		for(int i = 0; i < first_index; i++){
			sum += abs(arr[i]);
		}
	}
	if(last_index != -1){
		for(int i = last_index; i < size; i++){
			sum += abs(arr[i]);
		}
	}
	return sum;
}

