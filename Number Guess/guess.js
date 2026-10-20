const express = require("express");

const app = express();
const number = Math.floor(Math.random() * 100) + 1;

app.get("/guess/:num", (req, res) => {
    let guess = Number(req.params.num);

    if (guess < number)
        res.send("Too Low!");
    else if (guess > number)
        res.send("Too High!");
    else
        res.send("***** Correct! You Win! *****");
});

app.listen(3000, () => {
    console.log("Game running at http://localhost:3000");
});