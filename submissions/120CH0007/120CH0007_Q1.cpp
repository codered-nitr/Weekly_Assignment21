#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    stack<int> a;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0'&&s[i]<='9'){
            a.push(s[i]-'0');
        }
        else{
            int operand2=a.top();a.pop() ;
            int operand1=a.top() ;a.pop() ;

            switch(s[i]){
                case '+':
                a.push(operand1+operand2);
                break ;

                case '-':
                a.push(operand1-operand2);
                break ;

                case '*':
                a.push(operand1*operand2);
                break ;

                case '/':
                a.push(operand1/operand2);
                break ;
            }

        }
    }
    int ans=a.top();
    cout<<ans<<"\n" ;


}
