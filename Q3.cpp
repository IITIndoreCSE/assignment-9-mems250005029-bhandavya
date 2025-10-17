#include <iostream>
using namespace std;
struct point{
float x;
float y;
};
int main(){
  point points[7];
int count=0;
for(int i=0;i<7;i++){
cout<<"enter x and y points of "<<i+1<<":"<<endl;
cin>>points[i].x>>points[i].y;
}
for(int i=0;i<7;i++){
if(points[i].x>0 && points[i].y>0){
count++;
}
}
cout<<"number of points on first quadrent are "<<count <<endl;
return 0;
}

