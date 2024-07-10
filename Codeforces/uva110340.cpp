#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("i.txt","r",stdin);
    string s1,s2,s3,s4;
    map <char,int> mp;
    map <char,int> mp2;
     map <char,int>::iterator it;
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        getchar();
        while(k--){
            getline(cin,s1);
            cout<<s1[2<<endl;
            mp[s1[0]]=s1[2]-'0';
            }
            int l;
            cin>>l;
            getchar();
            int sum=0;
            while(l--){
                getline(cin,s3);
                stringstream g(s3);
                while(g>>s4){
                    int s=s4.size();
                    int j=0;
                    while(j<s){
                        if(mp[s4[j]]>0){
                            //++mp2[s4[j]];
                            cout<<mp[s4[j]]<<endl;
                            sum+=mp[s4[j]];
                        }
                        j++;
                    }
                }
            }
            cout<<sum<<endl;
        }
        return 0;
}

