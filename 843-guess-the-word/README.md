<h2><a href="https://leetcode.com/problems/guess-the-word/">843. Guess the Word</a></h2><h3>Hard</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an array of unique strings <code style="user-select: auto;">words</code> where <code style="user-select: auto;">words[i]</code> is six letters long. One word of <code style="user-select: auto;">words</code> was chosen as a secret word.</p>

<p style="user-select: auto;">You are also given the helper object <code style="user-select: auto;">Master</code>. You may call <code style="user-select: auto;">Master.guess(word)</code> where <code style="user-select: auto;">word</code> is a six-letter-long string, and it must be from <code style="user-select: auto;">words</code>. <code style="user-select: auto;">Master.guess(word)</code> returns:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">-1</code> if <code style="user-select: auto;">word</code> is not from <code style="user-select: auto;">words</code>, or</li>
	<li style="user-select: auto;">an integer representing the number of exact matches (value and position) of your guess to the secret word.</li>
</ul>

<p style="user-select: auto;">There is a parameter <code style="user-select: auto;">allowedGuesses</code> for each test case where <code style="user-select: auto;">allowedGuesses</code> is the maximum number of times you can call <code style="user-select: auto;">Master.guess(word)</code>.</p>

<p style="user-select: auto;">For each test case, you should call <code style="user-select: auto;">Master.guess</code> with the secret word without exceeding the maximum number of allowed guesses. You will get:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><strong style="user-select: auto;"><code style="user-select: auto;">"Either you took too many guesses, or you did not find the secret word."</code></strong> if you called <code style="user-select: auto;">Master.guess</code> more than <code style="user-select: auto;">allowedGuesses</code> times or if you did not call <code style="user-select: auto;">Master.guess</code> with the secret word, or</li>
	<li style="user-select: auto;"><strong style="user-select: auto;"><code style="user-select: auto;">"You guessed the secret word correctly."</code></strong> if you called <code style="user-select: auto;">Master.guess</code> with the secret word with the number of calls to <code style="user-select: auto;">Master.guess</code> less than or equal to <code style="user-select: auto;">allowedGuesses</code>.</li>
</ul>

<p style="user-select: auto;">The test cases are generated such that you can guess the secret word with a reasonable strategy (other than using the bruteforce method).</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> secret = "acckzz", words = ["acckzz","ccbazz","eiowzz","abcczz"], allowedGuesses = 10
<strong style="user-select: auto;">Output:</strong> You guessed the secret word correctly.
<strong style="user-select: auto;">Explanation:</strong>
master.guess("aaaaaa") returns -1, because "aaaaaa" is not in wordlist.
master.guess("acckzz") returns 6, because "acckzz" is secret and has all 6 matches.
master.guess("ccbazz") returns 3, because "ccbazz" has 3 matches.
master.guess("eiowzz") returns 2, because "eiowzz" has 2 matches.
master.guess("abcczz") returns 4, because "abcczz" has 4 matches.
We made 5 calls to master.guess, and one of them was the secret, so we pass the test case.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> secret = "hamada", words = ["hamada","khaled"], allowedGuesses = 10
<strong style="user-select: auto;">Output:</strong> You guessed the secret word correctly.
<strong style="user-select: auto;">Explanation:</strong> Since there are two words, you can guess both.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= words.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">words[i].length == 6</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">words[i]</code> consist of lowercase English letters.</li>
	<li style="user-select: auto;">All the strings of <code style="user-select: auto;">wordlist</code> are <strong style="user-select: auto;">unique</strong>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">secret</code> exists in <code style="user-select: auto;">words</code>.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">10 &lt;= allowedGuesses &lt;= 30</code></li>
</ul>
</div>