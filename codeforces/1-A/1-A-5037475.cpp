#include <iostream>
using namespace std;

int main()
{
    double m, n, k;
    cin >> n >> m >> k;
    double horizontal = m / k;
    double vertical = n / k;
    
    long long int  horizontalInt = (int) horizontal;
    long long int verticalInt = (int) vertical;
    
    if (horizontalInt < horizontal)
    {
        horizontalInt++;        
    }
    if (verticalInt < vertical)
    {
        verticalInt ++;
    }
    
    cout << horizontalInt * verticalInt;
    
 
    return 0;
}