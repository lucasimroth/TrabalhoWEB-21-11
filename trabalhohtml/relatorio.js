const tabela = document.getElementById('tabela');

	var dados = JSON.parse(localStorage.getItem('dados')) || [];
    /*var cor = document.querySelector("a");
    cor.style.color = "black";*/

	function exibirDados(){
		dados.forEach((elemento, chave) =>{
			tabela.innerHTML += `
		<tr>
			<td>${elemento.nome}</td>
            <td>${elemento.sobrenome}</td>
            <td>${elemento.cpf}</td>
            <td>${elemento.genero}</td>
            <td>${elemento.data}</td>
			<td>${elemento.email}</td>
            <td>${elemento.telefone}</td>
            <td>${elemento.cep}</td>
            <td>${elemento.pais}</td>
            <td>${elemento.estado}</td>
            <td>${elemento.cidade}</td>
            <td>${elemento.bairro}</td>
            <td>${elemento.endereco}</td>
            <td>${elemento.numero}</td>
            
			<td>
				<a href="./Cadastros.html?chave=${chave}">Editar</a>
				<a href="#" onClick="remover(${chave})">Remover</a>
			</td>
		</tr>
			`;
		})
        setTimeout(() => {
            const cor = document.querySelectorAll('td a');
            cor.forEach(cor => {
                cor.style.color = "black";
            });
        }, 0);
	}

	function remover(chave){
		dados.splice(chave, 1);
		localStorage.setItem('dados', JSON.stringify(dados));
		window.location.href= "./Relatorios.html";
	}


	exibirDados();
    /*  nome.value = dados[key].nome;
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
		complemento.value = dados[key].complemento;*/