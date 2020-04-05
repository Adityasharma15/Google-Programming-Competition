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

	for(ll x = 0; x<t; x++)
    {

    ll n;
    cin >> n;

    ll arr[n][n];

    ll trace= 0;

    for(ll i = 0;i<n; i++)
    {
        for(ll j =0 ; j<n; j++)
        {
            cin >> arr[i][j];

            if(i == j)
                trace+=arr[i][j];
        }
    }


    ll row = 0, col = 0;

    set<ll> sett;

    // bool flag = true;

    for(ll i = 0;i<n; i++)
    {

      // flag = true;

        for(ll j = 0; j<n; j++)
        {
          // if(arr[i][j] > n)
          //   flag = false;
          //
          //   if(arr[i][j] <1)
          //     flag = false;
          //
           sett.insert(arr[i][j]);
        }

        if(sett.size() != n)
          row++;

          // flag = false;

        // if(!flag)
        //     row++;

        sett.clear();
    }

    sett.clear();

    for(ll i = 0;i<n; i++)
    {
        // flag = true;

        for(ll j = 0; j<n; j++)
        {
          // if(arr[i][j] > n)
          //   flag = false;
          //
          //   if(arr[i][j] <1)
          //     flag = false;
          //
           sett.insert(arr[j][i]);
        }

        if(sett.size() != n)
          col++;

        sett.clear();
    }

    sett.clear();

    cout << "Case #" << x+1  << ": "<< trace << " " << row << " " << col << "\n";

	}

  return 0;

}
