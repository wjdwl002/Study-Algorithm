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
  };
})(process);


ps.main(async () => {
  /* main logic goes here */

  let [num] = await ps.readArrayLine()
  let arr = [];
  for (let i =0; i<num; i++){
      arr.push(parseInt(await ps.readLine()));
  }
  
  let tempArr = Array.from({length:10000},()=>0);
  let newArr = [];

  arr.forEach(el=>{
      tempArr[el]++;
  })

  tempArr.forEach((el, i)=>{
      for(let j=0; j<el; j++)
      newArr.push(i);
  })
  

  newArr.forEach(el=>{
      console.log(el);
  })
});