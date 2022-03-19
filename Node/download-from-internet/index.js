const https = require("https");
const http = require("http");
const fs = require("fs");
const url = require("url");
const path = require("path");

const getDownloadUrl = (url) => new URL(url);
const getLastSegmentOfUrl = (url) =>
  url.href.substring(url.href.lastIndexOf("/") + 1);

const hardCodedLinks = [
  "https://raw.githubusercontent.com/muhesh-kumar/gipher/main/index.html",
  "https://raw.githubusercontent.com/muhesh-kumar/gipher/main/README.md",
  "https://cdn.pixabay.com/photo/2018/01/14/23/12/nature-3082832_960_720.jpg",
  "http://www.africau.edu/images/default/sample.pdf",
  "https://file-examples-com.github.io/uploads/2017/11/file_example_MP3_700KB.mp3",
];

const downloadUrl = getDownloadUrl(hardCodedLinks[0]);
const lastSegmentOfUrl = getLastSegmentOfUrl(downloadUrl);
const pathToSave = path.join(__dirname, "downloads", lastSegmentOfUrl);

if (downloadUrl.protocol === "https:") {
  const request = https.get(downloadUrl, (response) => {
    if (response.statusCode === 200) {
      const file = fs.createWriteStream(pathToSave);
      response.pipe(file);
    } else
      throw new Error(
        `${response.statusCode} received, couldn't download the requested file`
      );
  });
} else {
  const request = http.get(downloadUrl, (response) => {
    if (response.statusCode === 200) {
      const file = fs.createWriteStream(pathToSave);
      response.pipe(file);
    } else
      throw new Error(
        `${response.statusCode} received, couldn't download the requested file`
      );
  });
}
