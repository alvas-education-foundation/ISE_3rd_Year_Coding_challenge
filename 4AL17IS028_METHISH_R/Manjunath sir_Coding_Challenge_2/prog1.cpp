#include <bits/stdc++.h>
using namespace std;
set<string> st;
bool isaVowel(char c);
bool isaConsonant(char c);
void findSubSequence(string str);
int main(){
   string s = "abekns";
   findSubSequence(s);
   cout<<"The substring generated are :\n";
   for (auto i : st)
      cout<<i<<" ";
   cout << endl;
   return 0;
}
bool isaVowel(char c) {
   return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}
bool isaConsonant(char c) {
   return !isaVowel(c);
}
void findSubSequence(string str) {
   for (int i = 0; i < str.length(); i++) {
      if (isaVowel(str[i])) {
         for (int j = str.length() - 1; j >= i; j--) {
            if (isaConsonant(str[j])) {
               string str_sub = str.substr(i, j + 1);
               st.insert(str_sub);
               for (int k = 1; k < str_sub.length() - 1; k++){
                  string sb = str_sub;
                  sb.erase(sb.begin() + k);
                  findSubSequence(sb);
               }
            }
         }
      }
   }
}