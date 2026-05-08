////WAP in c++ for namespace using virat and rohit as nested namespace.
#include<iostream>
using namespace std;
namespace virat{
    void show(){
        cout<<"He is the part of RCB."<<endl;
    }
    namespace rohit{
        void show(){
            cout<<"He is the part of MI."<<endl;
        }
    }
    int main(){
        virat::show();
        rohit::show();
        return 0;
    }
}
