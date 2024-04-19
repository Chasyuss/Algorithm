function solution(my_string) {
  const num = my_string.split("");
  let result = 0;
  
  for(let i = 0; i < num.length; i++)
  {
    if(Number(num[i]))
    {
        result += Number(num[i])
    }
  }
  return result
}