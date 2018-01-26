ass Solution {
public:
    vector<string> Permutation(string str) {
        vector<string> out;
        if(str.size() == 0)
            return out;
        Permutation(out,str,0);
        sort(out.begin(),out.end());
        return out;
    }
    void Permutation(vector<string> &out,string str,int begin) {
        if(begin==(int)(str.size()-1))
            out.push_back(str);
        else{
            for(int i = begin;i<(int)str.size();++i)
            {
                if(i!=begin && str[i]==str[begin])//有重复字符时，跳过
                continue;
                
                //char temp = str[i];
                //str[i] = str[begin];
                //str[begin] = temp;
                swap(str[i],str[begin]);
                
                Permutation(out,str,begin+1);
                
                swap(str[i],str[begin]);
                //temp = str[i];
                //str[i] = str[begin];
                //str[begin] = temp;
            }
        }
    }
};
