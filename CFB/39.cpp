#include<bits/stdc++.h>
    using namespace std;
    bool existed[30];
    char a[50][50];
    bool yes[30];
        double distance1(int x1 , int y1 ,int x2 , int y2)
        {
            double r1 = (x2 - x1) * (x2 - x1);
            double r2 = (y2 - y1) * (y2 - y1);
            double ans = sqrt(r1 + r2);
            return ans;
        }
        main()
        {
            ios::sync_with_stdio(false);
            vector<pair<int,int> > shifts;
            int n , m ,x;
            cin >> n >> m >> x;
 
            for(int i = 1 ; i <= n;i++)
            {
                for(int j = 1; j <= m;j++ )
                {
                    cin >> a[i][j];
                    if(a[i][j] == 'S')
                    {
                        shifts.push_back(make_pair(i ,j));
                    }
                    else
                    {
                        existed[a[i][j] - 'a'] = 1;
 
                    }
 
                }
            }
 
            for(int i = 1 ; i <= n;i ++)
            {
                for(int j = 1 ; j <= m;j++)
                {
                    if(a[i][j] != 'S')
                    {
                        bool found = false;
                        for(int k = 0 ;  k < shifts.size();k ++)
                        {
                            if(distance1(i,j,shifts[k].first,shifts[k].second) <= x){
                                found = true;
                                break;
                            }
                        }
                        yes[a[i][j] - 'a'] |= found;
 
                    }
 
                }
            }
 
 
 
 
            int Len;
            cin >> Len;
            char g;
            int ans = 0;
            for(int i = 1 ; i <= Len;i++)
            {
                cin >> g;
                if(existed[g - 'a'] and islower(g))
                    continue;
                else
                {
                    char T1 = tolower(g);
                    if(isupper(g) and shifts.size() and existed[ T1 - 'a'])
                    {
                        if(!yes[T1 - 'a'])
                            ans ++;
                    }
                    else
                    {
                      return cout << -1, 0;
                    }
 
                }
 
            }
            cout << ans;
 
 
 
 
        }
