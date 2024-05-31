const express = require('express');
const app = express();

app.get('/', (req, res) => {
    res.send("This is the response by the app for the GET requests made by client");
})

app.listen(4000, () => {
    console.log("The app has to listen to a port to send the response like above");
})