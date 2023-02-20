#include<bits/stdc++.h>
using namespace std;
int reverse(int x) {
    int num=0,i=0,num1;
    while(x){
        if(num<INT_MIN/10 || num>INT_MAX/10)
            return 0;
        else{
            num=(num*10)+(x%10);
            x=x/10;
        } 
    }
    return num;
}
int main(){
    int n;
    cin>>n;
    int ans=reverse(n);
    cout<<ans<<endl;
    return 0;
}