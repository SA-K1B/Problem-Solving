#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> st;
    set<int>:: iterator it;
   /* st.insert("rra");
    st.insert("rr");
    st.insert("rrr");
    st.insert("raaaar");
    st.insert("raer");
    char s1[15];
   // cin>>s1;
    int s=strlen(s1);
    sort(s1,s1+s);
   // cout<<s1<<endl;
    char ch,ch1;
    cin>>ch>>ch1;
    int t=ch-ch1;
    cout<<t<<endl;
   // for(it=st.begin();it!=st.end();it++)
       // cout<<*it<<endl;*/
    st.insert(6);
    st.insert(4);
    st.insert(1);
    //it=st.find(4);
    auto pos=st.end();
    pos--;
    cout<<*pos<<endl;
    //st.erase(it);
    //for(auto it:st)
      //  cout<<it<<' ';
    //int pos=it-st.begin();
    //cout<<pos<<endl;
    /*if(st.find(4))
        cout<<"y"<<endl;
    else
        cout<<"n"<<endl;*/
}
