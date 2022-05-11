var slideIndex = 1;
showSlides(slideIndex);

// Next/previous controls
function plusSlides(n) {
  showSlides(slideIndex += n);
}

// Thumbnail image controls
function currentSlide(n) {
  showSlides(slideIndex = n);
}

function showSlides(n) {
  var i;
  var slides = document.getElementsByClassName("mySlides");
  var dots = document.getElementsByClassName("dot");
  if (n > slides.length) {slideIndex = 1}
  if (n < 1) {slideIndex = slides.length}
  for (i = 0; i < slides.length; i++) {
      slides[i].style.display = "none";
  }
  for (i = 0; i < dots.length; i++) {
      dots[i].className = dots[i].className.replace(" active", "");
  }
  slides[slideIndex-1].style.display = "block";
  dots[slideIndex-1].className += " active";
}


var e = document.getElementById('btn');
var navbar=document.getElementById("navBar");
var slideshow=document.getElementsByClassName("slideshow-container")
e.addEventListener('click', function() {
  if (this.className == 'on')
  { 
    this.classList.remove('on');
    hideMenu();

  }
  else 
  {
    this.classList.add('on');
    showMenu();
  }
});



function showMenu(){
  navbar.style.right="0px";
}

function hideMenu(){
  navbar.style.right="-400px";
}