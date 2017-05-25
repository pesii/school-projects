#ifndef SEARCH_AND_SORT

#define SEARCH_AND_SORT
#include <stdio.h>


/* The Sorting algorithms assumes a pointer to an array of strings
 * Search algorithms assumes a list of integers
 */
int BinarySearch(int feed[], int feedSize, int target, int *index);
void SequentialSearch();
void printList(int feed[], int feedSize);
int BubbleSort(int feed[], int size);

// Extra algorithms
void MergeSort();
void QuickSort();



#endif
