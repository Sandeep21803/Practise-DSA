#include<iostream>
using namespace std;
void reachHome(int src, int dest){
    cout<<"source "<<src<<" destination "<<dest<<endl;
    //base condition
    if(src==dest){
        cout<<" pahuch gaya "<<endl;
        return ;
    }
    //processing ek step aage bd gaye
    src++;
    //recursive call
    reachHome(src,dest);
}
int main(){
    int dest=10;
    int src=1;
    cout<<endl;
    reachHome(src, dest);
}