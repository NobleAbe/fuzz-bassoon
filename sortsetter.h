#ifndef SORTSETTER_H
#define SORTSETTER_H

#include "insertionsort.h"
#include "quicksort.h"
#include "heapsort.h"
#include "mergesort.h"
#include "bucketsort.h"

#include <ctime>
#include <chrono>
#include <time.h>

typedef std::chrono::high_resolution_clock Clock;

template <typename T>
class sortSetter
{
public:
    void setSort(T *arr, int l, int r);
    void setSortDecend(T *arr, int l, int r);

    void setSort(T *arr, int length);
    void setSortDecend(T *arr, int length);

    void merge(T *arr, int left, int right);
    void mergeDecend(T *arr, int left, int right);

    void heap(T *arr, int length);
    void heapDecend(T *arr, int length);

    void quick(T *arr, int l, int r);
    void quickDecend(T *arr, int l, int r);

    void insertion(T *arr, int length);
    void insertionDecend(T *arr, int length);

    void bucket(T *arr, int length);
    void bucketDecend(T *arr, int length);

    int getIteration();
    void setIteration(int it);
    std::string whichOne(T *arr, int left, int right);

protected:
    typedef T type;

private:
    int iteration;


};
#include "sortsetter.cpp"

#endif // SORTSETTER_H
