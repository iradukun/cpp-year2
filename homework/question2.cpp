#include<iostream>
#include <math.h>
using namespace std;
void generatepair(int highest){
int base,height,hypo=0;
int lower=2;
while(lower<highest){
    int index;
 for(index=1;index<lower;++index){
   	base= pow(lower,2) - pow(index,2);
	height = 2 * lower * index;
	hypo =pow(lower,2) + pow(index,2);
    if(hypo >highest)
        break;
     cout<<"("<<base<<" , "<<height<<" ,"<<hypo<<")"<<endl;  
 }
 lower++;
}
 }
int main(){
   int limit=100;
   cout<<"RESULTS!   "<<endl;
   cout<<"          enjoy"<<endl;
   generatepair(limit);
    return 0;
}