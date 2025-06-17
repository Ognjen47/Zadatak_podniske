#include <bits/stdc++.h>
using namespace std;

int main(){ 
    string podniska; cin>>podniska;
    string niska; cin>>niska;
    int podniske=0;
    int i=0; //pozicija u stringu niska
    while ((i=niska.find(podniska, i))!=string::npos)
    {
        podniske++;
        i++;
    }
    
    cout<<podniske;
    return 0;
}