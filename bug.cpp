std::vector<bool> vec; //This is the source of the problem
vec.push_back(true); //it might seem to be working well
vec[0] = false; //This will cause the unexpected behaviour