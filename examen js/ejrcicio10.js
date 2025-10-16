
let edad = 19;

tieneentrada = false;    

if (edad >= 18 || tieneentrada === true) {

    console.log("puedes entrar");
    } 

else if (edad < 18 && tieneentrada === true) {
    console.log("no puedes entrar, no eres mayor de edad");

    }

else if (edad >= 18 && tieneentrada === false) {
    console.log("no puedes entrar, no tienes entrada");
    }

else {
    console.log("no puedes entrar, no eres mayor de edad y no tienes entrada");
    }



