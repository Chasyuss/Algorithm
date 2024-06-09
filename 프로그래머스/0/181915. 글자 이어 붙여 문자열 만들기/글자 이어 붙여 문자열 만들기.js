function solution(my_string, index_list) {
    const newList =[]
   index_list.map(a => newList.push(my_string[a]))
return newList.join("")
}