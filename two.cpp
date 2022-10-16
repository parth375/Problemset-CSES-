#include<iostream>
#include<map>
using namespace std;
int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;
     int arr[n];
     map<int,int>mp;
     for(int i=1;i<n;i++){
         cin>>arr[i];
         mp[arr[i]]++;
         
     }
     int cnt=1;
     bool flag=false;
     for(auto it:mp){
         if(it.first!=cnt){
             flag=true;
             break;
         }
         cnt++;
     }
     if(flag==true){
         cout<<cnt;
     }
     else{
         cout<<cnt;
     }
     
  
        return 0;
    }
