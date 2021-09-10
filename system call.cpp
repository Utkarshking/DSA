#include<iostream>
#include<fstream>
using namespace std;
class a
{
public:
//defining the string class object as the data member of the class
string name;
//initialising the b variable in the class
int b;
//intialing the c variable in the class
int c;	
};
int main()
{ //initialising the object of fstream which can be open in  output and write mode
fstream my_file;
//making the object of the class a defined above 
a obj;
//open function refers to the system call
my_file.open("my_file",ios::out);
//this condition below refers to the file not exist
if(!my_file)
{
//cout is also a system call as to display the message on the screen	
cout<<"file not created"<<endl;	
}
else
{
//below conditon now refers to the condition in which the file has been created	
cout<<"file created successfully"<<endl;
//this is the following system call which is used to write in the following file
my_file.write((char*)&obj,sizeof(obj));
//this is the follwing system call which is used to  read the charecters in the follwing file
my_file.read((char*)&obj,sizeof(obj));
//this below system call is used to close the  following file
my_file.close();
}
	
}
