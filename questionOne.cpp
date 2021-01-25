/*
To get the highest average of contigious elements in an array,
set a default highest average of zero (0)
Loop through the array (n - 1) times, n representing the array length since there are (n - 1) contigious elements
If the current average is larger than the highest average, set it as the new highest average
*/

#include <iostream>

using namespace std;

double getHighestAverage(double array[], int arrayLength);

int main()
{
    
    double arrayItems[5] = {2, 3, 4, 1, 5};
    
    int arrLength = sizeof(arrayItems)/sizeof(arrayItems[0]);
    
    cout << "Highest Average: " << getHighestAverage(arrayItems, arrLength) << endl;
    
    return 0;
}

double getHighestAverage(double array[], int arrayLength) {
    
    double x, y, highestAverage = 0;
    
    for (int i = 0; i < (arrayLength - 1); i++) {
        x = array[i];
        y = array[i + 1];
        double currentAverage = (x + y) / 2;
        if (currentAverage > highestAverage) {
            highestAverage = currentAverage;
        }
    };
    
    return highestAverage;
    
}