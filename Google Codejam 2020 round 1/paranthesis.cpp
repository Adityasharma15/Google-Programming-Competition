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

	for(ll xx = 0; xx<t; xx++)
  {

    string s;
    cin >> s;

    string ans = "";

    ll temp = 0, dif, curr;

    for(ll i = 0; i<s.length(); i++)
    {
        curr = (s[i] - '0');

          if(temp > curr)
          {
              dif = temp - curr;

            //  cout << dif << "\n";

              while(dif--)
              {
                ans+= ")";
              }
          }

          else if(temp < curr)
          {
          //  cout << dif << "\n";

              dif = curr - temp;

              while(dif--)
              {
                ans+= "(";
              }
          }

          ans += s[i];

          temp = curr;
    }


    while(temp--)
    {
      ans += ")";
    }

   cout << "Case #" << (xx+1) << ": "  << ans << "\n";

	}

  return 0;

}
