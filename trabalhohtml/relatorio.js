const tabela = document.getElementById('tabela');

	var dados = JSON.parse(localStorage.getItem('dados')) || [];

	function exibirDados(){
		dados.forEach((elemento, chave) =>{
			tabela.innerHTML += `
		<tr class="JSTR">
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
				<a href="./Index.html?chave=${chave}">Editar</a>
				<a href="#" onClick="remover(${chave})">Remover</a>
			</td>
		</tr>
			`;
		})
        setTimeout(() => {
            const cor = document.querySelectorAll('td a');
            const adicao = document.querySelectorAll('.JSTR');
        adicao.forEach(adicao => {
            adicao.style.backgroundColor = 'rgb(192, 131, 224)';
        });
            
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
