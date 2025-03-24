#include<bits/stdc++.h>
using namespace std;


int main(){
    pair<int,string>p;
    
    //p=make_pair(2,"ancw");
    p={2,"abc"};
    cout<<p.first<<" "<<p.second<<endl;
    

    int a[]={1,3,4};
    int b[]={3,5,9};

    pair<int,int>p_arr[3];
    p_arr[0]={1,3};
    p_arr[1]={3,5};
    p_arr[2]={4,9};

    swap(p_arr[0],p_arr[2]);
    
    for(int i=0;i<3;i++){
        cout<<p_arr[i].first<<" "<<p_arr[i].second<<endl;
    }
    


}