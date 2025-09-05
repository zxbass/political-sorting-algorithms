#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>

void woke_sort(int64_t *arr, const int64_t len)
{
    fprintf(stderr, "All numbers are equal, you fascist fuck!");
    exit(1);
}

void dei_sort(int64_t *arr, const int64_t len)
{
    int64_t swap;

    for (size_t i = 0; i < len-1; ++i) {
        for (size_t j = i+1; j < len; ++j) {
            // we sort array, but in the opposite order from what is asked
            // to empower the smallest ones. 
            if (arr[i] < arr[j]) {
                swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }
}

void putin_sort(int64_t *arr, int64_t *len)
{
    int64_t swap;

    // take half of the items for government needs (war, prisons, tortures)
    *len = (*len)/2;

    for (size_t i = 0; i < (*len)-1; ++i) {
        for (size_t j = i+1; j < (*len); ++j) {
            if (arr[i] > arr[j]) {
                swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }

}

void maga_sort(int64_t *arr, const int64_t len)
{
    int64_t swap;

    for (size_t i = 0; i < len-1; ++i) {
        for (size_t j = i+1; j < len; ++j) {
            if (arr[i] < arr[j]) {
                swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
            // actually fuck it, it's better to doomscroll all day
            // we won't release the array
            j = i+1;
            break;
        }
    }
}

void fasc_sort(int64_t *arr, int64_t *len)
{
    int64_t swap;

    for (size_t i = 0; i < (*len)-1; ++i) {
        for (size_t j = i+1; j < (*len); ++j) {
            if (arr[i] > arr[j]) {
                swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }
    
    // get rid of half of the smallest items
    *len = (*len)/2;
}

void commie_sort(int64_t *arr, const int64_t len)
{
    for (size_t i = 0; i < len; ++i) {
        // 5 is enough for everyone, according to our plan
        arr[i] = 42;
    }
}

void socialist_sort(int64_t *arr, const int64_t len)
{
    // STUB: can't implement, seems, it won't work
}
