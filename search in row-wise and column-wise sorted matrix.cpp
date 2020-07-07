#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int> > mat;
    for(int i=0; i<m; i++){
        vector<int> v;
        for(int j=0; j<n; j++){
            int t;
            cin>>t;
            v.push_back(t);
        }
        mat.push_back(v);
    }
    int item_to_search;
    cin>> item_to_search;

    int i=0, j=n-1; bool flag=false;
    while(i<m && j<n){
            //cout<< i << " " << j << endl;
            if(mat[i][j]==item_to_search){
                flag=true;
                break;
            }
            else if(item_to_search < mat[i][j]) j--;
            else i++;
    }

    if(flag==true) cout<< "found" << endl << i << " " << j;
    else cout<< "not found";

    return 0;
}
