#include <iostream>  
using namespace std;  
int main()  
{  
    int num,remainder,sum=0,temp;    
    cout<<"Please Enter Your  Number :";    
    cin>>num;    
    temp=num;    
    while(temp>0)    // to reverse the input number
    {    
    remainder=temp%10;    
    sum=(sum*10)+remainder;    
    temp=temp/10;    
    }    
    if(num==sum){    
    cout<num<<" is a Palindrome number";       
    }
    else{
    cout<num<<" is not a Palindrome number";   
    } 
    return 0;  
}  