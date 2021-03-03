#include <iostream>
#include <vector>

using namespace std;



void collatz(int val){
  //si val == 1 => return 
  //SI val pair => val/=2
  //Sinon val = val*3 + 1
  //cout<<val
  //collatz(val)
}



vector<double> renduMonnaie(double tab[15], double monnaie){
  vector<double> outputMonnaie;
  int index = 14;
  cout<<monnaie<<endl;
  while(monnaie > 0.0001f){
      if(monnaie < tab[index]){
        index--;
      }else{
        outputMonnaie.push_back(tab[index]);
        monnaie -= tab[index];
      }
  }
  return outputMonnaie;
}

int main()
{
    double tabMoney[15] = {0.01,0.02,0.05,0.1,0.2,0.5, 1.0, 2.0, 5.0, 10.0, 20.0, 50.0, 100.0, 200.0, 500.0};

    double userInput;
    cin >> userInput;
    vector<double> rendu = renduMonnaie(tabMoney, userInput);
    cout<<"RENDU MONNAIE :"<<endl;
    for(int i=0;i<rendu.size();i++){
      cout<<rendu[i]<<" ";
    }

    return 0;
}
