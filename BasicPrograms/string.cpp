#include<iostream>
#include<string>
using namespace std;

//text ="A B C D E"
//     start     end

//text ="E B C D A"
//     start     end
//      s+1       e-1
//         s    e
// //text ="E D C B A"
//     start     end
void reverse_String(string &text, int start, int end)
{
    //Base case: when start >=end,
    //the string is fully reversed
    if(start >=end)
    return;

    //swap characters at start and end indices
    swap(text[start],text[end]);     //swap is available in std

    //Recursive case: move to the next pair of characters
    reverse_String(text, start+1, end-1);



}

int main()
{
    string text;
    cout<<"Input a string:";
    cin>>text;
    //getline(cin,text);

    reverse_String(text, 0 ,text.length() -1);
    cout<<"Reversed string: "<<text;
    return 0;
}