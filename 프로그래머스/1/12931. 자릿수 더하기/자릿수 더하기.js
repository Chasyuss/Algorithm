function solution(n)
{
    var answer = 0;
     let str = n.toString();
     str = [...str].map(Number);
    for(let i = 0; i <str.length; i++)
        {
           answer += str[i];
        }

    return answer;
}