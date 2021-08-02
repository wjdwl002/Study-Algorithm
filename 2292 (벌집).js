const fs = require('fs');
let input = fs.readFileSync('./test.txt').toString().split('\n'); //파일(입력) 읽기
const x = input[0] * 1; //input을 숫자로 변환
var n = 1; //겹수 == 이동 칸 수
var range = 1;

while(true){
    if(range >= x){
        console.log(n);
        return 0;
    }
    else {
        range += 6 * n;
        n++;
    }
}
