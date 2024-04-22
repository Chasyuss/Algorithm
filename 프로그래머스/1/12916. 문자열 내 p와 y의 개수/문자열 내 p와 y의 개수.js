function solution(s){
    var answer = true;

    // 1. 대문자 통일
    s = s.toUpperCase();

    //2. for 문을 통해서 문자열의 요소 하나하나씩을 비교 

    var num  = 0; 
    for(var i =0; i<s.length; i++)
    {
        if(s[i] === 'P')
        {
            num ++; 
        }

        if(s[i] === 'Y')
        {
            num--; 
        }
    }
   
    //3. 개수 체크( p와 y의 개수가 같은지를 체크)
    if(num === 0)
    {
        answer = true;
    } 
    else {
        answer = false;
    }


    return answer;
}