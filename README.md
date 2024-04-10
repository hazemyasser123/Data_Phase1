# Phase1_DS

git commands for future uses 
step 1: Go to location you want folder to exist in.

step 2: Right click >> open in terminal.

step 3: type "git clone https://github.com/hazemyasser123/Data_Phase1"  (ps ignore the "" copy only what's inside the "").

step 4: after the cloning type "cd Phase1_DS".

step 4.5: If you have the repo igone the first 3 steps and just open the folder of the project in the terminal.

Git Commands:

git add .               (Makes git look at the new files insesrted in the folder).

git commit              (Git commit is important, it looks for modifications in the files that it already looks at).

git commit -m "what is a potato?"   (If the you don't want a pop up of typing to wrtie the commit message when pushing in this case the message will be what is a potato.)

git push origin main    (Main can be any branch depending on what branch you're working on).

git switch "branch name"    (Switches the branch name making changes with git add . will be recorded in branch name not main for example)

git add .
git stash
git pull origin main    (In order to get the changes from the main *in case you get untracked working tree*)

git switch "branch name"
git rebase "source"     (In order to rebase your branch with respect to source).

git add "filename and sometimes path if inside foldedr not direct"  (commit changes in this file in case the conflict happens)
git rebase --continue   (Continues the rebase)
git rebase --skip       (Skips files that conflict)
git rebase --abort      (Aborts the merge)

git mege "branch name"  (Usually I get conflict errors until then I use the website for merging)

git "insert command" -h (Displays help for any command you asked for in this case "insert command" also igonre "" when typing).