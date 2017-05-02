#ifndef RECURSION_H
#define RECURSION_H
int binary_search(int, int, int, int);

int binary_search(int list, int low, int high, int target){
	int mid = (low + high) / 2;
	
	if (list[mid] == target){
		return mid;
	} else if (list[mid] < target){
		binary_search(list, mid + 1, high, target);
	} else {
		binary_search(list, low, mid - 1, target);
	}
}
#endif
