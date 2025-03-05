#include <iostream>
using namespace std;
#include <vector>

int main() {
              int N,i,sv,sh,minh,minv;
              cout<<"inserisci il numero di giri della gara"<<cout;
              cin>> N;
              vector<float>hamilton,verstappen[N];
              for(i=0;i<N;i=i+1)
              {
                verstappen[i]=(150+random(321-150))/100;
                hamilton[i]=(150+random(321-150))/100;
              }
            sv=0;
            sh=0;
            for(i=0;i<N;i=i+1)
            {
                sv=sv+verstappen[i];
                sh=sh+hamilton[i];
            
            } 
        if(sh<sv)
        {
            cout<<"hamilton ha vinto"<<endl;
        }
       else
       {
        cout<<"verstappen ha vinto"<<endl;
       }
    minh=hamilton[0];
    for(i=0;i<N;i=i+1)
    {
        if(hamilton[i]<minh)
        {
            minh=hamilton[i];
        }
   
    }
    minv=verstappen[0];
    for(i=0,i<N,i=i+1)
    {
        if(verstappen[i]<minv)
        {
            minv=verstappen[i];
        }
    }
    if(minv<minh)
    {
        cout<<"verstappen ha vinto il giro più veloce"<<endl;
    }
    else
    {
        cout<<"verstappen ha vinto il giro più veloce"<<endl;
         }





}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
