#include "Set.h"

struct set {
    int *arr;
    int numElems;
    int capacity;
};

#define INITIAL_CAPACITY 8

// Creates a new empty set
Set SetNew(void) {  // constructor
    Set s = malloc(sizeof(struct set));
    s->arr = malloc(INITIAL_CAPACITY * sizeof(int));
    s->numElems = 0;
    s->capacity = INITIAL_CAPACITY;
}

// Frees memory allocated to the set
void SetFree(Set s) {  // destructor
    free(s->arr);
    free(s);
}

// Inserts an element into the set
void SetInsert(Set s, int elem) {
    if (SetContains(s, elem)) return;

    if (s->numElems == s->capacity) {
        s->arr = realloc(s->arr, 2 * s->capacity * sizeof(int));
        s->capacity *= 2;
    }

    s->arr[s->numElems++] = elem;
}

// Deletes an element from the set
void SetDelete(Set s, int elem) {
    // search through the arr and delete
}

// Returns true if the given element is in the set, and false otherwise
bool SetContains(Set s, int elem) {
    // search through the arr and return true if found
}

// Returns the number of elements in the set
int SetSize(Set s) {
    return s->numElems;
}