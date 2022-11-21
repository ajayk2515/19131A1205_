  
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
   
     getline(cin, s1);
     getline(cin, s2);
    char ch;
    unordered_map<char,int> mp;
    for(int i=0;i<s2.size();i++){
        ch=s2[i];
    }
    for(int i=0;i<s1.size();i++){
        mp[s1[i]]++;
    }
    int ans=0;
    if(mp.find(ch)==mp.end()){
        ans=0;
    }else{
        ans=mp[ch];
    }
    cout<<ans;

    return 0;
}
