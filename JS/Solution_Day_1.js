let addUp = (arr, k) => {
  for(element1 of arr){
    
    for(element2 of arr){
      if(element1 + element2 === k){
        return true;
      }
    }
    
  }
  
  return false;
}

let n, k;

n = parseInt(window.prompt("Input numbers of element: "));
let arr = [];

alert(`Input ${n} numbers : `);

for(let i = 0; i < n; i++){
  arr[i] = parseInt(window.prompt(`Number ${i + 1} : `));
}

k = parseInt(window.prompt("Input a k number : "));

console.log(addUp(arr, k));