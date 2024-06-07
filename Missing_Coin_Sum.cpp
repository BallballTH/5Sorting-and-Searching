#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(){
    int N;
    cout << "Input:\n";
    cin >> N;
    vector<int> Values(N);
    for(int i=0; i<N; i++){
        cin >> Values[i];
    }
    sort(Values.begin(),Values.end());

    int smallest = 1;
    for(int i=0; i<N; i++){
        if(Values[i] > smallest){
            break;
        }
        smallest += Values[i];
    }
    cout << smallest;
}