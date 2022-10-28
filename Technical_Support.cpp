#include <bits/stdc++.h>
#include<string>
#include<vector>
#include<cctype>
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int t;
    int count=0;
    int countq=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int flaq =0;
        int x=0, y=0;
        if(s[s.size()-1]!='A')
            cout<<"NO"<<endl;
        else{
            int flaq=0;
            for(int i=s.size()-1; i>=0;i--){
                if(s[i]=='Q')
                    x++;
                else
                    y++;
                if(x>y){
                    cout<<"NO\n";
                    flaq = 1;
                    break;
                }
            }
            if(!flaq)
                cout<<"YES\n";
        }
    }
    return 0;
}

//IbraMAINeem
