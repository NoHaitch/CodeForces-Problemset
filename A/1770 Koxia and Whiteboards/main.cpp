#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,j;
    cin >> t;
    for(int z=0; z<t ;z++){
        int n,m;
        cin >> n >> m;
        long long int a[n], b[m];
        for(i=0; i<n; i++){
            cin >> a[i];
        } // array a will be used as the base of the whiteboard
        for(i=0; i<m; i++){
            cin >> b[i];
        }
        // for m operation
        for(i=0; i<m; i++){
            // find smallest a
            long long int mina = a[0];
            for(j=0; j<n; j++){
                if(a[j] < mina){
                    mina = a[j];
                }
            }
            // replace it
            for(j=0; j<n; j++){
                if(a[j] == mina){
                    a[j] = b[i];
                    break;
                }
            }     
        }
        // find the max sum
        long long int sum=0;
        for(i=0; i<n; i++){
            sum += a[i];
        }
        cout << sum << endl;
    }
    return 0;
}