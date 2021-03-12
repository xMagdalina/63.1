#include <iostream>
#include <fstream>
using namespace std;
class licz{
int t[1000];
int dlugosc;
ifstream pl1;
ofstream pl2;
public:
void liczy();
private:
void third_power();
};
void licz::liczy(){
pl1.open("zle.txt");
pl2.open("wy.txt");
while(pl1.good()){
pl1 >> dlugosc;
for(int i=0;i<dlugosc;i++){
pl1 >> t[i];
pl2<< t[i]<<", ";
}pl2<<endl;
third_power();
} pl1.close();
pl2.close();
}    
void licz::third_power(){  
int x;
for(int i=0;i<dlugosc-1;i++){
if(i==0)
x = t[i+1] - t[i];
if(t[i+2]-t[i+1]!=x){
pl2<<"zle: "<<t[i+2]<<endl;
    }
}
pl2<<endl;
}
int main(int argc, char** argv) {
    licz ii;
    ii.liczy();
    return 0;
}
