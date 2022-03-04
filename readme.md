# <p align="center">Project <a style="color:gray;text-decoration:none;" href="https://github.com/AtibQur/printf/blob/master/en.subject.pdf">Printf</a> 🖨️</h1>
<p><img align="right" src="score.png" alt="Score" width="125" height="125"></p>
<h2> Description Printf</h2>   
<p>The goal of this project is to recreate the <em>printf</em> function. You have to implement the following conversions: </p>
<table>
  <tr>
    <td>*c</td>
    <td>Prints a single character</td>
  </tr>
  <tr>
    <td>*s</td>
    <td>Prints a string (as defined by the common C convention).</td>
  </tr>
  <tr>
    <td>*p</td>
    <td>The void * pointer argument has to be printed in hexadecimal format.</td>
  </tr>
  <tr>
    <td>*d</td>
    <td>Prints a decimal (base 10) number.</td>
  </tr>
  <tr>
    <td>*i</td>
    <td>Prints an integer in base 10.</td>
  </tr>
  <tr>
    <td>*u</td>
    <td>Prints an unsigned decimal (base 10) number.</td>
  </tr>
  <tr>
    <td>*x</td>
    <td>Prints a number in hexadecimal (base 16) lowercase format.</td>
  </tr>
  <tr>
    <td>*X</td>
    <td>Prints a number in hexadecimal (base 16) uppercase format.</td>
  </tr>
  <tr>
    <td>*%%</td>
    <td>Prints a percent sign.</td>
  </tr>
</table>
<h2>External functions 📚</h2>
<table>
  <tr>
    <td>va_start()</td>
    <td>va_start intializes the va_list which holds all additional arguments with va_arg.</td>
  </tr>
  <tr>
    <td>va_end()</td>
    <td>va_end allowed a function with variable arguments which were used by va_start to return.</td>
  </tr>
  <tr>
    <td>va_arg()</td>
    <td>va_arg retrieves the next argument in the paramenter list.</td>
  </tr>
</table>

<h2>Installation</h2>
*To build the programm there is only a few steps: First of all, you can download the repository through the following steps in any shell of your preference:*
<br>
<pre>
git clone git@github.com:AtibQur/printf.git
cd printf
make
</pre>
This commands will compile everything and a executable "libft" should be created. 
<br>
<em>*Note: functions from the normal subject are made and tested. Bonus objects are not included.</em>
<br><br>
<h2>Usage 🛠️</h2>

<p>To compile the program, run the following command:</p>
<pre>
cd path_to_printf && make
</pre>
<p>After creating the executable, you're able to use this program. <em>to use the program add the folowing as header in a file:</em></p>

<pre>
#include "printf.h"
</pre>
<h2>Third-party testers</h2>
<li><a href="https://github.com/Tripouille/printfTester">printfTester-Tripouille</a></li>
