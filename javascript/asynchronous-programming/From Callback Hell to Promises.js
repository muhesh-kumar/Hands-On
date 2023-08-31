const getIDs = new Promise((resolve, reject) => {
  setTimeout(() => {
    reject([1, 2, 3, 4]); // if the promise was successful
  }, 1500); // executes the callback function after the passed time interval (in this case after 1.5 seconds)
});

const getRecipe = (recID) => {
  return new Promise((resolve, reject) => {
    setTimeout(
      () => {
        const recipe = { title: "Fresh tomato pasta", publisher: "Muhesh" };
        resolve(`${id}: ${recipe.title}`);
      },
      1500,
      recID
    );
  });
};

// we can use .then() and .catch() methods on Promises to consume them

// Consuming a promise
getIDs
  .then((IDs) => {
    // the above parameter will be the argument of the resolve() method in the promise
    console.log(IDs);
    return getRecipe(IDs[2]);
  })
  .then((recipe) => {
    console.log(recipe);
  })
  .catch((err) => {
    console.log("Error");
  });
