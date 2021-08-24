#include <iostream>
using namespace std;
// Tower Of Hanoi - Recursion

// https://www.youtube.com/watch?v=q6RicK1FCUs

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    						// A    B     C
    if(n > 0){ 
        
        				    // A    C    B
        towerOfHanoi(n-1, source, destination, auxiliary);

        cout<< source << " " << destination<<endl;
        
        				    // B    A    C
        towerOfHanoi(n-1,auxiliary,source, destination);
    }

}


int main() {
    int n = 3;
    // cin >> n;
    towerOfHanoi(n, 'a', 'b', 'c');
}