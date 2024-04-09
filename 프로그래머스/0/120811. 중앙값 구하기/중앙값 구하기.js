function solution(array) {
    let mid = Math.floor(array.length / 2)
    let highsort = array.sort((a, b) => a - b)
    return highsort[mid];
}