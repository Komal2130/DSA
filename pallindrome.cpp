#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//Recursive function to check if a tring is a pallindrome or not
bool isPallindrome(const string &text, int start, int end)
{
    //Base case: when start >=end, the string is  a pallindrome
    if(start >= end)
    return true;

    //Recursive case: check if the characters at start and end are same 
    //indices are equal, and recrsively check the remaining

    if(text[start] != text[end])
        return false;
    
    return isPallindrome(text, start+1, end-1);

}
int main()

{
    string text;
    cout<< "Input a string: ";
    cin>>text;
    //getline(cin,text);
    bool palindrome = isPallindrome(text, 0, text.length() - 1);

    //display result

    if(palindrome)
        cout << "\nThe string is a pallindrome."; 
    else
        cout <<  "\nThe string is not a pallindrome."; 
    return 0;
}

