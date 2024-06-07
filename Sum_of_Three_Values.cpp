#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N,target;
    cout << "Input:\n";
    cin >> N;
    cin >> target;
    vector<int> Nums(N);
    for(int i = 0; i < N; i++){
        cin >> Nums[i]; 
    }

    vector<int> All;
    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            for(int k = j+1; k < N; k++){
                if(Nums[i]+Nums[j]+Nums[k] == target){
                    All.push_back(i+1);
                    All.push_back(j+1);
                    All.push_back(k+1);
                }               
            }
        }
    }

    if(All.size() > 0){
        int count = 1;
        for(int i = 0; i < All.size(); i++){
            cout << All[i] << ' ';
            if(count == 3){
                cout << '\n';
                count = 1;
            }else{
                count++;
            }
                
        }
    }else{
        cout << "impossible";
    }
}