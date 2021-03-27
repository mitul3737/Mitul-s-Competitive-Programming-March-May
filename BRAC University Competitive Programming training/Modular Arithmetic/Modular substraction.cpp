//Modular substraction
//Input:
//103
//91
//Output:
//0
#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b,c;
    cin>>a>>b;
    //way 1 . Problem: Here can be overflow
    c=a-b;   // (a-b)%4 is what done in ths way
    cout<<c%4<<endl;

    //way 2 . Benefit: No overflow here
    a=a%4;
    b=b%4;

    c=a-b; //((a%4 )- (b%4))%4  is done in way 2
    cout<<c%4<<endl;


    return 0;
}
