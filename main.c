#include "search_sort.h"

int main(void)
{
	int num_elements = 0, temp = 0, status = 0, index = 0;

	printf("Bubble Sort and Binary Search\n\n");
	printf("How many elements would you like: ");
	scanf("%d", &num_elements);
	int inputFeed[num_elements];

	for(int i=0; i < num_elements; i++){
		printf("(element %d out of %d): ", i, num_elements);
		scanf(" %d", &temp);
		inputFeed[i] = temp;
	}

	putchar('\n');
	printf("List entry completed...\n");
	printList(inputFeed, num_elements);

	printf("Running BubbleSort()...\n");
	BubbleSort(inputFeed, num_elements); 	
	printf("BubbleSort() is done...\n");

	printf("Enter a number to search for: \n");
	scanf(" %d", &temp);

	status = BinarySearch(inputFeed, num_elements, temp, &index);
	if(status == 1){
		printf("BinarySearch() ran successfully...\n");
		printf("%d was found at index %d\n", temp, index);
	} else {
		printf("%d was not found in the list\n", temp);
	}

	printList(inputFeed, num_elements);

	return 0;
}
