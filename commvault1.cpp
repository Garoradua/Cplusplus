#include <iostream>
#include<algorithm>
using namespace std;

int main()
{   
    int n;
    cin>>n;

    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    sort(A,A+n);
    
   
    int p=A[0];
    int c=0;
    int cmax=0;
    int v;
    
    for(int i=0;i<n;i++){
        if(A[i]==p)
        {
            c++;
        }
        else
        {
            if(cmax==0)
            {
                cmax=c;
                v=A[i-1];
                p=A[i];
                
                
            }
            
            else
            {
                if(c>cmax)
                {
                    cmax=c;
                    
                    v=A[i-1];
                    
                    
                }
                
                
                p=A[i];
            }
            
            c=1;
            
            
        }
    }
    
  if(c>cmax)
                {
                    cmax=c;
                    
                    v=A[n-1];
                    
                    
                }
    cout<<v<<" "<<cmax;

    return 0;
}