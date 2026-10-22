#include <bits/stdc++.h>

using namespace std;

int  num = 0 ;
void recfun(){
    if(num == 5) return;
    cout << num << endl;
    num++;
    recfun();


}

// Print Name n times.


    int cnt;
int insertName(){
    int name;
    cin >> name;

    if(name <= cnt) return;
    cout << name<< endl;
    name++;
    insertName();

}


int main(){
int newNameFunc = insertName();
    return 0;
}