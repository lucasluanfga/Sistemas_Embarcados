1. Por que o Linux recebeu esse nome?

R. Linux surgiu da mistura de Linus + Unix, de forma que Linus é o o nome do criador do Linux e o Unix é o nome do sistema operacional. 

2. O que são daemons?

R. Em sistemas operacionais multitarefa, um daemon é um programa de computador que executa como um processo em plano de fundo, em vez de estar sob o controle direto de um usuário interativo.

3. O que é o shell?

R. Shell é um programa que permite ao usuário iteragir com o sistema operacional através de comandos digitados do teclado. No DOS o shell era o command.com, que permitia executar alguns comandos como: cd, dir, ...

4. Por que é importante evitar executar o terminal como super-usuário?

R. Logando como o usuário root tem-se controle total sobre o sistema, então, executar o terminal como super-usuário corre-se o risco de algum arquivo ser movido ou editado de forma equivocada.

5. Qual botão do teclado completa o que o usuário escreve no terminal, de acordo com o contexto?

R. A tecla tab.

6. Quais botões do teclado apresentam instruções escritas anteriormente?

R. Teclas cima ou baixo, ctrl+r e inicie a digitação.

7. Apresente os respectivos comandos no terminal para:
  (a) Obter mais informações sobre um comando.
  
  R. 
  - man : Manual muito completo, pesquisa informação acerca de todos os comandos que necessitemos de saber, como por exemplo man find.
  - whatis : Descreve o que um determinado comando é.
  
  (b) Apresentar uma lista com os arquivos dentro de uma pasta.
  
  R. ls ou dir
  
  (c) Apresentar o caminho completo da pasta.
  
  R. pwd
  
  (d) Trocar de pasta.
  
  R. cd
  
  (e) Criar uma pasta.
  
  R. mkdir dir – create a directory dir
  
  (f) Apagar arquivos definitivamente.
  
  R. rm file – delete file
  
  (g) Apagar pastas definitivamente.
  
  R. rm -r dir – delete directory dir
  
  (h) Copiar arquivos.
  
  R. cp file1 file2 – copy file1 to file2
  
  (i) Copiar pastas.
  
  R. cp -r dir1 dir2 – copy dir1 to dir2; create dir2 if it doesn't exist
  
  (j) Mover arquivos.
  
  R. mv file1 file2 – rename or move file1 to file2 if file2 is an existing directory, moves file1 into directory file2
  
  (k) Mover pastas.
  
  R. mv dir1 dir2
  
  (l) Renomear pastas.
  
  R. mv pasta novo_nome
  
  (m) Apresentar o conteúdo de um arquivo.
  
  R. cat nome_do_arquivo
  
  (n) Apresentar o tipo de um arquivo.
  
  R. file nome_do_arquivo
  
  (o) Limpar a tela do terminal.
  
  R. clear
  
  (p) Encontrar ocorrências de palavras-chave em um arquivo-texto.
  
  R. 
  
  (q) Ordenar informações em um arquivo-texto.
  
  R. 
  
  (r) Substituir ocorrências de palavras-chave em um arquivo-texto.
  
  R.
  
  (s) Conferir se dois arquivos são iguais.
  
  R. diff opções arquivo1 arquivo2
  sendo as opções:
    -i :: ignora as diferenças de letras maiúsculas/minúsculas.
    -E :: ignora as diferenças de tabulação.
     -b :: ignora diferenças na quantidade de espaço em branco.
    -w :: ignora qualquer espaço em branco.
    -B :: ignora linhas em branco a mais ou a menos.
    -a :: compara os arquivos como arquivos de texto, ainda que não sejam.
    -u [n] :: mostra [n] linhas do conteúdo final do arquivo1, adicionadas as diferenças do arquivo2.
    -q :: mostra apenas se o conteúdo dos arquivos são ou não diferentes.
    -y :: mostra os arquivos em duas colunas, indicando as diferenças.
    -t :: expande as tabulações, convertendo-as em espaços, na saída.
    -r :: compara recursivamente todo o conteúdo de um diretório.
    -S [arquivo] :: quando comparar diretórios, inicia a comparação pelo arquivo especificado.

  (t) Escrever algo na tela.
  
  R. 
  
