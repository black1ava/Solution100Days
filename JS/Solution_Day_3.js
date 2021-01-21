const primeNumber = arr => {
  for(let element of arr){
    for(let i = 2; i <= 50; i++){
      if((element * i) <= 100){
        const prime = element * i;
        arr = arr.filter(element => element !== prime);
      }
    }
    if(element === 50){
      return arr;
    }
  }
};

let arr = [] ;
for(let i = 2; i <= 100; ++i){
  arr.push(i);
}

arr = primeNumber(arr);

console.log(arr);