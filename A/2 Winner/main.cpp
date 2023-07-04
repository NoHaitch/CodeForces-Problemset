#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> main_scores, scores, rescores;
    vector<string> main_names, names, potensial_names;
    int n, score, maxscore;
    string name;

    // find max score
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> name >> score;
        main_names.push_back(name);
        main_scores.push_back(score);
        if(find(names.begin(), names.end(), name) != names.end()){
            for(int j=0; j<names.size(); j++){
                if(names[j] == name){
                    scores[j] += score;
                }
            }
        }
        else{
            names.push_back(name);
            scores.push_back(score);
        }
    }
    maxscore = *max_element(scores.begin(), scores.end());
    // find all name that has the maximum score
    for(int i=0; i<scores.size(); i++){
        if(scores[i] == maxscore){
            potensial_names.push_back(names[i]);
        }
    }
    if(potensial_names.size() == 1){
        cout << potensial_names[0];
    }
    else{
        for(int i=0; i<potensial_names.size();i++){
            rescores.push_back(0);
        }
       // find whose first
        for(int i=0; i<main_names.size(); i++){
            if(find(potensial_names.begin(), potensial_names.end(), main_names[i]) != potensial_names.end()){
                for(int j=0; j<potensial_names.size(); j++){
                    if(potensial_names[j] == main_names[i]){
                        rescores[j] += main_scores[i];
                        if(rescores[j] >= maxscore){
                            cout << potensial_names[j];
                            exit(3);
                        }
                    }
                }
            }
        }
    }
}
