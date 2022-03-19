const fs = require("fs");
const zlib = require("zlib");

const gzip = zlib.createGzip();

const readStream = fs.createReadStream("./example.txt", "utf8");

const writeStream = fs.createWriteStream("./example2.txt");

// readStream is more efficient than readFile() method since readFile() uses a buffer to load the file first before reading it. whereas readStream uses a very small buffer and it reads the file in chunks
// readStream.on("data", (chunk) => {
//   writeStream.write(chunk);
//   // console.log(chunk);
// });

// this is a short-hand for the above functionality
readStream.pipe(writeStream); // source.pipe(destination)

// readStream.pipe(gzip).pipe(writeStream); // compressed
