// vector is fixed-length array
// vector starts with index 1, other starts with index 0
#include<iostream>

/* example in video 
* simulation by creating a class
*/
// create a vector class
class Vector{
  private:
    int v[4];
    
  public:
    int getLength();    // length
    int select(int);    // select
    void store(int, int); // store
};

int Vector::select(int pos){
  return v[pos];
}

void Vector::store(int pos, int num){
  v[pos] = num;
}

int Vector::getLength(){
  return (sizeof(v) / sizeof(*v));
}

int main(){
  Vector v;

  std::cout << "Operations of vector - " << std::endl;
  std::cout << "1. store values into the vector : store" << std::endl;
  for(int i = 0; i < v.getLength(); i++)
    v.store(i, i + 1);

  std::cout << "2. get the lenght of vector : " << v.getLength() << std::endl;

  std::cout << "3. print the value of vector : " << std::endl;
  for(int i = 0; i < v.getLength(); i++)
    std::cout << v.select(i) << std::endl;

/* review question 6 
* simulation by creating an array
*/
  // new Vector w(4)
  int w[4];
  
  // w[1] = 2
  w[0] = 2;

  // for 1 < i <= 4 do
  //  w[i] = i x w[i-1]
  // end for
  for (int i = 1; i < 4; i++)
    w[i] = (i+1) * w[i-1];

  std::cout << w[3] << std::endl;

  return 0;

