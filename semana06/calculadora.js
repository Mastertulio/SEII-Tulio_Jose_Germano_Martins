/*Tulio Jose Germano Martins   11211EMT005*/

var valor; 
var resultado; 

function botao(num){
    valor = document.calc.visor.value += num;
}

function reseta(num){
    document.calc.visor.value = '';
}

function calcula(){
    resultado = eval(valor);
    document.calc.visor.value = resultado.toLocaleString('pt-br');
}
