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

  let num = await ps.readLine();
  let find = 0;
  for(let i=0; i<2666800; i++){
      let digit = Math.floor(Math.log10(i) + 1);
      for(let j=3; j<digit+3; j++){
          if(Math.floor(i%Math.pow(10,j)/Math.pow(10,j-1))== 6 &&
            Math.floor(i%Math.pow(10,j-1)/Math.pow(10,j-2))==6 &&
            Math.floor(i%Math.pow(10,j-2)/Math.pow(10,j-3))==6) {
                find++;
                break;
            }
      }
      if(find == num) {
        console.log(i);
        return;
        }

  }
});