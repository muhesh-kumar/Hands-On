// The Observer Pattern

const EventEmitter = require("events");
const http = require("http");

class Sales extends EventEmitter {
  constructor() {
    super();
  }
}

// Instead of directly creating a EventEmitter object, create a custom class and instantiate an object
// const myEmitter = new EventEmitter();
const myEmitter = new Sales();

// observer(listenter) #1
myEmitter.on("newSale", () => {
  console.log("There was a new sale");
});

// observer #2
myEmitter.on("newSale", () => {
  console.log("Costumer name: Muhesh");
});

// observer #3
myEmitter.on("newSale", (stock) => {
  console.log(`There are now ${stock} items left in stock`);
});

myEmitter.emit("newSale", 9);

// -------------------------------------------------------------------------

const server = http.createServer();
server.on("request", (req, res) => {
  console.log("Request received");
  console.log(req.url);
  res.end("Request received");
});

server.on("request", (req, res) => {
  console.log("Another request");
});

server.on("close", () => {
  console.log("Server closed");
});

server.listen(8000, "127.0.0.1", () => {
  console.log("Waiting for requests...");
});
