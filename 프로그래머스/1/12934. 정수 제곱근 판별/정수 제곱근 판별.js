function solution(n) {
    for(let x =1; x<=n; x++)
    {
        if(x * x === n)
        {
            return (x+1) * (x+1);
        }
    }
    return -1;
}