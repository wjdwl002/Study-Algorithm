//1. module
const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});


//2. input
rl.on('line', (line) => {
    if(line==0) rl.close();
    else {
        const arrPrime = primeArray(line, line*2);
        var cnt = 0;
        for (var i = line; i<= line*2; i++)
            if (arrPrime[i]) cnt++;
        console.log(cnt);
    }
})


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

