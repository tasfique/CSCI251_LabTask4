//Name- Tasfique Enam
//Student ID- 5886429
//LabTask4 Q1
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

double showMedian(int *tempArry[], int length) {
    if(length % 2 != 0)
        return (double)*tempArry[length/2];
    return (double)(*tempArry[(length-2)/2] + *tempArry[length/2]) / 2.0;
}

int main() {

    srand(time(NULL));
    int randomArray[20]; //array to hold random numbers.
    int size = rand()%21; //random array size.
    int *ptrArray[size]; //pointer array
    int i;
    int temp;

    for(i=0; i<size; i++) {
        *(randomArray + i) = rand() % 100 + 1;
    }


    for (i = 0; i<size; i++) {
        ptrArray[i] = &randomArray[i];
    }

    for(i =0; i<size; i++) {
        cout<<i<<'\t'<<randomArray[i]<<endl;
    }

    /*for (i = 0; i<size; i++) {
        cout<<i<<'\t'<<*ptrArray[i]<<endl;
    }*/

    ///Sorting the numbers in the Temporary Array.
    //Ascending Order.
    for(i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            if(*ptrArray[i] > *ptrArray[j]) {
                temp = *ptrArray[i];
                *ptrArray[i] = *ptrArray[j];
                *ptrArray[j] = temp;
            }
        }
    }

    cout<<"\nSorted (Ascending Order) Array elements:"<<endl;
	for(i=0; i<size; i++)
		cout<<*ptrArray[i]<<"\t";
        cout<<endl;

    cout << "\nMedian Value is "<< showMedian(ptrArray, size) << endl;
    //showMedian(*ptrArray, size);
    return 0;
}


