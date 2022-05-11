

var randomNumber1=Math.floor(Math.random() * 3)+1;
var image1 = document.querySelectorAll("img")[0];

if (randomNumber1 == 2){
    image1.setAttribute("src", "images/paper.png");
    // image1.drawImage(img, 0, 0, 100, 300);
} 
else if (randomNumber1 == 3){
    image1.setAttribute("src", "images/scissor.png");
}


var randomNumber2=Math.floor(Math.random() * 3)+1;
var image2 = document.querySelectorAll("img")[1];

console.log(randomNumber1,randomNumber2)

if (randomNumber2 == 2){
    image2.setAttribute("src", "images/paper.png");
    // image1.drawImage(img, 0, 0, 100, 300);
} 
else if (randomNumber2 == 3){
    image2.setAttribute("src", "images/scissor.png");
}


//comaprison logic

if (randomNumber1<randomNumber2){
    document.querySelector("h2").innerHTML = "Player-1 wins!";
}
else if (randomNumber2<randomNumber1){
    document.querySelector("h2").innerHTML = "Player-2 wins!";
}
else{
    document.querySelector("h2").innerHTML = "Its a draw!";
}