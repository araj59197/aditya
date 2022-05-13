  void reverse(string &str, int i, int j)
{
    // base case
    if (i > j)
        return;

    swap(str[i], str[j]);
    i++;
    j--;

    // recursive case
    reverse(str, i, j);
}
string reverseString(string str)
{
      reverse(str, 0, str.length()-1);
	  return str;
}
