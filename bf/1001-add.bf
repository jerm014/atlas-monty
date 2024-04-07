,
------------------------------------------------ subtract 48
>
,
------------------------------------------------ subtract 48

[        Start your loops with your cell pointer on the loop counter (c1 in our case)
< +      Add 1 to c0
> -      Subtract 1 from c1
]        End your loops with the cell pointer on the loop counter

At this point our program has added a to b leaving a+b in c0 and 0 in c1
but we cannot output this value to the terminal since it is not ASCII encoded

To display the ASCII character "X" we must add 48 to the value X
We use a loop to compute 48 = 6 * 8

++++ +++  
[
< +++ +++  Add 6 to c0
> -        Subtract 1 from c1
]
< .        Print out c0 which has the value 55 which translates to "7"!
