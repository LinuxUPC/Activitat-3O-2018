set tabstop=8 softtabstop=0 expandtab shiftwidth=4 smarttab

nmap <F5> :w<CR>:! ./run.sh<CR>
nmap <F6> :! ./reset_env.sh<CR>:edit!<CR>

imap <F5> <ESC>:w<CR>:! ./run.sh<CR>
imap <F6> <ESC>:! ./reset_env.sh<CR>:edit!<CR>
