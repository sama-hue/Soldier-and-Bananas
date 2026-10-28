#include <iostream>

using namespace std;

int main()
{
    int n,k,w,c=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++){
        c+=(i*k);
    }
    cout<<c<<endl;
    if(c>n){
        cout<<c-n;
    }
    else{
        cout<<0;
    }
    return 0;
}
