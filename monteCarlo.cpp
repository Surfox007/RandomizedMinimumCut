#include<bits/stdc++.h>
using namespace std;

int main()
{
    random_device rd;
    mt19937 gen(rd());
    int n, u, v, z;
    cin>>n;;
    z = n+1;
    vector<vector<int>>edge;
    for(int i =0;i<n;i++){
        cin>>u>>v;
        edge.push_back({u,v});
    }

    while(1){
        uniform_int_distribution<> distribution(0, edge.size()-1);
        int s = distribution(gen);
        cout<<s<<endl;
        u = edge[s][0];
        v = edge[s][1];
        
        for(int i =0; i<= edge.size(); i++){
            if(i !=s){
                if(u ==edge[i][0]){
                    
                }
            }
        }


    }
}

   
    
