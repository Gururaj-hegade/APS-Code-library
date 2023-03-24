#include<bits/stdc++.h>
using namespace std;
string intToRoman(int num) {
        string ones[10]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string ten[10]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hund[10]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string th[4]={"","M","MM","MMM"};
        return th[num/1000]+hund[(num%1000)/100]+ten[(num%100)/10]+ones[num%10];
    }
int main(){
    int num;
    cin>>num;
    cout<<intToRoman(num);
    return 0;
}