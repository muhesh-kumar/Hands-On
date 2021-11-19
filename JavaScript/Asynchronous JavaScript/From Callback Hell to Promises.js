const getIDs = new Promise((resolve, reject) => {
  setTimeout(() => {
    resolve([1, 2, 3, 4]);
  }, 1500);
});

getIDs.then(IDs => {
  console.log(IDs);
});