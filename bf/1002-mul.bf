, get the first digit
------------------------------------------------ subtract 48
>
, get the second digit
------------------------------------------------ subtract 48
<
[       while A is not null
  >[    while B is not null
    -   decrease B
    >+  increase C
    >+  increase D
  <<]   loop
  >[    while C is not null
    -   decrease C
    <+  increase B
  >]    loop
  <<-   decrease A
]       loop
>>> move to C
++++++++++++++++++++++++++++++++++++++++++++++++ increase C by 48
. print the ASCII result
