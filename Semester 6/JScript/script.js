function ShowHideDiv(getCode) {
    
    var Sub1Theory = document.getElementById("Sub1Theory");
    Sub1Theory.style.display = getCode.value == "Sub1Theory" ? "block" : "none";
    
    var Sub1Pract = document.getElementById("Sub1Pract");
    Sub1Pract.style.display = getCode.value == "Sub1Pract" ? "block" : "none";
}