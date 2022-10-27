<h2><a href="https://leetcode.com/problems/removing-minimum-number-of-magic-beans/">2171. Removing Minimum Number of Magic Beans</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array of <strong style="user-select: auto;">positive</strong> integers <code style="user-select: auto;">beans</code>, where each integer represents the number of magic beans found in a particular magic bag.</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Remove</strong> any number of beans (<strong style="user-select: auto;">possibly none</strong>) from each bag such that the number of beans in each remaining <strong style="user-select: auto;">non-empty</strong> bag (still containing <strong style="user-select: auto;">at least one</strong> bean) is <strong style="user-select: auto;">equal</strong>. Once a bean has been removed from a bag, you are <strong style="user-select: auto;">not</strong> allowed to return it to any of the bags.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum</strong> number of magic beans that you have to remove</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> beans = [4,<u style="user-select: auto;"><strong style="user-select: auto;">1</strong></u>,6,5]
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> 
- We remove 1 bean from the bag with only 1 bean.
  This results in the remaining bags: [4,<b style="user-select: auto;"><u style="user-select: auto;">0</u></b>,6,5]
- Then we remove 2 beans from the bag with 6 beans.
  This results in the remaining bags: [4,0,<strong style="user-select: auto;"><u style="user-select: auto;">4</u></strong>,5]
- Then we remove 1 bean from the bag with 5 beans.
  This results in the remaining bags: [4,0,4,<b style="user-select: auto;"><u style="user-select: auto;">4</u></b>]
We removed a total of 1 + 2 + 1 = 4 beans to make the remaining non-empty bags have an equal number of beans.
There are no other solutions that remove 4 beans or fewer.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> beans = [<strong style="user-select: auto;"><u style="user-select: auto;">2</u></strong>,10,<u style="user-select: auto;"><strong style="user-select: auto;">3</strong></u>,<strong style="user-select: auto;"><u style="user-select: auto;">2</u></strong>]
<strong style="user-select: auto;">Output:</strong> 7
<strong style="user-select: auto;">Explanation:</strong>
- We remove 2 beans from one of the bags with 2 beans.
  This results in the remaining bags: [<u style="user-select: auto;"><strong style="user-select: auto;">0</strong></u>,10,3,2]
- Then we remove 2 beans from the other bag with 2 beans.
  This results in the remaining bags: [0,10,3,<u style="user-select: auto;"><strong style="user-select: auto;">0</strong></u>]
- Then we remove 3 beans from the bag with 3 beans. 
  This results in the remaining bags: [0,10,<u style="user-select: auto;"><strong style="user-select: auto;">0</strong></u>,0]
We removed a total of 2 + 2 + 3 = 7 beans to make the remaining non-empty bags have an equal number of beans.
There are no other solutions that removes 7 beans or fewer.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= beans.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= beans[i] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>