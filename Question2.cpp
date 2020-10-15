//Name-Tasfique Enam
//Student ID- 5886429
//LabTask4 Q2
#include <iostream>
//const int SIZE = 1000;

using namespace std;

int removeDuplicate(int* dArray, int n) { //removing duplicate function.
    for (int i=0; i<n; i++) {
        for(int j=i+1; j<n;) {
            if(*(dArray+i)== *(dArray+j)) {
                for(int x=j; x<n; x++) {
                    *(dArray+x) = *(dArray+(x+1));
                }
                n--;
            } else {
                j++;
            }
        }
    }
    cout << "\nArray with no duplicates " << endl;
    for(int i=0; i<n; i++ ) {
        cout << ""<< *(dArray+i) << " ";
    }
}


int main() { //main function
    int n;
    int numbers;
    int new_arr_size;
    cout << "How many Numbers to enter?" << endl;
    cin >> n;
    int* dArray = new int[n];
    cout << "Enter " << n << " Numbers: " << endl;;
    for(int i=0; i<n; i++) {
        cin >> *(dArray + i);
        numbers = *(dArray + i);
    }

    cout << "The Numbers in the Arrays are ";

    for(int i=0; i<n; i++) {
        cout << dArray[i] << " ";

    }
    cout << "\n";

    removeDuplicate(dArray, n);

	cout << endl;
    delete [] dArray;
    return 0;
}



