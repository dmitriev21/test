#include "index_first_zero.h"
#include "index_last_zero.h"
#include <stdlib.h>

int sum_between(int arr[], int size){
	int sum = 0;
	int first_index = index_first_zero(arr,size);
	int last_index = index_last_zero(arr,size);

	if(first_index == -1 || last_index == -1 || first_index >= last_index){
                return 0;
        }


	for(int i = first_index + 1; i < last_index; i++){
		sum+= abs(arr[i]);
	
	}

	return sum;

}
