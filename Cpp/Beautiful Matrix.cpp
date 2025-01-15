// Approch-1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            int x;
            cin>>x;
            if(x==1)
            {
                cout<<(abs(2-i)+abs(2-j));
            }
        }
    }
    return 0;
}
============================================================================================================================================================================================================================================================
  // Approach-2
  #include<bits/stdc++.h>
using namespace std;
int main()
{
    int row=-1,col=-1;
    vector<vector<int>> mat(5,vector<int>(5,0));
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]==1)
            {
                row=i;
                col=j;
            }
        }
    }
    int ans=0;
    if(row!=-1 && col!=-1)
    {
        ans=abs(2-row)+abs(2-col);
    }
    cout<<ans;
}
