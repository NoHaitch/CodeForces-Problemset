#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,m;
    cin >> n >> k >> m;
    if(k < ceil((float)n / (float)m)*ceil((float)n / (float)m)){
        cout << "NO";
    }
    else{
        cout << "TRUE";
    }
    return 0;
}