#include <iostream>
using namespace std;
struct color{
int red;
int green;
int blue;
};
int main(){
  color colors[5]={
{10,120,200},
{120,190,100},
{30,50,210},
{110,90,80},
{40,60,130}
};
for (int i=0;i<3;i++){
colors[i].red=255-colors[i].red;
colors[i].green=255-colors[i].green;
colors[i].blue=255-colors[i].blue;
}
for(int i=0;i<5;i++){
cout<<"new RGB values of "<<i+1<<":"<<"Red="<<colors[i].red<<","<<"Green ="<<colors[i].green<<","<<"blue="<<colors[i].blue<<endl;
}
return 0;
}
