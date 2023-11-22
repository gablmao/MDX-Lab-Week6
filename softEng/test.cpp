#include <iostream>

using namespace std;

int main() {
    cout << "h" << endl;
    return 0;
}

/*
TODAY'S LECTURE: ARRAYS AND POINTERS WOOOOOOOOOOOOOOOOOOW

arrays:
> static data structure
    > can store one data type of data
    > size of array cannot change from outside
        > must be declared when initially made

pointers:
> some index thing that points to an item in an array
> can be used to get the exact address the item is stored in memory
> can "convert" this to output the item stored in memory
> can use this to update the part in memory pointed



> to initialise a pointer, use *
> & --> address operator
    > e.g., 
    int T = 5;
    int* ptr_to_T = &T;
    > assigned a pointer to variable
        > to output the value, use * again on the variable above
            > also known as dereferencing 


> dereferencing is useful for updating variables
    > e.g., using same code from above
    *ptr_to_T = 10;
    cout << T;
        > int T will now be 10 instead of 5


> like with arrays, you can use pointers to output the item it's pointing
    > cout << array[3]
        > fourth element in array
    > cout << *(array_ptr + 3)
        > fourth element in array
        > without the * operator, it outputs the address

> lol


double average(int values[], intsize); --> pass by value
    > a copy of a initial array
double average(int* values, intsize); --> pass by reference
    > you are directly accessing the array, value



C Strings:
> strings are basically an array of characters
    > for every string, its array ends with 'null'

> because pointers are copies of the variable they were assigned 
size-wise, if you were to delete the variable the pointer wouldn't 
be deleted
    > this leads to space being used when it shouldn't be occupied
    > this also applies when used on arrays
    > to delete, write:
        > delete var_ptr;
        > delete[] var_ptr;

> use 'new' to create new space in memory and allocate data there
    > for every 'new' there must be a 'delete'
> if one array is full, you can copy the items in this array to a 
larger array using 'new'



Resizeable Array:
> int* data = new int[size];
> int* bigger = new int[size * 2];
> use for loop to copy data to bigger
    > bigger[i] = data[i];
> delete the smaller array as it's not needed anymore
    > delete[] data;

Memory Leak:
> when memory is storing space with nothing
    > using up space when it shouldn't be, so you run out of space
    leading to program not working


struct:
> when you want to store multiple types of data in one data structure
    > use 'struct'

> array of structures
> pointers in struct
    > -> = arrow operator
        > use this to assign in struct
*/