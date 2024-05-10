function solution(s) {
  var answer = "";
  let arr = s.split(" ");
  let str = "";
  for (let i = 0; i < arr.length; i++) {
    str = arr[i];
    for (let j = 0; j < str.length; j++) {
      if (j % 2 === 0) {
        //짝수
        answer += str[j].toUpperCase();
      } else {
        answer += str[j].toLowerCase();
      }
    }
    if (i < arr.length - 1) {
      answer += " ";
    }
  }
  return answer;
}