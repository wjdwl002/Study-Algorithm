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
    let score = Array.from({length: num}, () => parseInt(1));
    let specs = [];

    for(let i =0; i<num; i++){
        let spec =await ps.readArrayLine();
        specs.push(spec);
    }

    for(let i=0; i<num; i++){
        for(let j=0; j<num; j++){
            if(i==j) continue;
            else{
                if(specs[i][0]<specs[j][0] && specs[i][1]<specs[j][1]){
                    score[i]++;
                }
            }
        }
        console.log(score[i]);
    }
});