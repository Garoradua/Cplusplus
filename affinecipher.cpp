#include<bits/stdc++.h> 
using namespace std; 
  
const int a=17; 
const int b=20; 
const int x=17;
  
string encryptMessage(string msg) 
{ 
    
    string cipher = "";  
    for (int i = 0; i < msg.length(); i++) 
    { 
        
        if(msg[i]!=' ')  
            /* applying encryption formula ( a x + b ) mod m*/
            cipher = cipher +  
                        (char) ((((a * (msg[i]-'A') ) + b) % 26) + 'A'); 
        else
            //else simply append space character 
            cipher += msg[i];      
    } 
    return cipher; 
} 

string encrypt__Message(string msg) 
{ 
    
    string cipher_ = "";  
    for (int i = 0; i < msg.length(); i++) 
    { 
        
        if(msg[i]!=' ')  
            /* applying encryption formula ( a x + b )X x mod m*/
            cipher_ = cipher_ +  (char) (((((a * (msg[i]-'A') ) + b)*x) % 26) + 'A'); 
        else
            //else simply append space character 
            cipher_ += msg[i];      
    } 
    return cipher_; 
} 
  
/*string decryptCipher(string cipher) 
{ 
    string msg = ""; 
    int a_inv = 0; 
    int flag = 0; 
      
    //Find a^-1 (the multiplicative inverse of a in the group of integers modulo m.)  
    for (int i = 0; i < 26; i++) 
    { 
        flag = (a * i) % 26; 
          
        //Check if (a*i)%26 == 1,then i will be the multiplicative inverse of a 
        if (flag == 1) 
        {  
            a_inv = i; 
        } 
    } 
    for (int i = 0; i < cipher.length(); i++) 
    { 
        if(cipher[i]!=' ') 
            msg = msg +  (char) (((a_inv * ((cipher[i]+'A' - b)) % 26)) + 'A'); 
        else
            msg += cipher[i];  
    } 
  
    return msg; 
} 
  */

int main() 
{ 
    string msg;
    cout<<"Enter string: ";
    cin>>msg;
    cout<<"_________\n";  

    string cipherText = encryptMessage(msg); 
    string cipherText_ = encrypt__Message(msg);
    cout << "Encrypting ((ax+b))mod 26: " << cipherText<<endl;  //encrypted ax+b
    cout << "Encrypting ((a+b)Xx)mod 26: "<< cipherText_<<endl;  // encrypted a+b(x)
    //Calling Decryption function 
    cout << "Decrypted Message: " << msg<<endl; 

    
  
    return 0; 
}