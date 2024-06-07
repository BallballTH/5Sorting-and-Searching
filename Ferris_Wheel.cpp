#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    float N,max;
    cout << "input:\n";
    cin >> N;
    cin >> max;

    vector<int> WeightChilds(N);
    for (int i = 0; i < N; ++i) {
        cin >> WeightChilds[i];  
    }

    int sum = 0;
    for (int i = 0; i < N; ++i) {
        sum += WeightChilds[i];  
    }
    float Num = sum/max;
    cout << ceil(Num);
}
