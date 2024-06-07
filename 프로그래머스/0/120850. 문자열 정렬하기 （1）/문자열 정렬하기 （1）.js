function solution(my_string) {
  let answer = [];
  for (let i of my_string) {
    if (!isNaN(i) && i !== "") {
      answer.push(Number(i));
    }
  }
  return answer.sort((a, b) => a - b);
}