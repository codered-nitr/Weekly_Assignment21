import java.util.Stack; 
  
class Postfix{ 
    
    static int evaluatePostfix(String m){ 
        
        Stack<Integer> stack=new Stack<>(); 
          
        for(int i=0;i<m.length();i++){ 
            char c=m.charAt(i); 
              
            if(Character.isDigit(c)){ 
                stack.push(c - '0'); 
            }    
              
            else{ 
                int val1 = stack.pop(); 
                int val2 = stack.pop(); 
                  
                switch(c){ 
                    case '+': 
                        stack.push(val2+val1); 
                        break; 
                      
                    case '-': 
                        stack.push(val2- val1); 
                        break; 
                      
                    case '/': 
                        stack.push(val2/val1); 
                        break; 
                      
                    case '*': 
                        stack.push(val2*val1); 
                        break; 
                } 
            } 
        } 
        return stack.pop();     
    } 
      
    public static void main(String[] args){
        
        String s = "231*+9-"; 
        System.out.println(evaluatePostfix(s));
        
    } 
}
