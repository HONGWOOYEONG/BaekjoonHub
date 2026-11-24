#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void){
    string word;
    cin >> word;
    int n;

    vector<string> crotian = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

    for(int i =0; i< crotian.size(); i++){
        while(1){
            n = word.find(crotian[i]);
            if(n==string::npos){
                break;
            }
            word.replace(n, crotian[i].length(), "#");
        }
    }

    cout << word.length();
}