#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
typedef long long ll;
typedef long double ld;

int main(int argc, char const *argv[]) {
	ll n;
	cin >> n;
	n--;

	vector<ll>  v(n);
	for(auto& i : v)
	{
		cin >> i;
	}

	ld totalcost = 0;
	ll needed = 1;
	bool enough = false;

	ld longedge = pow(2.0, -3/4.0);
	ld shortedge = pow(2.0, -5/4.0);

	for(ll i = 0; i < v.size(); i++)
	{
		//calculate cost
		totalcost += needed * longedge;
		swap(shortedge, longedge);
		shortedge /= 2;

		//calculate paer needed
		needed *= 2;
		needed -= v[i];

		//check if we have enoughj
		if (needed <= 0)
		{
			enough = true;
			break;
		}
	}

	cout << fixed;
	cout.precision(9);

	if(enough)
	{
		cout << totalcost << endl;
	}
	else
	{
		cout<< "impossible" << endl;
	}
	return 0;
}
