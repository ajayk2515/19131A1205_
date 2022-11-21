
#include <bits/stdc++.h>
using namespace std;

bool isValid(string str)
{

	for (int i = 0; i < str.length(); i++) {

	
		if (str[i] == '3' || str[i] == '4'|| str[i] == '7') {
			return false;
		}
	}

	return true;
}


int main()
{
    vector<int> v;
    int n;
    cin>>n;
    int ans=0;
    while(v.size()!=n){
        ans++;
        string str = to_string(ans);

	if (isValid(str))
	   v.push_back(stoi(str));

		
    }
	int vs=v.size();
	cout<<v[vs-1];

	return 0;
}
