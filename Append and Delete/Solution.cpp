// Link :- https://www.hackerrank.com/challenges/append-and-delete/problem?isFullScreen=true&h_r=next-challenge&h_v=zen


// Code :- 

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int no_of_different_char_in(string str1,string str2){
    int count =0;
    for(int i=0;i<str1.length();i++)
    {
        if(str1[i]!=str2[i])
        {
            return str1.length()-i;
            break;
        }
    }
    return 0;
    
}

string solve_equal_length_strings(string str1,string str2,int k)
{
    int diff_chars=no_of_different_char_in(str1,str2);
    
    if(k>= 2*str1.length())
    {
        return "Yes";
    }
    else{
        if(k>= 2*diff_chars && k%2==0)
        {
            return "Yes";
        }
        
    }
     return "No";
}

string appendAndDelete(string s, string t, int k) {
    string small=s;
    string big=t;
    int length_diff=s.length()-t.length();
    if(length_diff!=0)
    {
        if(length_diff>k)
        {
            return "No";
        }
        
        if(length_diff>0){
            big=s;
            small=t;
        }
        else if(length_diff<0)
        {
            big=s;
            small=t;
        }
        
        big=big.substr(0,small.length());
        k=k-length_diff;
        if(k<0)
        return "No";
        // Now both string have equal length
        
        return solve_equal_length_strings(small, big , k); 
    }
    else{
        return solve_equal_length_strings(s , t , k); 
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
