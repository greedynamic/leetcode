// constructing vectors
#include <iostream>
#include <vector>

void printVector(std::vector<int>& vec){
  for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
    std::cout << ' ' << *it;
}

int main ()
{
  // the iterator constructor can also be used to construct from arrays:
  // std::vector<int> nums = {2,5,3,2,3};

  std::vector<int> v = {1,2,3,4,4,3,2,1,6};
  // std::cout<<"test";
  // v.push_back(nums.front());

  // printVector(v);
  // std::cout<<'\n';
  // // printVector(nums);  
  std::vector<int>::iterator it=v.begin();
  std::vector<int>::iterator vit=v.begin()+1;
  // std::cout<<*(v.end())<<'\t'<<*(v.end()+1)<<'\t'<<*(v.end()+2);
  // std::cout<<*(v.end()-(v.size()/2)-1)<<'\t';  // 3
  // std::cout<<*(v.begin()+(v.size()/2)+1);      // 2
  // printVector(v);
  // std::cout<<*(v.begin())<<'\t'<<*(v.end())<<'\t'<<*(v.end()-1);  // 2  0  5
  int comp;

  while(it!=v.end()){
    // std::cout<<"vit:"<<*vit<<'\n';
    comp=*it;
    it=v.erase(it);
    // printVector(v);
    while (vit!=v.end()&&v.size()>1){
      if(*vit==comp){
        // std::cout<<'\n'<<"vit:"<<*vit<<'\n';
        // std::cout<<'\n'<<"it:"<<*it<<'\n';
        vit = v.erase(vit);
        // it = v.erase(it);
        break;
        // std::cout<<'\n'<<"now_vit:"<<*vit<<'\n';
        // std::cout<<'\n'<<"now_it:"<<*it<<'\n';
        // printVector(v);
        // std::cout<<"inside\n";
      }
      // std::cout<<'\n'<<"here"<<*vit<<'\n';
      vit++;
    }
    if(v.size()>1){
      it=v.begin();
      vit=v.begin()+1;
    }
    else{
      comp=*it;
    }
    // std::cout<<'\n'<<"this_it:"<<*it<<'\n';
    // printVector(v);
  }
  std::cout<<"result:"<<comp;
  printVector(v);

  // Solution sol;
  // std::cout << "The single number:" << sol.singleNumber(myVector);

  // for (std::vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
  //   std::cout << ' ' << *it;
  // printVector(v);

  // while(v.size()>=2){
  //   int comp=*(v.end());
  //   v.erase(v.end());
  //   for(std::vector<int>::iterator it = v.begin(); it != v.end(); ++it){
  //     if(comp==*it){
  //       it=v.erase(it);
  //     }
  //   }
  // }


  std::cout << "\nSuccess\n";

  return 0;
}