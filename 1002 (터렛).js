//1. module
const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});


//2. input
var cnt = 0;
var T, _case = [];
rl.on('line', (line) => {
    if(cnt == 0) { T = Number(line); cnt++;}
    else if (cnt <= T){ cnt++;
        _case = line.split(' ').map(Number);
        func(_case);
        if (cnt == T+1) rl.close();
    }
    else {rl.close();}
})


function func(list) {
    var x1=list[0], y1=list[1], r1=list[2], x2=list[3], y2=list[4], r2=list[5];
    var dist = Math.sqrt(Math.pow(x1-x2,2) + Math.pow(y1-y2,2));
    var rsub = Math.abs(r1 - r2);
    var rsum = r1 + r2;

    // 1. 원이 두 점에서 만나는 경우 (2)( r2 - r1 < d < r1 + r2)
    // 2. 두 원이 외접하는 경우 (1)( d === r1 + r2 )
    // 3. 두 원이 내접하는 경우 (1)( d === r2 - r1 && d !== 0 )
    // 4. 한 원이 다른 원을 포함하는 경우 (0)( d < r2 - r1 )
    // 5. 두 원이 떨어져 만나지 않는 경우 (0)( d > r1 + r2 )
    // 6. 두 원이 일치하는 경우 (-1)( d === 0, r1 === r2 )

    if(dist > rsub && dist < rsum) console.log(2);
    else if (dist == rsum || dist == rsub && dist !== 0 ) console.log(1);
    else if (dist < rSub || dist > rsum) console.log(0);
    else if(dist == 0) {
        if (r1 == r2) console.log(-1);
        else console.log(0);
    }
}
