function playoffsDetermination() {
    let openPOwins = 9;
    let imPOwins = 10;
    let mainPOwins = 9;
    let advPOwins = 8;
    let value = document.getElementById("numWins").value;
    let division = document.getElementById("division").value.toLowerCase();

    if (division === "open") {
        if (value < openPOwins) {
            document.getElementById("wins").innerHTML = "Did not make playoffs.";
        }
        else {
            document.getElementById("wins").innerHTML = "Made playoffs!";
        }
    }
    else if (division === "intermediate") {
        if (value < imPOwins) {
            document.getElementById("wins").innerHTML = "Did not make playoffs.";
        }
        else if (value === imPOwins) {
            document.getElementById("wins").innerHTML = "Probably made playoffs.";
        }
        else {
            document.getElementById("wins").innerHTML = "Made playoffs!";
        }
    }
    else if (division === "main") {
        if (value < mainPOwins) {
            document.getElementById("wins").innerHTML = "Did not make playoffs.";
        }
        else if (value === mainPOwins) {
            document.getElementById("wins").innerHTML = "Probably made playoffs"
        }
        else {
            document.getElementById("wins").innerHTML = "Made playoffs!";
        }
    }
    else if (division === "advanced") {
        if (value < advPOwins) {
            document.getElementById("wins").innerHTML = "Did not make playoffs.";
        }
        else {
            document.getElementById("wins").innerHTML = "Made playoffs!";
        }
    }
    else {
        document.getElementById("wins").innerHTML = "Invalid division. Try again."
    }
}