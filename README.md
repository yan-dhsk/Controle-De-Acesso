# Sistema de Controle de Acesso com ESP32

Desenvolvido durante o 2º período da graduação em Sistemas de Informação. 

## Descrição

Este projeto implementa um sistema de controle de acesso a sala utilizando o microcontrolador ESP32. O dispositivo funciona como um servidor web que hospeda uma página de login em HTML. Com base nas credenciais fornecidas pelo usuário, o sistema executa ações específicas em componentes físicos:

- **Login bem-sucedido**: O LED pisca uma única vez e aciona um micro servo motor que se move para uma posição aberta
- **Login negado**: O LED pisca duas vezes consecutivas e mantém o motor na posição fechada

## Componentes Utilizados

- Microcontrolador ESP32
- LED integrado
- Micro servo motor
- Conexão WiFi para acesso à rede

## Funcionalidades

### Servidor Web
- Hospeda página de login responsiva em HTML/CSS
- Interface web acessível via navegador em qualquer dispositivo conectado à mesma rede

### Sistema de Autenticação
- Validação de usuário e senha pré-configuradas
- Feedback visual imediato na interface web sobre o status do login

### Controle de Hardware
- LED indicador de status 
- Motor controlado por PWM
- Sequências distintas de LED para acesso permitido e negado
- Acionamento temporizado do motor para acesso autorizado

## Configuração

1. Configure as credenciais WiFi no código (`SSID` e `senha`)
2. Defina usuário e senha de acesso no sistema (`usuarioCorreto` e `senhaCorreta`)
3. Ajuste os pinos de hardware conforme sua montagem física
4. Carregue o código no ESP32

## Acesso ao Sistema

1. Conecte-se à mesma rede WiFi configurada no código
2. Abra o Serial Monitor para visualizar o IP atribuído ao ESP32
3. Acesse o IP mostrado via navegador web
4. Utilize a interface para realizar o login

## Desenvolvido por

- [Yan Neves](https://github.com/yan-dhsk)
- [Vinicius Meneses](https://github.com/viniciusmeneses-tech)
- José Ronaldo
- [Eduardo Silva](https://github.com/Educraft1)
