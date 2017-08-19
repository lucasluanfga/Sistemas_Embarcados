Para todas as questões, escreva os comandos correspondentes no terminal.

1. Escreva o texto "Ola mundo cruel!" em um arquivo denominado "Ola_mundo.txt". Apresente o conteúdo deste arquivo no terminal.
Abra o terminal e digite:

  echo Ola mundo cruel! > Ola_mundo.txt
  cat Ola_mundo.txt

2. Apresente o nome de todos os arquivos e pastas na pasta 'root'.
Abra o terminal e digite:
  cd /      # entra no diretório raiz
  ls        # lista todos os arquivos contidos no diretório raiz
  sudo su   # troca de usuário comum para super-usuário, assim, tem-se acesso a pasta root
  cd root   # entra na pasta root já como super-usuário
  ls -la    # listagem com arquivos ocultos
Após esses comandos tem-se a seguinte listagem dos arquivos da pasta root:
  .
  ..
  .bash_history
  .bashrc
  .cache
  .profile

3. Apresente o tipo de todos os arquivos e pastas na pasta 'root'.

  .               directory
  ..              directory 
  .bash_history   ASCII text
  .bashrc         ASCII text
  .cache          directory
  .profile        ASCII text

4. Apresente somente as pastas dentro da pasta 'root'.

  .
  ..
  .cache

5. Descubra em que dia da semana caiu o seu aniversário nos últimos dez anos.

Para as questões a seguir, use a pasta no endereço https://github.com/DiogoCaetanoGarcia/Sistemas_Embarcados/raw/master/Questoes/02_Intro_Linux_arqs.zip

6. Liste somente os arquivos com extensão .txt.
Para listar apenas os arquivos .txt, abra o terminal e digite a seguinte instrução:

  cd Documentos/Arqs_aula_02      # entra no diretório a ser listado
  ls -l *.txt                     # lista todos os arquivos com a extensão .txt da pasta

7. Liste somente os arquivos com extensão .png.
Já estando na pasta "Arqs_aula_02", basta digitar a seguijnte instrução:

  ls -l *.png                     # lista todos os arquivos com a extensão .png da pasta

8. Liste somente os arquivos com extensão .jpg.

  ls -l *.jpg                     # lista todos os arquivos com a extensão .jpg da pasta

9. Liste somente os arquivos com extensão .gif.
  
  ls -l *.gif                     # lista todos os arquivos com a extensão .gif da pasta

10. Liste somente os arquivos que contenham o nome 'cal'.

11. Liste somente os arquivos que contenham o nome 'tux'.

12. Liste somente os arquivos que comecem com o nome 'tux'.
