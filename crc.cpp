//Data Communication and Computer Networks(lab-2)
#include<bits/stdc++.h>
using namespace std; 
string xor_1(string a,string b)
{
   string r="";
   int size=b.size();
   for(int i=1;i<size;++i)
   {
       if(a[i]==b[i])
    	r+="0";
       else
       r+="1";
       
   } 
   return r;
}
string mod2div(string divident,string divisor){
    //divisor length to be xor'ed at a time
    int div_len=divisor.length();
    
    //slicing the string for a particular moves
    string t=divident.substr(0,div_len);
//divident length to be xor'ed at a time
    int size_divident=divident.length();
    while(div_len<size_divident)
    {
        if(t[0]=='1')
        {
        t=xor_1(divisor,t)+divident[div_len];
        }
        else{
            //if the left most bit is 0 so we have to use to zero divisor to bring it down
            t=xor_1(std::string(div_len,'0'),t)+divident[div_len];
            //incrementing for the no of divisions to perform
            div_len+=1;
            }
            


    }
    if (t[0]=='1')
       t=xor_1(divisor,t);
    else
     t=xor_1(std::string(div_len,'0'),t);
     
	 return t;
}
int main()
{
//bits that user wanted to send    
string str;
//input polynomial string
string str_1;
cout<<"enter the bits that user wanted to send"<<endl;
cin>>str;
cout<<"enter the polynomial string"<<endl;
cin>>str_1;
cout<<str<<endl;
cout<<str_1<<endl;
//string str="110101";
//string str_1="1101";

//counter initialized for counting the number of charecters in the string
int degree=str_1.size()-1;
cout<<"the degree of the polynomial is : "<<degree<<endl;
while(degree!=0)
{
str=str+"0";
degree--;
}
int key_len=str_1.length();
//string appended_data=(str+std::string(key_len-1,'0'));
string remainder=mod2div(str,str_1);
//append remainder in the original data
string codeword=str+remainder;
cout<<"remainder :"<<remainder<<endl;
cout<<" "<<codeword<<endl;
}
