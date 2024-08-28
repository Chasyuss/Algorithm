function solution(num_list) {
  let add = 0;
  let mul = 1;
  if (num_list.length >= 11) {
    for (let i = 0; i < num_list.length; i++) {
      add += num_list[i];
    }
    return add;
  } else if (num_list.length <= 10) {
    for (let j = 0; j < num_list.length; j++) {
      mul *= num_list[j];
    }
    return mul;
  }
}

