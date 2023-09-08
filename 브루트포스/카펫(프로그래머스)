class Solution {
    public int[] solution(int brown, int yellow) {
        int[] answer = new int[2];
        int test=0;
        int y_width;
        for(y_width=1; y_width<=yellow; y_width++){
            if(yellow%y_width==0){
                test=(yellow/y_width)*2+y_width*2+4;
                if(test == brown)
                    break;
            }
        }
        answer[0]= yellow/y_width+2;
        answer[1]= y_width+2;
        
        
        return answer;
    }
}
