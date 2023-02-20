#include<bits/stdc++.h>
using namespace std;
int countOneBits(uint32_t n) {
       int count=0;
       while(n!=0){
           count++;
           n=n&(n-1);
       }
       return count;
}
int main(){
    uint n;
    cin>>n;
    int ans= countOneBits(n);
    cout<<ans<<endl;
    return 0
}