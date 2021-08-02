//merge sorted lists
vector<int> solve(vector<int>& a, vector<int>& b) {
    	int m=a.size(),n=b.size();
	vector<int> v;
	int i=0,j=0;
	while(i<m && j<n){
		if(a[i]<b[j]){
			v.push_back(a[i]);
			i++;
		}
		else if (a[i]>b[j]){
			v.push_back(b[j]);
			j++;
		}
		else {
			v.push_back(a[i]);
			v.push_back(b[j]);
			i++,j++;
		}

	}
	
		for (;i<m;i++){
			v.push_back(a[i]);
		}
		
		for (;j<n;j++){
			v.push_back(b[j]);
		}

        return v;

}
