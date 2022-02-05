"use strict";

const ps = (function (process) {
  const readline = require("readline");

  const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
  });

  let lines = [];
  let cursor = 0;

  rl.on("line", function (line) {
    lines.push(line);
  });

  return {
    main(f) {
      f()
        .catch((err) => {
          console.error(err);
          process.exit(1);
        })
        .finally(() => {
          rl.close();
        });
    },
    use(name, f) {
      this[name] = f;
    },
    readLine: async function readLine() {
      return new Promise((resolve) => {
        if (cursor < lines.length) {
          resolve(lines[cursor++]);
        } else {
          setTimeout(() =>
            readLine().then((line) => {
              resolve(line);
            })
          );
        }
      });
    },
    async readArrayLine() {
      const line = await this.readLine();
      return line.split(/\s/).map((t) => parseInt(t));
    },
    write(data) {
      process.stdout.write(data + "");
    },
    writeLine(data) {
      process.stdout.write((data === undefined ? "" : data) + "\n");
    },
    range(start, end, step = 1) {
      if (end === undefined) {
        end = start;
        start = 0;
      }
      return {
        [Symbol.iterator]: function* () {
          for (let i = start; i < end; i += step) {
            yield i;
          }
        },
      };
    },
  };
})(process);


ps.main(async () => {
  /* main logic goes here */

    let num = parseInt(await ps.readLine());
    let arr = []
    let findInt = false

    for(let i = 10;  i>=0; i--){
        if(!findInt && Math.floor(num/Math.pow(10,i))==0) ;
        else{
            findInt = true;
            arr.push(Math.floor(num/Math.pow(10,i)));
            num -= Math.floor(num / Math.pow(10, i)) * Math.pow(10,i);
        }
    }
    
    arr.sort((a, b)=>b -a);

    for(let i=0; i<arr.length; i++){
        num += arr[i] * Math.pow(10,arr.length - i -1);
    }
    console.log(num);
  
});