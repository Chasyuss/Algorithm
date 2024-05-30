function solution(number) {
  var answer = 0;
  for (let i = 0; i < number.length; i++) {
    answer += parseInt(number.substring(i, i + 1));
  }
  return answer % 9;
}