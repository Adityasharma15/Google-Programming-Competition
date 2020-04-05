#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0);
	cout.tie(0);

	ll t;
	cin >> t;

	for(ll zz = 0; zz<t; zz++)
  {
		 ll n;
     cin >> n;

     vector<pair<ll,ll>> orig;
     vector<pair<ll, ll > > vec;

     ll temp1, temp2;

     for(ll i = 0;i<n; i++)
     {
        cin >> temp1;
        cin >> temp2;
        vec.push_back(make_pair(temp1, temp2));
        orig.push_back(make_pair(temp1, temp2));
     }

     //string ans = "";

     vector<char> ans;

     char cchar = 'C';
     char jchar = 'J';

     vector< pair<ll,ll> > cv;
     vector< pair<ll, ll> > jv;

     sort(vec.begin(), vec.end());

     bool assigned = false , cassigned =false, jassigned = false;

     bool ok = true;

     for(ll i = 0; i <n && ok; i++)
     {
        assigned = false;
        cassigned = true;

        for(auto j:cv)
        {
              if( j.first >= vec[i].first  && j.first < vec[i].second)
                cassigned = false;

              if( j.second > vec[i].first  && j.second <= vec[i].second)
                cassigned = false;

              if( j.first <= vec[i].first  && j.second > vec[i].first)
                cassigned = false;

              if( j.first < vec[i].second  && j.second >= vec[i].second)
                cassigned = false;
        }

        if(cassigned)
        {
            cv.push_back(make_pair(vec[i].first, vec[i].second));
            ans.push_back(cchar);
            assigned = true;
            continue;
        }

        jassigned = true;

        for(auto j:jv)
        {
            if( j.first >= vec[i].first  && j.first < vec[i].second)
              jassigned = false;

            if( j.second > vec[i].first  && j.second <= vec[i].second)
              jassigned = false;

            if( j.first <= vec[i].first  && j.second > vec[i].first)
              jassigned = false;

            if( j.first < vec[i].second  && j.second >= vec[i].second)
              jassigned = false;
        }

        if(jassigned)
        {
            jv.push_back(make_pair(vec[i].first, vec[i].second));
            ans.push_back(jchar);
            assigned = true;
            continue;
        }

        if(!assigned)
          ok = false;
     }

     string realans;

      if(!assigned)
      {
        cout << "Case #" << zz+1 << ": "<< "IMPOSSIBLE" << "\n";
      }

      else
      {
        for(ll i =0; i<n; i++)
        {
            pair<ll, ll > pairr = orig[i];

            for(ll k = 0; k<n; k++)
            {
              if(pairr == vec[k])
              {
                realans += ans[k];
                vec[k].first = -1;
                vec[k].second = -1;
                break;
              }
              }

            }

            cout << "Case #" << zz+1  << ": "<< realans << "\n";

        }

      }

  return 0;
}
