#include <stdio.h>
#include <stdlib.h>
// Interval structure definition
struct Interval
{
    int start;
    int end;
};
// Function to compare two intervals based on their start times
int compareIntervals(const void *a, const void *b)
{
    return ((struct Interval *)a)->start - ((struct Interval *)b)->start;
}
// Function to merge overlapping intervals
struct Interval *mergeIntervals(struct Interval *intervals, int n, int *resultSize)
{
    if (n <= 0)
    {
        *resultSize = 0;
        return NULL;
    }
    // Sort intervals based on start times

    qsort(intervals, n, sizeof(struct Interval), compareIntervals);
    // Initialize the merged result with the first interval
    struct Interval *result = (struct Interval *)malloc(n * sizeof(struct Interval));
    int i, j;
    result[0] = intervals[0];
    *resultSize = 1;
    // Merge overlapping intervals
    for (i = 1; i < n; i++)
    {
        if (intervals[i].start <= result[*resultSize - 1].end)
        {
            // Merge the current interval with the last interval in result
            result[*resultSize - 1].end = (intervals[i].end > result[*resultSize - 1].end) ? intervals[i].end : result[*resultSize - 1].end;
        }
        else
        {
            // Add the current interval to the result
            result[*resultSize] = intervals[i];
            (*resultSize)++;
        }
    }
    return result;
}

int main()
{
    struct Interval intervals[] = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    int n = sizeof(intervals) / sizeof(intervals[0]);
    int resultSize = 0;
    struct Interval *mergedIntervals = mergeIntervals(intervals, n, &resultSize);
    printf("Merged Intervals: [");
    for (int i = 0; i < resultSize; i++)
    {
        printf("[%d, %d]", mergedIntervals[i].start, mergedIntervals[i].end);
        if (i < resultSize - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");
    free(mergedIntervals); // Free allocated memory
    return 0;
}