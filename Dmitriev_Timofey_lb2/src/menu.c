#include "index_first_zero.h"
#include "index_last_zero.h"
#include "sum_between.h"
#include "sum_before_and_after.h"
#include <stdio.h>

int main(){
	int choose;
	int arr[100];
	int number=0;
	scanf("%d",&choose);
	do{
		scanf("%d",&arr[number]);
		number++;
	}while(getchar()!='\n' && number < 100);
	switch(choose){
		case 0:
			printf("%d\n", index_first_zero(arr,number));
			break;
		case 1:
			printf("%d\n", index_last_zero(arr,number));
			break;
		case 2:
			printf("%d\n", sum_between(arr,number));
			break;
		case 3:
			printf("%d\n", sum_before_and_after(arr,number));
			break;
		default:
			printf("Данные некорректны\n");
		}
		return 0;
	}
