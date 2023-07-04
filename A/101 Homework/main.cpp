#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    int n, k, i;
    cin >> str >> k;
    n = str.size();
    map<char,int> m;
    for(i=0;i<n;i++){
        if(m.count(str[i]) == 1){
            m[str[i]] += 1;
        }
        else{
            m.insert(make_pair(str[i],1));
        }
    }
    for (auto i = m.begin(); i != m.end(); i++){
        cout << i->first << " \t\t\t" << i->second << endl;
    }
    int min = m[m.begin()->first];
        for (auto i = m.begin(); i != m.end(); i++){
            if(i->second < min){
                min = i->second;
            }
        }
    while(k >= min){
        // find the smalest amount of one type of char
        k -= min;
        int count = 0;
        for (auto i = m.begin(); i != m.end(); i++){
            if(i->second == min){
                cout << "erasing " << i->first << endl;
                m.erase(i);
                break;
            }
            else{
                count += 1;
            }  
        }
        cout << k << " left" << endl;
        if(count == m.size()){
            break;
        }
        min = m[m.begin()->first];
        for (auto i = m.begin(); i != m.end(); i++){
            if(i->second < min){
                min = i->second;
            }
        }
    }
    cout << endl << "xxx" << endl;
     for (auto i = m.begin(); i != m.end(); i++){
        cout << i->first << " \t\t\t" << i->second << endl;
    }


    cin >> n;
}