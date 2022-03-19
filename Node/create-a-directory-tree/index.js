const path = require("path");
const fs = require("fs");

const adj = {
  test: ["child1", "child2"],
  child1: ["gchild1", "gchild2.txt"],
  child2: ["gchild3"],
  gchild3: ["ggchild1", "ggchild2.txt"],
};

// Function to recursively create a directory tree
// Tested function, works fine!
const dfs = (node, currPath) => {
  const newPath = path.join(currPath, node);

  if (node[node.length - 2] === "x") {
    // if it's a file
    fs.writeFile(newPath, "", () => {});
  } else {
    // if it's a directory
    fs.mkdir(newPath, {}, (err) => {
      if (err) throw err;
    });
  }

  if (adj.hasOwnProperty(node)) {
    adj[node].forEach((child) => {
      dfs(child, newPath);
    });
  }
};

dfs("test", __dirname);
