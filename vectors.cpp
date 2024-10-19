#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
                            //   >>>>>>>>>>>BASICS OF VECTORS <<<<<<<<<<<<<<<<<
int main(){
    vector<int>v;
    cout<<"size "<<v.size()<<endl;
    cout<<"capacity "<<v.capacity()<<endl;
    v.push_back(5);
     cout<<"size "<<v.size()<<endl;
    cout<<"capacity "<<v.capacity()<<endl;
    v.push_back(2);
     cout<<"size "<<v.size()<<endl;
    cout<<"capacity "<<v.capacity()<<endl;
    v.push_back(3);
     cout<<"size "<<v.size()<<endl;
    cout<<"capacity "<<v.capacity()<<endl;
       v.resize(8);
 cout<<"size "<<v.size()<<endl;
    cout<<"capacity "<<v.capacity()<<endl;
    v.pop_back();
    cout<<"size "<<v.size()<<endl;
    cout<<"capacity "<<v.capacity()<<endl;


    return 0;
}
                                //    >>>>>>>>VECTORS USING LOOPS AND TRICKS>>>>>>>>>>>
int main(){
   vector<int>v;       // OR  vector<int>v(5);
   for(int i=0;i<5;i++){   // for(int i=0;i<5;i++){
    int element;            // cin>>v[i];}
    cin>>element;
    v.push_back(element);
   }
   for(int i=0;i<5;i++){
    cout<<v[i]<<" ";
   } cout<<endl;
   
   v.insert(v.begin()+3,8);
// for each loop- here we iterate every element 
for(int ele:v){
    cout<<ele<<" ";
} cout<<endl;

v.erase(v.end()-2);
// while loop
int r=0;
while(r<v.size()){
    cout<<v[r++]<<" ";
}cout<<endl;

return 0;
}
                        //  >>>>>>>>>>>>>>     // COUNT THE NUMBER OF OCCURENCE OF AN ELEMENT IN AN ARRAY  >>>>>>>>>>>>>>.


int main(){
    vector<int>v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    cout<<"enter the element"<<endl;
    int x;
    cin>>x;

    int count=0;
    for(int i=0;i<6;i++){
        if(v[i]==x){
            count++;
        }

    }
    cout<<count<<endl;
        
    return 0;
}
                               