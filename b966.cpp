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
        for(int i=0;i<v[v.size()];i++){
                for(int t=0;t<v2.size();t+=2){
                 if(i>v2[t]&&i<v2[t+1])
                    sum++;
                    continue;   
                }
        }
    }
    cout<<sum<<endl;
    return 0;
}