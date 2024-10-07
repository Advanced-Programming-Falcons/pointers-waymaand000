#include <iostream>
using namespace std;


int main(void){
    int size;

    cout << "how many numbers?" << endl;
    cin >> size;

    int* array = new int[size];
    
    for (int i = 0; i < size; i++){
        array[i]=i*2;
    }

    cout << "values: ";
    for(int* ptr = array; ptr < array+size; ptr++){
        cout<< *ptr << ", "; 
    }

    cout << endl << "adding 5 to each element" << endl;
    for (int i = 0; i < size; i++){
        array[i]=array[i]+5;
    }

    cout << "values: ";
    for(int* ptr = array; ptr < array+size; ptr++){
        cout<< *ptr << ", "; 
    }
    
    cout<< endl << "shifting elements to the right" << endl;
    
    int* sarray = new int[size];
    
    for (int i = 0; i < size; i++){
        sarray[i]=array[i];
    }

    for (int i = 1; i < size; i++){
        array[i]=sarray[i-1];
        }
    array[0] = sarray[size-1];

    cout << "values: ";
    for(int* ptr = array; ptr < array+size; ptr++){
        cout<< *ptr << ", "; 
    }

    delete[] array;
    return 0;
}