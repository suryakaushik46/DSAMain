#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    deque<int> dq;
    for(int i=0;i<k;i++){
        if(dq.empty()){
            dq.push_back(arr[i]);
        }else{
            while(!dq.empty()&&dq.front()<arr[i]){
                dq.pop_front();
            }
//            [-7,-8,7,5,7,1,6,0]

            while(!dq.empty() && dq.back()<arr[i]){
                dq.pop_back();
            }
            dq.push_back(arr[i]);
        }
    }
    for(int i=1;i<n-k+1;i++){
        cout<<dq.front()<<" ";
//         for(auto it=dq.begin();it!=dq.end();it++){
//             cout<<*it<<" ";
//         }
//         cout<<endl;
        if(arr[i-1]==dq.front()){
            dq.pop_front();
        }
         if(dq.empty()){
            dq.push_back(arr[i]);
        }else{
            while(!dq.empty() && dq.front()<arr[i+k-1]){
                dq.pop_front();
            }
            while(!dq.empty() && dq.back()<arr[i+k-1]){
                dq.pop_back();
            }
            dq.push_back(arr[i+k-1]);
        }
    }
    cout<<dq.front()<<endl;

    return 0;
}

