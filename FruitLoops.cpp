#include <iostream>
using namespace std;                                                             // so I dont have to call on it everytime

int main() {
    string array1[5] = {"Apple", "Banana", "Cherry", "Grape","Orange"};          // makes an array of length 5 filled with fruits class string
    for (string fruit : array1 ){
        cout << fruit << endl;                                                   // ranged loop or also for each loop, just prints out each element of the array
    }
    string newFruit1;                                                            // 2 new fruits
    string newFruit2;
    cout << endl;
    cout << "Let's update our list with 2 more! "<< endl;
    cin >> newFruit1;
    cin >> newFruit2;
    cout << endl;
    string array2 [7] ;                                                          // new array with lenth 7 without assigning the elements
    for(int i = 0; i < 5; i++) {                                                 // I tried another ranged loop but couldnt get it to work, switch to a normal for loop to use a counter and a ++ operator to assign the new array the same elemnts of the old array with a new lenth
        array2[i] = array1[i];                                                  
      } 
    array2 [5] = newFruit1;                                                      // assigned  6th and 7th spot to new fruit.
    array2 [6] = newFruit2;
      for (string fruit : array2 ){
        cout << fruit << endl;
    }
return 0;
}