// Header file to created template binary_search function
#ifndef RECURSION_H
#define RECURSION_H
/*
int binary_search(int list[], int low, int high, int target){
	int mid = (low + high) / 2;
	
	if (list[mid] == target){
		return mid;
	} else if (list[mid] < target){
		binary_search(list, mid + 1, high, target);
	} else {
		binary_search(list, low, mid - 1, target);
	}
}
*/

// Template function to find a value target within an array
template <class T>
T binary_search(T list[], int low, int high, T target){
	int mid = (low + high) / 2;
	
	if(list[mid] == target){
		return mid;
	} else if (list[mid] < target){
		return binary_search(list, mid + 1, high, target);
	} else {
		return binary_search(list, low, mid - 1, target);
	}
}
#endif
