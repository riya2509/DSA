#include <iostream>
using namespace std;
int main(){
    int n, num=1,ans=1;
    cin>>n;
    while(num<=n){
ans=ans*num;
num=num+1;
    }
    cout<<ans<<endl;
}