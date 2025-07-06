function solution(k, score) {
    var answer = [];
    let arr = [];
    
    for(let i = 0; i < score.length; i++){
        if(i < k){
            arr[i] = score[i];
            answer.push(Math.min(...arr));
        } else { 
            arr[i] = score[i];
            arr.sort((a,b)=>b-a);
            answer.push(arr[k-1]);
        }
    }
    return answer;
}