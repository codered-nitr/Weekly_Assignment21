 public void Array(int a[], int m){
        int p[] = new int[m];
        int pro=1;
        for(int i=0; i<m; i++){
            pro = pro * a[i];
        }
        for(int i=0; i<m; i++){
            p[i] = pro / a[i];
        }
        
        for(int i=0; i<m; i++)
            System.out.print(p[i] + " ");
        }
    }
   
