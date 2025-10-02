int index_last_zero (int arr[], int size){
	int l = -1;
	for (int i = 0; i<size; i++){
		if (arr[i]==0)
			l = i;
	}
	return l;
}
