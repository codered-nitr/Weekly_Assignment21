class Solution
{
    public:
    int q(char c){
        switch(c){
            case '1':
            return 1;
             case '2':
            return 2;
             case '3':
            return 3;
             case '4':
            return 4;
             case '5':
            return 5;
             case '6':
            return 6;
             case '7':
            return 7;
             case '8':
            return 8;
             case '9':
            return 9;
             case '0':
            return 0;
        }
    }
    int evaluatePostfix(string S)
    {
        stack<int> s;
        for(int i=0;i<S.length();i++){
            if(S[i]>=48 && S[i]<=57){
                int p=q(S[i]);
                s.push(p);
            }
            else{
              int y=s.top();
              s.pop();
              
              int x=s.top();
              s.pop();
              if(S[i]=='*'){
                  s.push(x*y);
              }
                if(S[i]=='+'){
                  s.push(x+y);
              }
                if(S[i]=='/'){
                  s.push(x/y);
              }
                if(S[i]=='-'){
                  s.push(x-y);
              }
                
                
                
                
            }
        }
        return s.top();
    }
};
