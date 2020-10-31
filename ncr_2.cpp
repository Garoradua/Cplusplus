#include<iostream>
using namespace std;
int
main ()
{
  int n, length, l;
  cin >> n;
  char a[n];
  for (int i = 0; i < n; i++)
    {
      cin >> length;
      string s;
      cin >> s;
      int count =0;
      for(int j=0; j<length; j++){
          if(s[j]=='a'|| s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
                count+=1;
          
      }
        if(count >1){
            a[i] = 'D';
        }
        else{
            a[i] = 'A';
        }
        
   
    }
    
    for(int i=0; i<n; i++){
        cout << a[i] << endl;
    }
    return 0;
}
