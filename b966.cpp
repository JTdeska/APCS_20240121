#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
    int a,sum=0;
    cin>>a;
    vector<int> v2{};
    vector<int> v{};
    for(int i=0;i<a;i++){
        int b,c;
        cin>>b>>c;
        if(b!=c){
            v2.push_back(b);
            v2.push_back(c);
        }
    }
    if(v2.size()!=0){
        for(int i=0;i<v2.size();i++){
            v.push_back(v2[i]);
            }
        sort(v.begin(),v.end());
        int c;
        c=v2.size();
        for(int t=0;t<v[c];t++){
            for(int i=0;i<v2.size();i+=2){
                
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}