#include<bits/stdc++.h>
using namespace std;

class tShirt{
    string name;
    int price;
    int unit;
    public:
    void setData(string n, int p, int u){
        name = n;
        price = p;
        unit = u;
    }
    tShirt(){
    }
    tShirt(string n, int p, int u){
        name = n;
        price = p;
        unit = u;
    }
    tShirt(tShirt &a){
        name = a.name;
        price = a.price;
        unit = a.unit;
    }
    string findMax(tShirt arr[], int n){
        tShirt max("",0,0);
        for(int i=0; i<n; i++){
            if(max.price<arr[i].price)
                max = arr[i];
        }
        //cout<<max.name<<", "<<max.price<<", "<<max.unit<<endl;
        return max.name;

    }

};

int main(){
    int n; cin>>n;
    tShirt *arr = new tShirt[n];
    for(int i=0; i<n; i++){
        string name; cin>>name;
        int price; cin>>price;
        int unit; cin>>unit;
        arr[i].setData(name, price, unit);
    }
    cout<<arr[0].findMax(arr,n);
    delete arr;
    return 0;
}