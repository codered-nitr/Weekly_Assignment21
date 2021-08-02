//String Rotation...
//Time - O(log n)
//Space - O(1)

bool solve(string str1,string str2){
    if(str1.length()!= str2.length()) return false;
    string st = str1 + str1;
    // cout<<st.find(str2);
    if(st.find(str2)!= string::npos) return true;
    return false;
}
