#include <iostream>
#include <vector>

using namespace std;

int catalan(int n) {
    vector<int> catalan_numbers(n+1, 0);
    catalan_numbers[0] = 1;
    for(int i=1; i<=n; i++) {
        for(int j=0; j<i; j++) {
            catalan_numbers[i] += catalan_numbers[j] * catalan_numbers[i-j-1];
        }
    }
    return catalan_numbers[n];
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=catalan(n);
        cout<<ans<<endl;
    }
    return 0;
}
