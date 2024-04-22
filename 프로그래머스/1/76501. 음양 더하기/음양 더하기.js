function solution(absolutes, signs) {
   var answer = 0;
    
   for(let i =0;i<absolutes.length; i++)
   {
        if(signs[i] === true)
        {
            answer = answer+absolutes[i];
        } else if(signs[i] === false)
        {
            answer= answer - absolutes[i];
        }
   }
    return answer;
}