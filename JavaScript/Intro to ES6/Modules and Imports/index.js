import str from "./models/Search.js";
// import { add, mul, ID } from "./views/SearchView.js";
// import { add as a, mul as m, ID } from "./views/SearchView.js";

import * as searchView from "./views/SearchView.js";

// console.log(`Using imported functions ${add(ID, 2)} and ${mul(3, 5)}. ${str}`);
// console.log(`Using imported functions ${a(ID, 2)} and ${m(3, 5)}. ${str}`);
console.log(
  `Using imported functions ${searchView.add(
    searchView.ID,
    2
  )} and ${searchView.mul(3, 5)}. ${str}`
);
