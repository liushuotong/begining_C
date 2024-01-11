// ------------------------- //
// liushuotong               //
// ------------------------- //
// vector.h                  //
// ------------------------- //

#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define EXIT_FAILURE 1
#define INITIAL_CAPACITY 10
// constant definition

typedef struct {
    int* data;
    // data pointer to an array
    // it is a pointer to an array of integers or vectors
    unsigned int size;
    // number of elements
    // it is the number of elements in the array(except the null element)
    unsigned int capacity;
    // capacity of the array
    // it is the number of elements that can be stored in the array
    // it is the maximum number of elements that can be stored in the array
} vector;
// ------------------------ //
// vector struct            //
// data: int*               //
// size: unsigned int       //
// capacity: unsigned int   //
// ------------------------ //

void arr2vector(int* arr, vector* vec);
// ---------------------------------- //
// arr2vector function arr2vector     //
// type: void                         //
// function name: arr2vector          //
// parameters: int* arr, vector* vec  //
// returns: void                      //
// ---------------------------------- //

void* dynamicMemoryAllocated(unsigned int);
// ---------------------------------------------------- //
// initialization function dynamicMemoryAllocated(void) //
// type: void                                           //
// function name: dynamicMemoryAllocated                //
// parameters: unsigned int                             //
// how many bytes to allocate                           //
// returns: void*                                       //
// return a pointer to the allocated memory             //
// ---------------------------------------------------- //

void initVector(vector*);
// ---------------------------------- //
// initialization function initVector //
// type: void                         //
// function name: initVector          //
// parameters: vector*                //
// returns: void                      //
// ---------------------------------- //

void freeVector(vector*);
// ---------------------------------- //
// free function freeVector           //
// parameters: vector*                //
// type: void                         //
// function name: freeVector          //
// returns: void                      //
// ---------------------------------- //

void push_back(vector*, int);
// ---------------------------------- //
// push_back function push_back       //
// type: void                         //
// function name: push_back           //
// parameters: vector*                //
//             int                    //
// returns: void                      //
// ---------------------------------- //

void pop_back(vector*);
// ---------------------------------- //
// pop_back function pop_back         //
// type: void                         //
// function name: pop_back            //
// parameters: vector*                //
// returns: void                      //
// ---------------------------------- //

void expend(vector*, unsigned int);
// ---------------------------------- //
// expend function expend             //
// type: void                         //
// function name: expend              //
// parameters: vector*                //
//             unsigned int           //
// returns: void                      //
// ---------------------------------- //

vector* vectorMerge(vector*, vector*, bool);
// ---------------------------------- //
// vectorMerge function vectorMerge   //
// type: vector*                      //
// function name: vectorMerge         //
// parameters: vector*                //
//             bool                   //
// returns: vector*                   //
// ---------------------------------- //

void sort(unsigned int, unsigned int, vector*, bool);
// ---------------------------------- //
// sort function sort                 //
// type: void                         //
// function name: sort                //
// parameters: unsigned int           //
//             vector*                //
//             bool                   //
// returns: void                      //
// ---------------------------------- //

void swap(int*, int*);
// ---------------------------------- //
// swap function swap                 //
// type: void                         //
// function name: swap                //
// parameters: int*                   //
//             int*                   //
// returns: void                      //
// ---------------------------------- //

// ================================== //
// from small to big                  //
// ---------------------------------- //

void merge(vector*, int, int, int);
// ---------------------------------- //
// merge function merge               //
// type: void                         //
// function name: merge               //
// parameters: vector*                //
//             int                    //
//             int                    //
//             int                    //
// returns: void                      //
// ---------------------------------- //

void mergeSort(vector*, int, int);
// ---------------------------------- //
// mergeSort function mergeSort       //
// type: void                         //
// function name: mergeSort           //
// parameters: vector*                //
//             int                    //
//             int                    //
// returns: void                      //
// ================================== //

// ================================== //
// from big to small                  //
// ---------------------------------- //

void Mergesort(vector*, int, int);
// ---------------------------------- //
// Mergesort function Mergesort       //
// type: void                         //
// function name: Mergesort           //
// parameters: vector*                //
//             int                    //
//             int                    //
// returns: void                      //
// ---------------------------------- //

void Merge(vector*, int, int, int);
// ---------------------------------- //
// Merge function Merge               //
// type: void                         //
// function name: Merge               //
// parameters: vector*                //
//             int                    //
//             int                    //
//             int                    //
// returns: void                      //
// ================================== //

void erase(vector*, unsigned int);
// ---------------------------------- //
// erase function erase               //
// type: void                         //
// function name: erase               //
// parameters: vector*                //
//             unsigned int           //
// returns: void                      //
// ---------------------------------- //

void unique(vector*);
// ---------------------------------- //
// unique function unique             //
// type: void                         //
// function name: unique              //
// parameters: vector*                //
// returns: void                      //
// ---------------------------------- //

int* max_elements(vector*);
// ---------------------------------- //
// max_elements function max_elements //
// type: int*                         //
// function name: max_elements        //
// parameters: vector*                //
// returns: int*                      //
// ---------------------------------- //

int* min_elements(vector*);
// ---------------------------------- //
// min_elements function min_elements //
// type: int*                         //
// function name: min_elements        //
// parameters: vector*                //
// returns: int*                      //
// ---------------------------------- //

vector* vectorMerge(vector*, vector*);
// ---------------------------------- //
// vectorMerge function vectorMerge   //
// type: vector*                      //
// function name: vectorMerge         //
// parameters: vector*                //
//             vector*                //
// returns: vector*                   //
// ---------------------------------- //

void hashmap(vector* vec);
// ---------------------------------- //
// hashInVector function hashInVector //
// type: void                         //
// function name: hashInVector        //
// parameters: vector*                //
// returns: void                      //
// ---------------------------------- //

void arr2vector(int *arr,vector* vec) {
    initVector(vec);
    // initialize vector
    int elements = (int)(sizeof(arr)/sizeof(int));
    for (int i = 0; i < elements; i++) {
        push_back(vec, arr[i]);
    }
    vec->capacity = ((int)elements/INITIAL_CAPACITY + 1)*INITIAL_CAPACITY;
    vec->size = elements;
    // set capacity and size
}

void initVector(vector *vec) {
    unsigned int bytes = INITIAL_CAPACITY * sizeof(int);
    // calculate the number of bytes to allocate
    vec->data = (int*)dynamicMemoryAllocated(bytes);
    // allocate memory
    vec->size = 0;
    // set size to 0
    vec->capacity = INITIAL_CAPACITY;
    // set capacity to INITIAL_CAPACITY
}

void freeVector(vector *vec) {
    free(vec->data);
    // free memory
    if (vec != NULL){
        int timeCheck = 0;
            while (vec != NULL) {
            printf("Memory freed error.\n");
            printf("Memory address: %p\n", vec->data);
            // print message
            freeVector(vec);
            timeCheck+=1;
            // set timeCheck +1
                if (timeCheck == 3) {
                    // if timeCheck is 3, exit
                    printf("failed to free.\n");
                    exit(EXIT_FAILURE);
                }
            }
    }// check if vec is not NULL
    vec->size = 0;
    // set size to 0
    vec->capacity = 0;
    // set capacity to 0
}

void push_back(vector *vec, int value) {
    if (vec->size == vec->capacity) {
        expend(vec, INITIAL_CAPACITY);
        // if size is equal to capacity, expend
        // set capacity to capacity + INITIAL_CAPACITY
        vec->capacity += INITIAL_CAPACITY;
        // set capacity to capacity + INITIAL_CAPACITY
        *(vec->data +(vec->size+1)) = value;
    }
    vec->data[vec->size] = value;
    // set data to value
    vec->size = vec->size + 1;
    // set size to size + 1
}

void pop_back(vector *vec) {
    *(vec->data +(vec->size)) = NULL;
    // set *(vec->data +(vec->size)) to NULL
    vec->size = vec->size - 1;
    // set size to size - 1

}

void expend(vector *vec, unsigned int expendSpace) {
    unsigned int bytes = ((int)expendSpace/INITIAL_CAPACITY + 1) * sizeof(int);
    vec->data = (int*)realloc(vec->data, bytes);
    // reallocate memory
    if (vec != NULL){
        int timeCheck = 0;
            while (vec != NULL) {
            printf("Memory freed error.\n");
            printf("Memory address: %p\n", vec->data);
            // print message
            freeVector(vec);
            timeCheck+=1;
            // set timeCheck +1
                if (timeCheck == 3) {
                    // if timeCheck is 3, exit
                    printf("failed to free.\n");
                    exit(EXIT_FAILURE);
                }
            }
    }// check if vec is not NULL
    vec->capacity += expendSpace;
    // set capacity to capacity + expendSpace
}

vector* vectorMerge(vector *vec1, vector *vec2, bool freeOrNot) {
    vector *vec3;
    initVector(vec3);
    // initialize vector 3
    if (freeOrNot = true) {
        // if freeOrNot is true
        freeVector(vec1);
        freeVector(vec2);
        // free vector 1 and 2
    }
    return vec3;
    // return vector 3
}

void* dynamicMemoryAllocated(unsigned int bytes) {
    void* ptr = malloc(bytes);
    // allocate memory
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    // check if memory is allocated
    // if not, exit
    printf("Memory allocated successfully.\n");
    printf("Memory address: %p\n", ptr);
    // print message
    return ptr;
    // return the pointer
}

void hashmap(vector *vec) {
    int max = *max_elements(vec);
    int min = *min_elements(vec);
    int range = max - min + 1;
    int* hash = (int*)dynamicMemoryAllocated(range * sizeof(int));
    for (int i = 0; i < range; i++) {
        hash[i] = 0;
        for (int j = 0; j < vec->size; j++) {
            if (*(vec->data + j) == min + i) {
                hash[i] += 1;
            }
        }
    }
}

void sort(unsigned int begin,unsigned int end,vector *vec,bool sortWay) {
    if (begin >= end && abs((int)(begin - end)) != 1) {
        printf("Sort failed.\n");
        printf("Can not set the begin index smaller than end index or equal to end index.\n");
        printf("The start and end of the setup cannot be adjacent to each other.\n");
        printf("Please use swap() function, if start and end are adjacent to each other.\n");
        printf("Please check the parameters.\n");
        exit(EXIT_FAILURE);
    }
    else {
        if (sortWay == true) {
            unsigned int mid = (int)((begin + end) / 2);
            mergeSort(vec, begin, end);
            // merge sort
            // from begin to end
            // small to big
        }
        if (sortWay == false) {
            unsigned int mid = (int)((begin + end) / 2);
            Mergesort(vec, begin, end);
            // merge sort
            // from begin to end
            // big to small
        }
    }
    
}

void swap(int *a,int *b) {
    if (*a != *b) {
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
        // swap a and b
        // using either or
    }
}

void merge(vector *vec, int begin, int mid, int end) {
    int i, j, k;
    // define loop variables
    int n1 = mid - begin + 1;
    // calculate the number of elements in the first part L
    int n2 = end - mid;
    // calculate the number of elements in the second part R
    int L[n1], R[n2];
    // define arrays L and R to store the data temporarily
    // in the same time, merge the vector into L and R two parts
    for (i = 0; i < n1; i++)
        L[i] = *(vec->data + (begin + i));
    for (j = 0; j < n2; j++)
        R[j] = *(vec->data + (mid + 1 + j));
    // set the arrays L and R
    i = 0;
    j = 0;
    k = begin;
    // set loop variables to compare
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            *(vec->data + k) = L[i];
            i++;
        } else {
            *(vec->data + k) = R[j];
            j++;
        }
        k++;
    }
    // merge the two parts
    // compare the elements in L and R
    // and merge them into the vector
    while (i < n1) {
        *(vec->data + k) = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        *(vec->data + k) = R[j];
        j++;
        k++;
    }

}
void mergeSort(vector *vec, int begin, int end) {
    if (begin < end) {
        int mid = begin + (end - begin) / 2;
        mergeSort(vec, begin, mid);
        mergeSort(vec, mid + 1, end);
        merge(vec, begin, mid, end);
    }
}
// small to big

void Merge( vector *vec, int begin, int mid, int end) {
    int i, j, k;
    int n1 = mid - begin + 1;
    int n2 = end - mid;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = *(vec->data + (begin + i));
    for (j = 0; j < n2; j++)
        R[j] = *(vec->data + (mid + 1 + j));
    i = 0;
    j = 0;
    k = begin;
    while (i < n1 && j < n2) {
        if (L[i] >= R[j]) {
            *(vec->data + k) = L[i];
            i++;
        } else {
            *(vec->data + k) = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        *(vec->data + k) = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        *(vec->data + k) = R[j];
        j++;
        k++;
    }
}

void Mergesort(vector *vec, int begin, int end) {
    if (begin > end) {
        int mid = begin + (end - begin) / 2;
        Mergesort(vec, begin, mid);
        Mergesort(vec, mid + 1, end);
        Merge(vec, begin, mid, end);
    }
}

int* max_elements(vector* vec) {
    int i,j;
    for (j = 0; j < vec->size; j++) {
        for (i = j + 1; i < vec->size; i++) {
            if (*(vec->data + j) < *(vec->data + i)) {
                swap(&i,&j);
                break;
            }
        }
    }
    return (vec->data + i);
}


int* min_elements(vector* vec) {
    int i,j;
    for (j = 0; j < vec->size; j++) {
        for (i = j + 1; i > vec->size; i++) {
            if (*(vec->data + j) < *(vec->data + i)) {
                swap(&i,&j);
                break;
            }
        }
    }
    return (vec->data + i);
}