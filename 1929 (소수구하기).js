//1. library 구현
const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});
function _each(list, func){ //배열 순회 함수
    for (var i =0; i<list.length; i++){
        return func(list[i]);}}
function _init(list, data) { //배열 초기화 함수
    _each(list, function(num){ num = data;})}


//2. 입력
var input = [];
rl.on('line', (line) => {
    input.push(line.trim());
})
.on('close', function(){
    const M = input[0];
    const N = input[1];
    const arrPrime = primeArray(N);
    for (var i =M; i<=N; i++){ if(arrPrime[i]) console.log(arrPrime[i]); }
})

//3. 풀이
function primeArray(N){
    var arr = new Array(N+1).fill(true);
    arr[1] = false;
    for (var i = 2; i<=N; i++){
        if(!arr[i]) continue; //이미 지워진 수라면 건너뛰기 
        for(var j = 2 * i; j<=N; j+=i){ //아직 지워진 수가 아니면 그 수의 배수 모두 지우기
            arr[j] = false;
        }
    }
    return arr;
}
