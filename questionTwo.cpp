/*
To identify overlapping times, we will use a map of key value pairs where we create an "object" with keys derived from the array
For each item of the array, identify all missing integers between the starting time and endtime and create a keypair object with this info
If a key appears twice (overlaps), it will be found by map.find() function and break from the loop and return false
if the entire array adds keys without finding an existing one, return true
*/

#include <iostream>
#include <map>

using namespace std;

bool isBikeAvailable(int myArray[][2], int arrayLength);

int main()
{
    
    int bookings[3][2] = {{6,7}, {2,4}, {8,12}};
    
    int bLength = sizeof(bookings)/sizeof(bookings[0]);
    
    cout << isBikeAvailable(bookings, bLength) << endl;
    
    return 0;
}

bool isBikeAvailable(int myArray[][2], int arrayLength) {
    
    map<int, string> keyPair;
    
    for(int i = 0; i < arrayLength; i++) {
        int begining = myArray[i][0];
        int end = myArray[i][1];
        
        for (int g = begining; g < (end + 1); g++) {
            if (keyPair.find(g) == keyPair.end()) {
                keyPair.insert(pair<int, string>(g, ""));
            } else {
                return false;
                break;
            }
        }
    }
    
    return true;
}