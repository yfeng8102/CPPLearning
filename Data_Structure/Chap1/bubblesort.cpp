#include <iostream>
#include <utility>


void print(int A[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << A[i];
        if (i < n-1) {
            std::cout << ", ";
        }
    }
    std::cout<< std::endl;
}


void bubblesort1A(int A[], int n) {
    bool sorted = false;
    while (!sorted) {
        sorted = true;
        for (int i = 1; i < n; i++) {
            if (A[i-1] > A[i]) {
                std::swap(A[i-1], A[i]);
                sorted = false;
            }
            // output
            print(A, 7);
        }
        n--;
    }
}



int main() {
    int A[7] = {5, 2, 7, 4, 6, 3, 1};
    
    print(A, 7);
    bubblesort1A(A, 7);  
    print(A, 7);
}