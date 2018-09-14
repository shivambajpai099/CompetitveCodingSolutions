int beautifulBinaryString(string b) {
    int i,len = b.length();
    i = 0;
    int cnt = 0;
    while(i<len)
    {
        if(b[i]=='0')
        {
            if( (i+1)<len && b[i+1]=='1')
            {
                if( (i+2)<len && b[i+2]=='0')
                {  cnt++;
                   i = i+3;
                }
                else
                    i++;
            }
            else
                i++;
        }
        
        else
            i++;
        
    }
    
    return cnt;
}
