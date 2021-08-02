const fs = require('fs');
let input = fs.readFileSync('./test.txt').toString().split('\n'); //파일(입력) 읽기

var n = input[0]*1; //input 숫자로 변환
var cnt = 0;

while(n>0){
    if(n % 5 == 0){
        n = n - 5;
        cnt ++;
    }
    else if (n % 3 == 0){
        n = n - 3;
        cnt++;
    }
    else if (n > 5){
        n = n - 5;
        cnt++;
    } else{
        cnt = -1;
        break;
    }
}
console.log(cnt);