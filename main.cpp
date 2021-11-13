//Calcolo N numeri di Fibonacci

#include <iostream>
using namespace std;

int main() {

    int fibonacci=0, Primo_Valore=1, Secondo_Valore=1, RFibo=1;

    cin >> fibonacci;

    if (fibonacci == 2) {
        cout << Primo_Valore << endl;
        cout << Secondo_Valore << endl;

    }else if(fibonacci > 2){

        cout << Primo_Valore << endl;
        cout << Secondo_Valore << endl;

        for(int i=3; i <= fibonacci; i++){
           
            RFibo = Primo_Valore + Secondo_Valore;

            cout<<RFibo<<endl;
           
            Primo_Valore=Secondo_Valore;
            Secondo_Valore=RFibo;
        }
    }else{
        cout<<"errore"<<" ";
    }

    return 0;
    }
