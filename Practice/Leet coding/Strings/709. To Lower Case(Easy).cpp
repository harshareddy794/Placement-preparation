class Solution {
public:
    string toLowerCase(string str) {
        for(int i=0;i<str.length();i++){
            if(int(str[i])<91 && int(str[i])>64){
                str[i] = int(str[i])+32;
            }
        }
        return str;
    }
};a
