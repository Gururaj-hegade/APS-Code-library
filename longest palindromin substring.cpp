 int check(string &s,int l,int r,int n)
    {
        while(l>=0 && r<n && s[l]==s[r]){
            l--;
            r++;
        }
        return r-l-1;
    }
    string longestPalindrome(string s) {
      int n=s.length();
      int r=0,ans=0,st=0;
      for(int i=0;i<n;i++){
          int len1=check(s,i,i,n);
          int len2=check(s,i,i+1,n); 
          int len=max(len1,len2); 
          cout<<len<<endl;
          if(len>ans){
              ans=len;
              st=i-(len-1)/2;
          }
      }
      return s.substr(st,ans);
    }
