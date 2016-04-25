# pdbform
pdb formatter 

# design
read residue number from template pdb   
why residue number?   
because gromacs adds water and hydrogens to original pdb, so atom numeber changes.  


First  
(1) specify the number of peptides  
(2-1) specify the number of residues in peptides  

./a.out (1) (2-1) (2-2) (2-3) ...

add chain id (from A, B, C ...) and TER lines
renumber residue id corresponding to chain id
