const readline = require("readline").createInterface({
  input: process.stdin,
  output: process.stdout
});


readline.question("Input your a string: ", str => {
  function checkRepeatedChar(str){
    let charArr = str.split('');
    for(let i = 0; i < str.length - 2; i++){
      if(charArr[i] === charArr[i + 1]){
        return true;
      }
    }
    return false;
  }

  function noRepeatedChar(ch, index, str){
    let i;
    for(i = index + 1; i < str.length; i++){
      if(str[i] !== ch){
        break;
      }
    }

    let charArr = str.split("");
    let temp = charArr[index];
    charArr[index] = charArr[i];
    charArr[i] = temp;

    return charArr.join("");
  }

  function replaceRepeatedChar(str, time = 100){
    if(time !== 0){
      for(let i = 0; i < str.length - 1; i++){
        if(str[i] === str[i + 1]){
          str = noRepeatedChar(str[i + 1], i + 1, str);
        }
      }
  
      str = str.split('').reverse().join('');
  
      if(!checkRepeatedChar(str)){
        return str;
      }
  
      return replaceRepeatedChar(str, time - 1);
    }

    return "It cannot be changed"
  }

  if(checkRepeatedChar(str)){
    console.log(replaceRepeatedChar(str));
  }else{
    console.log(str);
  }


  readline.close();
})


