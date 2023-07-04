#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, m, a, x, y;
    cin >> n >> m >> a;
    if(n % a != 0){
        x = (int)n/a + 1;
    }
    else{
        x = n / a;
    }
    if(m % a != 0){
        y = (int)m/a + 1;
    }
    else{
        y = m / a;
    }
    cout << x * y << endl;
    return 0;
}
