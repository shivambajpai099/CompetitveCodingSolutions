int alternatingCharacters(string s) {

    char prev = s[0];
    int del = 0;
    int len = s.length();
    for(int i=1;i<len;i++)
    {
        if(s[i]==prev)
            del++;
        else
            prev = s[i];
    }
        return del;

}
