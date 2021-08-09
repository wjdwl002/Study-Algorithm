//1. module
const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});


//2. input
// var cnt = 0;
// var T;
// rl.on('line', (line) => {
//     if(cnt == 0) {
//         T = line; //첫번째 입력 T
//         cnt++;
//     }
//     else if (cnt < T){
//         cnt++;
//         goldBach(line);
//     }
//     else{
//         rl.close();
//     }
// })


//3. 함수
function primeArray(M,N){
    var arr = new Array(N+1).fill(true);
    for (var i = 2; i*i<=N; i++)
        if(arr[i]) //이미 지워진 수라면 건너뛰기 
            for(var j = 2 * i; j<=N; j+=i) //아직 지워진 수가 아니면 그 수의 배수 모두 지우기
                arr[j] = false;
                for (var i=0; i<=M; i++) arr[i] = false; //범위 밖의 데이터는 모두 false로 초기화
    return arr;
}

function goldBach(N){
    const arrPrime = primeArray(1, N);
    const med = N / 2;
    for (var i = med; i<= N; i++)
        console.log(i,arrPrime[i], N-i, arrPrime[N-i]);
        if(arrPrime[i] == true && arrPrime[N-i] == true) {
            console.log(i, N-i);
            return ;
        }
}

console.log(goldBach(10));