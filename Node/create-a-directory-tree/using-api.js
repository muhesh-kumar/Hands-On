const path = require("path");
const fs = require("fs");

class Content {
  constructor(name, type, url, downUrl) {
    this.name = name;
    this.type = type;
    this.url = url;
    this.downUrl = downUrl;
  }
}

// Function to recursively create a directory tree
// Tested function, works fine!
const recursivelyCreateTree = (node, currPath) => {
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
      recursivelyCreateTree(child, newPath);
    });
  }
};

recursivelyCreateTree("test", __dirname);
