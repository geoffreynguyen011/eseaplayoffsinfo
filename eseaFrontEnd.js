function playoffsDetermination() {
    let openPOwins = 9;
    let imPOwins = 10;
    let mainPOwins = 9;
    let advPOwins = 8;
    let value = document.getElementById('numWins').value;
    let division = document.getElementById('division').value.toLowerCase();

    if (document.getElementById('numWins').value < 0 || document.getElementById('numWins').value > 16) {
        document.getElementById('wins').innerHTML = "Invalid number of wins. Try again.";
    }
    else {
        if (division === 'open') {
            if (value < openPOwins) {
                document.getElementById('wins').innerHTML = 'Did not make playoffs.';
            }
            else {
                document.getElementById('wins').innerHTML = 'Made playoffs!';
            }
        }
        else if (division === 'intermediate' || division === 'im') {
            if (value < imPOwins) {
                document.getElementById('wins').innerHTML = 'Did not make playoffs.';
            }
            else if (value === imPOwins) {
                document.getElementById('wins').innerHTML = 'Probably made playoffs.';
            }
            else {
                document.getElementById('wins').innerHTML = 'Made playoffs!';
            }
        }
        else if (division === 'main') {
            if (value < mainPOwins) {
                document.getElementById('wins').innerHTML = 'Did not make playoffs.';
            }
            else if (value === mainPOwins) {
                document.getElementById('wins').innerHTML = 'Probably made playoffs'
            }
            else {
                document.getElementById('wins').innerHTML = 'Made playoffs!';
            }
        }
        else if (division === 'advanced') {
            if (value < advPOwins) {
                document.getElementById('wins').innerHTML = 'Did not make playoffs.';
            }
            else {
                document.getElementById('wins').innerHTML = 'Made playoffs!';
            }
        }
        else {
            document.getElementById('wins').innerHTML = 'Invalid division. Try again.'
        }
    }
}

function winsForNextDivision() {
    let openToIM = 1;
    let openToMain = 4;
    let openToAdv = 8;
    let imToMain = 1;
    let imToAdv = 5;
    let mainToAdv = 3;
    let advToMDL = 4;
    let currDiv = document.getElementById('currDiv').value.toLowerCase();
    let nextDiv = document. getElementById('wantDiv').value.toLowerCase();

    if (currDiv === 'open') {
        if (nextDiv === 'intermediate' || nextDiv === 'im') {
            document.getElementById('winsForDivision').innerHTML = `You need ${openToIM} win(s) to make intermediate from open.`;
        }
        else if (nextDiv === 'main') {
            document.getElementById('winsForDivision').innerHTML = `You need ${openToMain} wins to make main from open.`
        }
        else if (nextDiv === 'advanced') {
            document.getElementById('winsForDivision').innerHTML = `You need ${openToAdv} wins to make advanced from open.`
        }
        else {
            document.getElementById('winsForDivision').innerHTML = 'Invalid or impossible division. Enter: intermediate, main, or advanced.'
        }
    }
    else if (currDiv === 'intermediate') {
        if (nextDiv === 'main') {
            document.getElementById('winsForDivision').innerHTML = `You need ${imToMain} wins to make main from intermediate.`
        }
        else if (nextDiv === 'advanced') {
            document.getElementById('winsForDivision').innerHTML = `You need ${imToAdv} wins to make advanced from intermediate.`
        }
        else {
            document.getElementById('winsForDivision').innerHTML = 'Invalid or impossible division. Enter: main or advanced.'
        }
    }
    else if (currDiv === 'main') {
        if (nextDiv === 'advanced') {
            document.getElementById('winsForDivision').innerHTML = `You need ${mainToAdv} wins to make advanced from main.`
        }
        else {
            document.getElementById('winsForDivision').innerHTML = 'Invalid or impossible division (Moveup only possible to advanced).'
        }
    }
    else if (currDiv === 'advanced') {
        if (nextDiv === 'MDL') {
            document.getElementById('winsForDivision').innerHTML = `You need ${advToMDL} wins to make advanced from main.`
        }
        else {
            document.getElementById('winsForDivision').innerHTML = 'Invalid or impossible division (Moveup only possible to MDL).'
        }
    }
    else {
        document.getElementById('winsForDivision').innerHTML = 'Invalid division. Please try again.';
    }
}
