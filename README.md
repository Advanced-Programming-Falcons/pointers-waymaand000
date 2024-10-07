

Objective:

In this assignment, you will:

Dynamically create an array using a pointer.
Use pointer arithmetic to iterate over the array.
Modify the array by adding values and shifting the array elements.
Deallocate the memory used by the array.
Problem Statement:

You are tasked with writing a C++ program that:

Dynamically allocates an integer array of a user-defined size using a pointer.
Initializes the array elements with values that are double the index (e.g., if the index is 0, the value should be 0; if the index is 1, the value should be 2, and so on).
Prints the array values using pointer arithmetic (not the array indexing syntax).
Modifies the array by adding 5 to each element.
Shifts the elements of the array to the right by one position, with the last element wrapping around to the front.
Prints the modified array after the shifting operation.
Deallocates the memory using delete[] after all operations are completed.
Example Run:
Enter the size of the array: 5 Original array values: 0 2 4 6 8 Modified array (each element +5): 5 7 9 11 13 Array after shifting to the right: 13 5 7 9 11
Requirements:
Dynamic Memory Allocation: Use new to allocate the array and delete[] to free the memory at the end of the program.
Pointer Arithmetic: Use pointer arithmetic to iterate over and modify the array.
Array Modification: Modify the array as per the steps above.
Array Shifting: Implement logic to shift array elements to the right.
Hints and Guidelines:

Step 1: Dynamic Allocation

Use new to allocate the array. The size of the array will be input by the user.

Step 2: Initialization

Initialize the array values such that each element is double its index. For example, the array arr should look like this for size 5:
arr[0] = 0 arr[1] = 2 arr[2] = 4 arr[3] = 6 arr[4] = 8

Step 3: Pointer Arithmetic

Use pointer arithmetic to iterate through the array and print the values.

Step 4: Modify Array

Add 5 to each array element using pointer arithmetic.

Step 5: Array Shifting

To shift the elements to the right, store the last element in a temporary variable and shift all the other elements by one position. Then, place the temporary value in the first position.

Step 6: Deallocate Memory

Use delete[] to deallocate the dynamically allocated memory.
