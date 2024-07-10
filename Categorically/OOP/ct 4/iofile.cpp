#include<bits/stdc++.h>
using namespace std;
int main()
{
   ifstream inp("input.txt");
   string s1;
   int n;
   getline(inp,s1);
   inp>>n;
   inp.close();
   /*ofstream oup("output.txt");
   oup<<s1<<' '<<n<<endl;
   oup.close();*/
   fstream oup2("output2.txt");
   oup2<<s1<<' '<<n<<endl;
   //oup2.close();
}
