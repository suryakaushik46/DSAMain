#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    stack<int> s;
    vector<int> res;
    s.push(0);
    res.push_back(1);
    for(int i=1;i<n;i++){
        while(!s.empty() && arr[s.top()]<arr[i]){
            s.pop();
        }
        if(!s.empty()){
            int a=s.top();
            res.push_back(i-a);
        }else{
            res.push_back(i+1);
        }
       s.push(i);
    }
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }

    return 0;
}