function ShowHideDiv(getCode) {
    
    var Sub1Theory = document.getElementById("Sub1Theory");
    Sub1Theory.style.display = getCode.value == "Sub1Theory" ? "block" : "none";
    
    var Sub1Pract = document.getElementById("Sub1Pract");
    Sub1Pract.style.display = getCode.value == "Sub1Pract" ? "block" : "none";

    var Sub2Theory = document.getElementById("Sub2Theory");
    Sub2Theory.style.display = getCode.value == "Sub2Theory" ? "block" : "none";
    
    var Sub2Pract = document.getElementById("Sub2Pract");
    Sub2Pract.style.display = getCode.value == "Sub2Pract" ? "block" : "none";

    var Sub3Theory = document.getElementById("Sub3Theory");
    Sub3Theory.style.display = getCode.value == "Sub3Theory" ? "block" : "none";
    
    var Sub3Pract = document.getElementById("Sub3Pract");
    Sub3Pract.style.display = getCode.value == "Sub3Pract" ? "block" : "none";

    var Sub4Theory = document.getElementById("Sub4Theory");
    Sub4Theory.style.display = getCode.value == "Sub4Theory" ? "block" : "none";
    
    var Sub4Pract = document.getElementById("Sub4Pract");
    Sub4Pract.style.display = getCode.value == "Sub4Pract" ? "block" : "none";

    var Sub5Theory = document.getElementById("Sub5Theory");
    Sub5Theory.style.display = getCode.value == "Sub5Theory" ? "block" : "none";
    
    var Sub5Pract = document.getElementById("Sub5Pract");
    Sub5Pract.style.display = getCode.value == "Sub5Pract" ? "block" : "none";
}