const posPair = (str, ch, pos) => {
  pos++;
  for(; pos < str.length; pos++){
    if(str[pos] === ch){
      break;
    }
  }
  return pos;
};

let mvTime = str => {
  let mv = 0;
  for(let i = 0; i < str.length; i += 2){
    if(str[i] !== str[i + 1]){
      const pair = posPair(str, str[i], i);
      const temp = str[i + 1];
      str = str.split("");
      str.splice(i + 1, 1, str[i]);
      str.splice(pair, 1, temp);
      str = str.join("");
      mv++;
    }
  }
  return mv;
};

const people = "abcbac";
const move = mvTime(people);
console.log(move);