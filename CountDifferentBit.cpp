#include <iostream>
using namespace std;
#include <cmath>
#include <cstdlib>

void solve(int A, int B)
{
    int count = 0;
 
    // since, the numbers are less than 2^31
    // run the loop from '0' to '31' only
    for (int i = 0; i < 32; i++) {
 
        // right shift both the numbers by 'i' and
        // check if the bit at the 0th position is different
        if (((A >> i) & 1) != ((B >> i) & 1)) {
            count++;
        }
    }
 
    cout << "Number of different bits : " << count << endl;
}
 
// Driver code
int main()
{
    int A = 0xDEADBEEF, B = 0xDEADBEEC;
 
    // find number of different bits
    solve(A, B);
 
    return 0;
}
