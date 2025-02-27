
bool isPalindrome(char* s) {
    int left=0;
    int right=strlen(s)-1;

    while (right>left)
    {
        if (!isalnum(s[left]))
        {
            left++;
        }else if(!isalnum(s[right])){
            right--;
        }else if (tolower(s[left])==tolower(s[right]))
        {
            left++;
            right--;
        }else{
            retun false;
        }
        
    }
    return true;
}