#include"nlib.h"

using namespace std;


int main(int argc, char *argv[]){
  cout<<"Version info. formnishi v1.0.1 \n";

// ##################### ARGUMENT HANDLING ##########################
// argv[1]: input file
  if( argv[1]==NULL ){
    puts("No ARGUMEMTS");
    puts("USAGE: ./a.out (input pdb) (output pdb) ");
    return 1;
  }
  cout<<"Your input files: "<<argv[1]<<endl;
  
  int num_pol=0;
  puts("How many polymers are included. Put the number.");
  cin >> num_pol;
  vector<int> num_res; int buf_int;
  for(int i=1;i<=num_pol;i++){
    printf("Put how long residues the %d th polymer has.\n",i);
    cin >> buf_int; num_res.push_back(buf_int);
  }
  printf("The number of polymers: %d \n", (int)num_res.size());
  puts("Ok, I got it!");

// CHECK OF pdb_nishi
  printf("Now loading pdb file, %s \n", argv[1]);
  pdb_nishi pdb1(argv[1],num_res);
   
  printf("Now writing pdb file, %s \n", argv[2]);
  pdb1.write_pdb(argv[2]);
  cout<<"TOTAL ATOM = "<<pdb1.total_atom<<endl;
  cout<<"TOTAL RESIDUE = "<<pdb1.resi_mark.size()<<endl;

// END
  cout<<"\nit took "<<(float)clock()/CLOCKS_PER_SEC<<" sec of CPU to execute this program"<<endl;
  return 0;
}
