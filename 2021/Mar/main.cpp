// constructing vectors
#include <iostream>
#include <vector>

class Solution {
public:
  int singleNumber(std::vector<int>& v){
    std::vector<int>::iterator it=v.begin();
    std::vector<int>::iterator vit=v.begin()+1;

    int comp;

    while(it!=v.end()){
      comp=*it;
      it=v.erase(it);
      while (vit!=v.end()&&v.size()>1){
        if(*vit==comp){
          vit = v.erase(vit);
          break;
        }
        vit++;
      }
      if(v.size()>1){
        it=v.begin();
        vit=v.begin()+1;
      }
      else{
        comp=*it;
      }
    }
    return comp;
  }
};

int main ()
{
  // the iterator constructor can also be used to construct from arrays:
  std::vector<int> nums = {2,5,3,2,3};

  Solution sol;
  std::cout << "The single number:" << sol.singleNumber(nums);

  // for (std::vector<int>::iterator it = nums.begin(); it != nums.end(); ++it)
  //   std::cout << ' ' << *it;

  std::cout << "\nSuccess";

  return 0;
}