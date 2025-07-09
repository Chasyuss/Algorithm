function solution(name, yearning, photo) {
    const personYearning = {};
    
    for (let i = 0; i < name.length; i++) {
        personYearning[name[i]] = yearning[i];
    }
    
     return photo.map((arr) =>
        arr.reduce((acc, cur) => acc + (personYearning[cur] || 0), 0)
  );   
    
}