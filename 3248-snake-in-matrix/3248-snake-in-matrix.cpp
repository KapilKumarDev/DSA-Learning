class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int r=0, c=0;
        for(int i=0; i<commands.size(); i++){
            if(commands[i] == "RIGHT") c+=1;
            else if(commands[i] == "LEFT") c-=1;
            else if(commands[i] == "UP") r-=1;
            else r+=1;
        }
        return n*r+c;
    }
};