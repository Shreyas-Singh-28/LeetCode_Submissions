int lengthOfLastWord(char* s) {
    int c=0,i=strlen(s)-1;
    while(s[i]==' ')
        i--;
    while(i>=0) {
        if(s[i]==' ')
            break;
        c++;
        i--;
    }
    return c;
}
