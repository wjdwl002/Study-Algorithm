const fs = require('fs');
let input = fs.readFileSync('./test.txt').toString().split('\n');

function plus(k, n){
  if(k== 0){
    return n;
  }
  else if(n==1){
    return 1;
  }
  return plus(k, n-1)+plus(k-1,n);
}


const number = +input[0]
for (var i = 1; i<number; i+=2){
  console.log(plus(input[i]*1,input[i+1]*1));
}
