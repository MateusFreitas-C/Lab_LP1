#include <iostream>
#include <string>

using namespace std;

int main(){
    int respostas[5];
    int i = 0;

    for(i = 0; i < 5; i++){
        cin >> respostas[i];
    }

    if(respostas[0] == 1){

        if(respostas[1] == 0){
            cout << "pato"<< endl;
        }else{
            if(respostas[3] == 0){
                cout << "pinguim" << endl;
            }else{
                if(respostas[4] == 1){
                    cout << "garça" << endl;
                }else{
                    cout << "gaivota" << endl;
                }
            }
        }
    }else{
        if(respostas[1] == 1){
            if(respostas[3] == 0){
                cout << "ema" << endl;
            }else{
                if(respostas[4] == 1){
                    cout << "coruja" << endl;
                }else{
                    cout << "falcão" << endl;
                }
            }
        }else{
            if(respostas[2] == 1){
                cout << "galinha" << endl;
            }else{
                if(respostas[3] == 1){
                    cout << "pardal" << endl;
                }else{
                    cout << "avestruz" << endl;
                }
            }
        }
    }

    return 0;
}
