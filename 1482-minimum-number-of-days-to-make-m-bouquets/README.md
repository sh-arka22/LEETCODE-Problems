<h2><a href="https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/">1482. Minimum Number of Days to Make m Bouquets</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Y<lighter data-id="lgt24428182978967783" data-bundle-id="0" data-slot-id="1" style="background-color: rgb(166, 255, 233); user-select: auto;">ou are given an integer array </lighter><code style="user-select: auto;"><lighter data-id="lgt24428182978967783" data-bundle-id="0" data-slot-id="1" style="background-color: rgb(166, 255, 233); user-select: auto;">bloomD</lighter>ay</code>, an integer <code style="user-select: auto;">m</code> and an integer <code style="user-select: auto;">k</code>.</p>

<p style="user-select: auto;">You want to make <code style="user-select: auto;">m</code> bouquets. To make a bouquet, you need to use <code style="user-select: auto;">k</code> <strong style="user-select: auto;">adjacent flowers</strong> from the garden.</p>

<p style="user-select: auto;">The garden consists of <code style="user-select: auto;">n</code> flowers, the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> flower will bloom in the <code style="user-select: auto;">bloomDay[i]</code> and then can be used in <strong style="user-select: auto;">exactly one</strong> bouquet.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the minimum number of days you need to wait to be able to make </em><code style="user-select: auto;">m</code><em style="user-select: auto;"> bouquets from the garden</em>. If it is impossible to make m bouquets return <code style="user-select: auto;">-1</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> bloomDay = [1,10,3,10,2], m = 3, k = 1
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong> Let us see what happened in the first three days. x means flower bloomed and _ means flower did not bloom in the garden.
We need 3 bouquets each should contain 1 flower.
After day 1: [x, _, _, _, _]   // we can only make one bouquet.
After day 2: [x, _, _, _, x]   // we can only make two bouquets.
After day 3: [x, _, x, _, x]   // we can make 3 bouquets. The answer is 3.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> bloomDay = [1,10,3,10,2], m = 3, k = 2
<strong style="user-select: auto;">Output:</strong> -1
<strong style="user-select: auto;">Explanation:</strong> We need 3 bouquets each has 2 flowers, that means we need 6 flowers. We only have 5 flowers so it is impossible to get the needed bouquets and we return -1.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> bloomDay = [7,7,7,7,12,7,7], m = 2, k = 3
<strong style="user-select: auto;">Output:</strong> 12
<strong style="user-select: auto;">Explanation:</strong> We need 2 bouquets each should have 3 flowers.
Here is the garden after the 7 and 12 days:
After day 7: [x, x, x, x, _, x, x]
We can make one bouquet of the first three flowers that bloomed. We cannot make another bouquet from the last three flowers that bloomed because they are not adjacent.
After day 12: [x, x, x, x, x, x, x]
It is obvious that we can make two bouquets in different ways.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">bloomDay.length == n</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= bloomDay[i] &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= m &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= n</code></li>
</ul>
</div>