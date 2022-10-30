<h2><a href="https://leetcode.com/problems/fraction-to-recurring-decimal/">166. Fraction to Recurring Decimal</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given two integers representing the <code style="user-select: auto;">numerator</code> and <code style="user-select: auto;">denominator</code> of a fraction, return <em style="user-select: auto;">the fraction in string format</em>.</p>

<p style="user-select: auto;">If the fractional part is repeating, enclose the repeating part in parentheses.</p>

<p style="user-select: auto;">If multiple answers are possible, return <strong style="user-select: auto;">any of them</strong>.</p>

<p style="user-select: auto;">It is <strong style="user-select: auto;">guaranteed</strong> that the length of the answer string is less than <code style="user-select: auto;">10<sup style="user-select: auto;">4</sup></code> for all the given inputs.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> numerator = 1, denominator = 2
<strong style="user-select: auto;">Output:</strong> "0.5"
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> numerator = 2, denominator = 1
<strong style="user-select: auto;">Output:</strong> "2"
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> numerator = 4, denominator = 333
<strong style="user-select: auto;">Output:</strong> "0.(012)"
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">-2<sup style="user-select: auto;">31</sup> &lt;=&nbsp;numerator, denominator &lt;= 2<sup style="user-select: auto;">31</sup> - 1</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">denominator != 0</code></li>
</ul>
</div>