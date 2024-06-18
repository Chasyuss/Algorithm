function solution(x) {
  let answer = true;

  let arr = String(x).split("");
  let sum = 0;

  for (let i = 0; i < arr.length; i++) {
    sum += Number(arr[i]);
  }

  if (!(x % sum === 0)) {
    answer = false;
  }

  return answer;
}