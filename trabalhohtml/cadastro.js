const form = document.getElementById('form');
	const nome = document.getElementById('nome');
	const sobrenome = document.getElementById('sobrenome');
	const cpf = document.getElementById('cpf');
	const email = document.getElementById('email');
	const cep = document.getElementById('cep');
	const pais = document.getElementById('pais');
	const estado = document.getElementById('estado');
	const cidade = document.getElementById('cidade');
	const bairro = document.getElementById('bairro');
	const endereco = document.getElementById('endereco');
	const numero = document.getElementById('numero');
	const telefone = document.getElementById('telefone');
	const data = document.getElementById('data');
	const genero = document.getElementById('genero');

	var dados = JSON.parse(localStorage.getItem('dados')) || [];
	const key = new URLSearchParams(window.location.search).get('chave');

	function salvarDados(){
		let novoNome = nome.value;
		let novoSobrenome = sobrenome.value;
		let novoCpf = cpf.value;
		let novoEmail = email.value;
		let novoCep = cep.value;
		let novoPais = pais.value;
		let novoEstado = estado.value;
		let novoCidade = cidade.value;
		let novoBairro = bairro.value;
		let novoEndereco = endereco.value;
		let novoNumero = numero.value;
		let novoTelefone = telefone.value;
		let novoData = data.value;
		let novoGenero = genero.value;
		let novoComplemento = complemento.value;
		
		
		if(key){
			dados[key] = {nome: novoNome, sobrenome: novoSobrenome, cpf: novoCpf, email: novoEmail,
			/*cemail: novoCmail, senha: novoSenha, confirma: novoConfirma,*/ cep: novoCep, pais: novoPais, estado: novoEstado,
			cidade: novoCidade, bairro: novoBairro, endereco: novoEndereco, numero: novoNumero, 
			telefone: novoTelefone, data: novoData, genero: novoGenero, complemento: novoComplemento};
		}else{
			dados.push({nome: novoNome, sobrenome: novoSobrenome, cpf: novoCpf, email: novoEmail,
				/*cemail: novoCmail, senha: novoSenha, confirma: novoConfirma,*/ cep: novoCep, pais: novoPais, estado: novoEstado,
				cidade: novoCidade, bairro: novoBairro, endereco: novoEndereco, numero: novoNumero, 
				telefone: novoTelefone, data: novoData, genero: novoGenero, complemento: novoComplemento});
		}
		
		localStorage.setItem('dados', JSON.stringify(dados));
		window.location.href= "./index.html";
	}

	if(key){
		nome.value = dados[key].nome;
		sobrenome.value = dados[key].sobrenome;
		cpf.value = dados[key].cpf;
		genero.value = dados[key].genero;
		data.value = dados[key].data;
		email.value = dados[key].email;
		telefone.value = dados[key].telefone;
		cep.value = dados[key].telefone;
		pais.value = dados[key].pais;
		estado.value = dados[key].estado;
		cidade.value = dados[key].cidade;
		bairro.value = dados[key].bairro;
		endereco.value = dados[key].endereco;
		numero.value = dados[key].numero;
	}
    /* nome, sobrenome, cpf, email, comfirma email, senha, confirma senha, País, estado, cidade, bairro, endereço, numero da casa, cep, telefone, data de nascimento, sexo, complemento*/

	const modal = document.querySelector("dialog");
	const btnModal = document.querySelectorAll(".modal");

	function buscaCep(valor){
		const mensagem = document.getElementById("msgErro");
		if(mensagem){
			form.removeChild(mensagem);
		}

		var cepValido = valor.replace(/\D/g, ""); //função regular esta limpando e deixando vazio tudo que nao for numero 
		if(cepValido != ""){
			var padraoCEP = /^[0-9]{8}$/;// procura expressão regula com regex
			if(padraoCEP.test(cepValido)){

				endereco.value = "buscando...";
				bairro.value = "buscando...";
				cidade.value = "buscando...";
				estado.value = "buscando...";

				const script = document.createElement("script");
				script.src = `https://viacep.com.br/ws/${cepValido}/json/?callback=retorno`;
				document.body.appendChild(script);
				
			}else{
				msgErro();
			}
		}else{
			msgErro();
		}
	}

	function retorno(resposta){
		if(!("erro" in resposta)){
			cep.value = resposta.cep;
			endereco.value = resposta.logradouro;
			bairro.value = resposta.bairro;
			cidade.value = resposta.localidade;
			estado.value = resposta.uf;
		}else{
			msgErro();
		}
	}

	function msgErro(){
		const dialog = document.querySelector("dialog");
		
		modal.showModal();
		
		dialog.style.color = "red";
        dialog.style.fontWeight = "bold";

		modal.addEventListener("click", evento =>{
			if(evento.target === modal){
				modal.close();
			}
		})
	}

