#include <bits/stdc++.h>
using namespace std;

long long numberOfCountryCodes(string S)
{
    unordered_set<string> countryCodes;
    string st;
    
    for(long long i = 0; i < S.size() - 1 ; i++)
    {
        st = st + S[i];
        st = st + S[i + 1];
        countryCodes.insert(st);
        st = "";
    }
        
    return countryCodes.size();
}

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
	    string S;
	    cin>>S;
	    cout<<numberOfCountryCodes(S)<<endl;
	}
	return 0;
}
