<h2><a href="https://leetcode.com/problems/substring-with-concatenation-of-all-words/">30. Substring with Concatenation of All Words</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a string <code style="user-select: auto;">s</code> and an array of strings <code style="user-select: auto;">words</code>. All the strings of <code style="user-select: auto;">words</code> are of <strong style="user-select: auto;">the same length</strong>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">concatenated substring</strong> in <code style="user-select: auto;">s</code> is a substring that contains all the strings of any permutation of <code style="user-select: auto;">words</code> concatenated.</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">For example, if <code style="user-select: auto;">words = ["ab","cd","ef"]</code>, then <code style="user-select: auto;">"abcdef"</code>, <code style="user-select: auto;">"abefcd"</code>, <code style="user-select: auto;">"cdabef"</code>, <code style="user-select: auto;">"cdefab"</code>, <code style="user-select: auto;">"efabcd"</code>, and <code style="user-select: auto;">"efcdab"</code> are all concatenated strings. <code style="user-select: auto;">"acdbef"</code> is not a concatenated substring because it is not the concatenation of any permutation of <code style="user-select: auto;">words</code>.</li>
</ul>

<p style="user-select: auto;">Return <em style="user-select: auto;">the starting indices of all the concatenated substrings in </em><code style="user-select: auto;">s</code>. You can return the answer in <strong style="user-select: auto;">any order</strong>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "barfoothefoobarman", words = ["foo","bar"]
<strong style="user-select: auto;">Output:</strong> [0,9]
<strong style="user-select: auto;">Explanation:</strong> Since words.length == 2 and words[i].length == 3, the concatenated substring has to be of length 6.
The substring starting at 0 is "barfoo". It is the concatenation of ["bar","foo"] which is a permutation of words.
The substring starting at 9 is "foobar". It is the concatenation of ["foo","bar"] which is a permutation of words.
The output order does not matter. Returning [9,0] is fine too.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "wordgoodgoodgoodbestword", words = ["word","good","best","word"]
<strong style="user-select: auto;">Output:</strong> []
<strong style="user-select: auto;">Explanation:</strong> Since words.length == 4 and words[i].length == 4, the concatenated substring has to be of length 16.
There is no substring of length 16 is s that is equal to the concatenation of any permutation of words.
We return an empty array.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "barfoofoobarthefoobarman", words = ["bar","foo","the"]
<strong style="user-select: auto;">Output:</strong> [6,9,12]
<strong style="user-select: auto;">Explanation:</strong> Since words.length == 3 and words[i].length == 3, the concatenated substring has to be of length 9.
The substring starting at 6 is "foobarthe". It is the concatenation of ["foo","bar","the"] which is a permutation of words.
The substring starting at 9 is "barthefoo". It is the concatenation of ["bar","the","foo"] which is a permutation of words.
The substring starting at 12 is "thefoobar". It is the concatenation of ["the","foo","bar"] which is a permutation of words.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words.length &lt;= 5000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words[i].length &lt;= 30</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> and <code style="user-select: auto;">words[i]</code> consist of lowercase English letters.</li>
</ul>
</div>