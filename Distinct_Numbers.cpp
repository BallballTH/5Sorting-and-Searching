#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cout << "Input:\n";
    cin >> N;
    
    vector<int> AllNums(N);
    vector<int> NotDistinct(N);

    for (int i = 0; i < N; ++i) {
        AllNums[i] = 0;  
    }
    for (int i = 0; i < N; ++i) {
        NotDistinct[i] = -1; 
    }
    for (int i = 0; i < N; i++) {
        cin >> AllNums[i];  
    }

    int start = 0;
    bool Flag;
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++) {
            if(AllNums[i] == NotDistinct[j]){
                Flag = true;
            }
        }

        if(!Flag){
            NotDistinct[start] = AllNums[i];
            start++;
        }
        Flag = false;
    }

    // for (int i = 0; i < N; i++){
    //     cout << NotDistinct[i] << ' ';
    // }
    // cout << endl;

    int count = 0;
    for (int i = 0; i < N; i++){
        if(NotDistinct[i] > 0) count++;
    }
    cout << count;
}