import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

/**
 * Exemplo de construção de interface auxílio de IDE para a construção da interface gráfica.
 * @author alberto.
 */
public class GUISimples extends JFrame {
   
   private int contagemCliques;
   private JButton btnIncrementa;
   
   /**
    * Método construtor.
    * Cria uma nova janela.
    */
   public GUISimples() {
      super("Exemplo construído sem IDE");
      contagemCliques = 0;
      criaComponentes();
   }
   
   /**
    * Método que monta a interface.
    * Adiciona os componentes, define configurações de layout e 
    * vincula os eventos aos métodos que devem ser executados.
    */
   private void criaComponentes() {
      // Inicialização da JFrame.
      this.setMinimumSize(new Dimension(320, 240));
      this.setResizable(false);
      this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
      
      // Cria um botão e põe na tela.
      btnIncrementa = new JButton("Incremente!");
      this.getContentPane().add(btnIncrementa);
      
      // Registra a ação a ser executada ao pressionar o botão.
      btnIncrementa.addActionListener(new ActionListener() {
         @Override
         public void actionPerformed(ActionEvent e) {
            btnIncrementaClicado(e);
         }
      });
      
      // Avisa ao gerenciador de layout que não há novos componentes a serem adicionados.
      this.pack();
   }
   
   /**
    * Método tratador de evento de clique do mouse no botão.
    * Esse método incrementa um contador e atualiza o texto do botão na tela com o valor
    * corrente.
    * @param evt Evento gerado pelo SWING.
    */
   private void btnIncrementaClicado(ActionEvent evt) {
      this.contagemCliques += 1;
      btnIncrementa.setText("Incremente! (" + contagemCliques +")");
   }
      
   /**
    * Método estático main.
    * Cria o programa e lança uma instância de SemIDE na tela.
    * @param args Argumentos da linha de comando.
    */
   public static void main(String[] args) {
      SwingUtilities.invokeLater(new Runnable() {
         @Override
         public void run() {
            GUISimples tela = new GUISimples();
            tela.setVisible(true);
         }
      });
   }
   
}
