#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=n){
            cout << "*";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    

for(size_t i = 0; i<=5;i++)
{
    for(size_t j = 0;j<= i;j++){
        cout<<"* ";
    }
    cout<<endl;
}
 
}