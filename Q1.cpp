#include <iostream>
using namespace std;
  struct item{
int id;
float cost;
};
int main (){
  item items[6]={
  {11,50.0},
  {12,48.6},
  {13,62.8},
  {14,65.0},
};
for(int i=0;i<6;i++){
if(items [i].cost>50){
cout<<"Item ID:"<<items [i].id<<",Cost:"<<items [i].cost<<endl;
}
}
return 0;
}
