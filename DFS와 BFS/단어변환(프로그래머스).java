import java.util.*;
class Solution {
    public int solution(String begin, String target, String[] words) {
        int answer = 0;
        int[] visited = new int[words.length];
        Queue<Integer> queue = new LinkedList<Integer>();
        int v=0;
        
        for(int i=0; i< words.length; i++){
            if(comp(begin, words[i])){
                queue.add(i);
                visited[i]=1;
                
            }
        }
        
        
        while(!queue.isEmpty()){
            v=queue.poll();
            if(target.equals(words[v])){
                break;   
            }
            for(int i=0; i<words.length; i++){
                if(comp(words[v], words[i]) && visited[i]==0){
                    queue.add(i);
                    visited[i]=visited[v]+1;
                    
                }
            }
            
        }
        
            if(target.equals(words[v])){
                return visited[v];
            }
            else 
                return 0;
    }
    
    
    
    boolean comp(String start, String target){
        int check=0;
        for(int i=0; i<start.length(); i++){
            if(start.charAt(i)!=target.charAt(i)){
                check++;
            }
        }
        
        if(check==1)
            return true;
        else
            return false;
        
    }
}
