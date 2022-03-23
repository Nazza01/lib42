# lib42
A library which contains all libraries that would be considered useful in 42 school

## Libraries Included
[Libft](https://github.com/Nazza01/libft)
[ft_printf](https://github.com/Nazza01/ft_printf)
[get_next_line](https://github.com/Nazza01/get_next_line)

How to use
```
git clone https://github.com/Nazza01/lib42 
cd lib42
make 
```

This creates a file `lib42.a` that can be used like so:
```
gcc -o <programname>.o <filename>.c lib42.a
```
or
```
gcc -o <programname>.o <filename>.c -l42.a
```