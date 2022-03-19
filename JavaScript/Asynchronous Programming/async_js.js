// using timers
// setTimeout(() => {
//   console.log("ran after 2 seconds");
//   setTimeout(() => {
//     console.log("ran after 2 seconds ran");
//   }, 0);
//   console.log("ran right after 2 seconds ran");
//   console.log("ran right after 2 seconds ran");
//   console.log("ran right after 2 seconds ran");
//   console.log("ran right after 2 seconds ran");
//   console.log("ran right after 2 seconds ran");
//   console.log("ran right after 2 seconds ran");
//   console.log("ran right after 2 seconds ran");
//   console.log("ran right after 2 seconds ran");
//   console.log("ran right after 2 seconds ran");
//   console.log("ran right after 2 seconds ran");
//   console.log("ran right after 2 seconds ran");
//   console.log("ran right after 2 seconds ran");
//   console.log("ran right after 2 seconds ran");
// }, 2000);

// using promises
let done = true;
// done = false;

// Creating a promise
const isItDoneYet = new Promise((resolve, reject) => {
  if (done) {
    const workDone = "Here is the thing I built";
    resolve(workDone);
  } else {
    const why = "Still working on something else";
    reject(why);
  }
});

// Consuming a promise
const checkIfItsDone = () => {
  isItDoneYet
    .then((ok) => {
      console.log(ok);
    })
    .catch((err) => {
      console.error(err);
    });
};

checkIfItsDone();
