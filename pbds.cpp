#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> pbds;

int main(){
    pbds pb;
    for (int i = 0; i < 10; i++)
    {
        pb.insert(i);
    }
    cout<<*pb.find_by_order(4);
    cout<<endl;
    cout<<pb.order_of_key(7);
}