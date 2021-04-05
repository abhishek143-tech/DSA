/*Author: Abhishek Dhok
Miracle do happens when human inspiration takes place!! */
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define pii pair<int,int>
#define ff first
#define ss second
using namespace std;
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     ll base,power,res=1;
     cin>>base>>power;
     while (power)
     {
         if(power%2==0){
             power /= 2;
             base *= base;
         }else{
             res = res* base;
             power--;
         }
     }
     cout<<res<<endl;
     return 0;
}