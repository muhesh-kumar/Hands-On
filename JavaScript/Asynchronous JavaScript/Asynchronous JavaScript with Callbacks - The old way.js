function getRecipe() {
  setTimeout(() => {
    const recipeID = [1, 2, 3, 4];
    console.log(recipeID);
    
    setTimeout((id) => {
      const recipe = {title: "Frecsh tomato pasta", publisher: "Muhesh"};
      console.log(`${id}: ${recipe.title}`);
      
      setTimeout((publisher) => {
        const recipe = {title: "Italian Pizza", publisher: "Muhesh"};
        console.log(recipe);
      }, 1500, recipe.publisher);
    }, 1500, recipeID[2]);

  }, 1500);
}

getRecipe();