<!--
  ft_printf Project
  42 School Project: Re-implementing the standard C printf function.
-->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>ft_printf README</title>
</head>
<body>

<!--
    Features:
    - Handles format specifiers:
      %c - character
      %s - string
      %p - pointer
      %d / %i - integer
      %u - unsigned integer
      %x / %X - hexadecimal (lower/upper case)
      %% - percent sign
    - Supports NULL pointers and strings
    - Mimics the behavior of the standard printf as closely as possible
-->

<h1>ft_printf</h1>
<p><strong>ft_printf</strong> is a project from 42 school where we re-implement the standard C <code>printf</code> function. The goal is to understand variadic functions, formatting, and output handling in C.</p>

<h2>Installation</h2>
<pre>
<!--
Clone the repository:

git clone https://github.com/yourusername/ft_printf.git
cd ft_printf
-->
</pre>
<pre>
<!--
Compile the library:

make
-->
</pre>

<h2>Usage</h2>
<p>Include the header in your C file:</p>
<pre>
<!--
#include "ft_printf.h"
-->
</pre>
<p>Use it like standard printf:</p>
<pre>
<!--
ft_printf("Hello %s!\n", "world");
-->
</pre>
<p>Compile your program linking with the library:</p>
<pre>
<!--
gcc main.c -L. -lftprintf -o my_program
./my_program
-->
</pre>

<h2>Testing with Paco</h2>
<pre>
<!--
1. Navigate to the project directory:

cd ft_printf

2. Run Paco tests:

paco ft_printf
-->
</pre>
<p>Paco will compare your output with the standard <code>printf</code> and show which tests passed or failed.</p>

<h2>Author</h2>
<p><!-- Your Name – 42 Student --></p>

</body>
</html>
