bool areRotations(string str1, string str2)
{

if (str1.length() != str2.length())
return false;
else
 {
 	const char * c1 = str1.c_str();
 	const char * c2 = str2.c_str();
   	if(strcmp(c1,c2)==0)
   	return true;
   	
   	else
   	{   
   	queue <char> q;
   	int i;
   	for(i=0;i<str1.length();i++)
   	q.push(str2[i]);
   	 
   	 for(i=0;i<str1.length();i++)
   	   	{
   	   		if(strcmp(c1,c2)==0)
   	        return true;
   	        else{
   	   		q.pop();
   	   		q.push(str2[i]);
				  }
   	   	}
      return false;		
	}
  }

}
