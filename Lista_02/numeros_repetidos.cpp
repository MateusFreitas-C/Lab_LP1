#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;

    cin >> n;

    int vet[n];

    for(int &i: vet){
        cin >> i;
    }

    for(int i = 0; i < n ; i++){
        for(int j = i+1; j < n; j++)

            if( vet[i] == vet[j] ) {
                vet[j] = 0;
            }
    }

    for(int i: vet){
        if(i!=0){
            cout << i;
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}
