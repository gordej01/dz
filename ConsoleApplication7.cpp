#include <iostream>

using namespace std;

int main() {
    system("chcp 1251>null");

    /*const int SIZE = 5;
    int array1[SIZE] = { 1, 2, 3, 4, 5 };
    int array2[SIZE];

    int* ptr1 = array1;
    int* ptr2 = array2;

    for (int i = 0; i < SIZE; i++) {
        *(ptr2 + i) = *(ptr1 + i);
    }


    cout << "array2 після копіювання: ";
    for (int i = 0; i < SIZE; i++) {
        cout << array2[i] << " ";
    }
    cout << "\n";

    return 0;
}*/

//    const int SIZE = 5;
//    int array[SIZE] = { 1, 2, 3, 4, 5 };
//
//    int* start = array;           
//    int* end = array + SIZE - 1;  
//
//    while (start < end) {
//        int temp = *start;
//        *start = *end;
//        *end = temp;
//
//        start++;
//        end--;
//    }
//
//
//    cout << "Масив у зворотному порядку: ";
//    for (int i = 0; i < SIZE; i++) {
//        cout << array[i] << " ";
//    }
//    cout << "\n"; 
//
//    return 0;
//}

//    const int SIZE = 5;
//    int array1[SIZE] = { 1, 2, 3, 4, 5 };
//    int array2[SIZE];
//
//    int* ptr1 = array1 + SIZE - 1;  
//    int* ptr2 = array2;             
//
//    for (int i = 0; i < SIZE; i++) {
//        *(ptr2 + i) = *(ptr1 - i);  
//    }
//
//    
//    cout << "array2 у зворотному порядку: ";
//    for (int i = 0; i < SIZE; i++) {
//        cout << array2[i] << " ";
//    }
//    cout << "\n";  
//
//    return 0;
//}