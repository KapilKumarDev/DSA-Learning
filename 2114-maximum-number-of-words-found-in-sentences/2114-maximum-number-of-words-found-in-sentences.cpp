class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int maxWord = 0;
        for(int i=0; i<n; i++){
            int word = 1;
            int len = sentences[i].size();
            for(int j=0; j<len; j++){
                if(sentences[i][j]==' ') word++;
            }
            if(word>maxWord) maxWord = word;
        }
        return maxWord;
    }
};