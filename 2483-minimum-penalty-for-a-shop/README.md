<h2><a href="https://leetcode.com/problems/minimum-penalty-for-a-shop/">2483. Minimum Penalty for a Shop</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given the customer visit log of a shop represented by a <strong style="user-select: auto;">0-indexed</strong> string <code style="user-select: auto;">customers</code> consisting only of characters <code style="user-select: auto;">'N'</code> and <code style="user-select: auto;">'Y'</code>:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">if the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> character is <code style="user-select: auto;">'Y'</code>, it means that customers come at the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> hour</li>
	<li style="user-select: auto;">whereas <code style="user-select: auto;">'N'</code> indicates that no customers come at the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> hour.</li>
</ul>

<p style="user-select: auto;">If the shop closes at the <code style="user-select: auto;">j<sup style="user-select: auto;">th</sup></code> hour (<code style="user-select: auto;">0 &lt;= j &lt;= n</code>), the <strong style="user-select: auto;">penalty</strong> is calculated as follows:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For every hour when the shop is open and no customers come, the penalty increases by <code style="user-select: auto;">1</code>.</li>
	<li style="user-select: auto;">For every hour when the shop is closed and customers come, the penalty increases by <code style="user-select: auto;">1</code>.</li>
</ul>

<p style="user-select: auto;">Return<em style="user-select: auto;"> the <strong style="user-select: auto;">earliest</strong> hour at which the shop must be closed to incur a <strong style="user-select: auto;">minimum</strong> penalty.</em></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note</strong> that if a shop closes at the <code style="user-select: auto;">j<sup style="user-select: auto;">th</sup></code> hour, it means the shop is closed at the hour <code style="user-select: auto;">j</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> customers = "YYNY"
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> 
- Closing the shop at the 0<sup style="user-select: auto;">th</sup> hour incurs in 1+1+0+1 = 3 penalty.
- Closing the shop at the 1<sup style="user-select: auto;">st</sup> hour incurs in 0+1+0+1 = 2 penalty.
- Closing the shop at the 2<sup style="user-select: auto;">nd</sup> hour incurs in 0+0+0+1 = 1 penalty.
- Closing the shop at the 3<sup style="user-select: auto;">rd</sup> hour incurs in 0+0+1+1 = 2 penalty.
- Closing the shop at the 4<sup style="user-select: auto;">th</sup> hour incurs in 0+0+1+0 = 1 penalty.
Closing the shop at 2<sup style="user-select: auto;">nd</sup> or 4<sup style="user-select: auto;">th</sup> hour gives a minimum penalty. Since 2 is earlier, the optimal closing time is 2.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> customers = "NNNNN"
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> It is best to close the shop at the 0<sup style="user-select: auto;">th</sup> hour as no customers arrive.</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> customers = "YYYY"
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> It is best to close the shop at the 4<sup style="user-select: auto;">th</sup> hour as customers arrive at each hour.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= customers.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">customers</code> consists only of characters <code style="user-select: auto;">'Y'</code> and <code style="user-select: auto;">'N'</code>.</li>
</ul>
</div>