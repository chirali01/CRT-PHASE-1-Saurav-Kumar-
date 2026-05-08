//WAP in cpp for friend function for area with example by help of length and breadth.
#include <iostream>
using namespace std;
class area{
    private:
    int length;
    int breadth;
    public:
    void setdata(int l,int b){
        length=l;
        breadth=b;
    }
    friend void showArea(area a);
};
void showArea(area a){
    cout<<"Area: "<<a.length*a.breadth<<endl;
}
int main(){
    area a;
    a.setdata(5,10);
    showArea(a);
    return 0;
};
