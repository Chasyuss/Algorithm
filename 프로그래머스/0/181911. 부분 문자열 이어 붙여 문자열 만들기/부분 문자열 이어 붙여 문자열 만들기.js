function solution(my_strings, parts) {
    let answer = "";
    for(let i =0; i<my_strings.length; i++)
        {
            const [a,b] = parts[i];
            answer+= my_strings[i].slice(a,b+1);
        }
    return answer;
}