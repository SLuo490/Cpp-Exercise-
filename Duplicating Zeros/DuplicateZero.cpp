  void duplicateZeros(vector<int>& arr) {
      vector<int> new_arr = {};
      //loops through array
      for (int i = 0; i < arr.size(); i++) {
          //put each element into new array
          new_arr.push_back(arr[i]);
          //if index have 0, add another zero
          if (arr[i] == 0) {
              new_arr.push_back(0);
          }
      }
      //remove the ending to match the length of the original array
      for (size_t i = new_arr.size(); i > arr.size();i--) {
          new_arr.pop_back();
      }

      //set array to the new array 
      arr = new_arr;

      //clear the new array
      new_arr.clear();
  }
