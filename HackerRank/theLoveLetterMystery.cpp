int theLoveLetterMystery(string s) {
    
    int len = s.length();
    int i,j,cnt = 0;
    i = 0;
    j = len-1;
    while(i<j)
    {
        if( s[i]>s[j])
        {
            cnt = cnt + int(s[i]) - int(s[j]);
            i++;
            j--;
        }
        else
        {
            cnt = cnt + int(s[j]) - int(s[i]);
            i++;
            j--;
        }
    }

    return cnt;
}
