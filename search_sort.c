#include "search_sort.h"

#define FOUND 1
#define NOT_FOUND 0
#define SORTED 1
#define NOT_SORTED 0

// YOYO 
void printList(int feed[], int feedSize){
	printf("{");
	for(int i=0; i<feedSize; i++){
		printf("%d", feed[i]);
		if(i != (feedSize - 1)){
			printf(", ");
		} else {
			printf("}");
		}
	}
	putchar('\n');
}

/* BinarySearch() takes a list of sorted integers and returns a 1 if target was found,
 * otherwise returns 0
 */
int BinarySearch(int feed[], int feedSize, int target, int *index)
{
	int lower = 0, middle = feedSize / 2, upper = feedSize; // indexing
	

	while (1) {
		if (feed[middle] == target){
			*index = middle;
			return FOUND;
		} else if (lower == upper) { 
			return NOT_FOUND;
		} else if (feed[middle] > target) {
			upper = middle - 1;
			middle = (lower + upper) / 2;
		} else if (feed[middle] < target) {
			lower = middle + 1;
			middle = (lower + upper) / 2;
		}
		
	}
}

/* BubbleSort() takes a list of integers, and orders it based on user configuration 
 *
 */
int BubbleSort(int feed[], int size)
{
	int temp = 0, is_sorted = NOT_SORTED;
	
	for(int i=1; i < size; i++) {
		if(feed[i-1] > feed[i]){
			temp = feed[i];
			feed[i] = feed[i-1];
			feed[i-1] = temp;
			i = 0;
		}

	}
	return SORTED;
}

