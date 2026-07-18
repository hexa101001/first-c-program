
# 💔 DO YOU LOVE ME? - My First C Program

[![Made with C](https://img.shields.io/badge/Made%20with-C-blue.svg)](https://gcc.gnu.org/)
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](https://opensource.org/licenses/MIT)
[![Status](https://img.shields.io/badge/Status-Learning%20Phase-yellow.svg)](https://github.com/hexa/do-you-love-me)
[![Fun](https://img.shields.io/badge/Fun-100%25-red.svg)](https://github.com/hexa/do-you-love-me)

**🌐 Portfolio**: [hexa.sec](https://your-portfolio-link.com) 

## 🎯 About This Project

**This is my FIRST ORIGINAL C PROGRAM!** 

I didn't copy any code - I thought about it, planned it, and wrote it all by myself. I'm learning C programming as my foundation for **Ethical Hacking**.

When I started learning, I promised myself: **"I will understand every line of code I write"** - and I do!

> ⭐ **No copy-paste. No Stack Overflow copy. 100% Original!** ⭐

---

## ✨ What Does It Do?

This is an interactive console program that:
1. 💬 Asks: **"DO YOU LOVE ME?"**
2. ❤️ If you say **YES**: Shows love and affection
3. 💣 If you say **NO**: Triggers a hilarious "bomb attack" sequence
4. 🔄 Shows a cool spinner animation while "searching"

### 🎮 Game Flow

START
↓
❓ "DO YOU LOVE ME?"
↓
├── YES ❤️ → "Love you too baby" → END
│
└── NO 💔 → Threats → Countdown → 💥 EXPLOSION → Spinner → END
text


---

## 🚀 How to Run

### Prerequisites
- **GCC Compiler** (or any C compiler)
- **Linux/Unix/Mac** (or Windows with WSL/Cygwin)

### Installation & Execution

```bash
# 1. Clone the repository
git clone https://github.com/hexa/do-you-love-me.git

# 2. Navigate to the directory
cd do-you-love-me

# 3. Compile the program
gcc love.c -o love

# 4. Run it!
./love

Quick Run (One-Liner)
bash

gcc love.c -o love && ./love

📸 Demo / Output
Scenario 1: You Say "YES" ❤️
text

DO YOU LOVE ME?
(Y/N): y
O really baby do you love me
love you to baby

Scenario 2: You Say "NO" 💣
text

DO YOU LOVE ME?
(Y/N): N
Fuck you witch
YOU GONNA DIE BABY  ]:)
ALLAH HU AKBAR 10💣 9💣 8💣 7💣 6💣 5💣 4💣 3💣 2💣 1💣
BOOOOOOOOOOM💥
Checking if she is alive
Searching / [SPINNING] 
ALL CLEAR

🧠 What I Learned While Making This
Concept	How I Used It
Arrays	Stored spinner characters: {'|','/','-','\\'}
Loops	Countdown from 10 to 1, spinner animation 20 times
Conditionals	if/else for Yes/No responses
System Calls	sleep(), fflush(), usleep() for timing
Console Manipulation	\r carriage return for spinner animation
User Input	scanf() for reading answers
Output Buffering	fflush(stdout) for real-time display
Key Code Snippets
The Spinner Animation
c

char spinner[] = {'|', '/', '-', '\\'};
for (int i = 0; i < 20; i++) {
    printf("\rSearching %c", spinner[i % 4]);
    fflush(stdout);
    usleep(200000);  // 0.2 seconds
}

The Countdown
c

for (int i = 10; i >= 1; i--) {
    printf("\r%d💣", i);
    fflush(stdout);
    sleep(1);
}

🐛 Known Issues & Future Fixes
Issues to Fix

    scanf buffer issue: Newline from Enter key stays in buffer

        Fix: Use " %c" instead of "%c"

    Typo: "aline" should be "alive"

    Case sensitivity: Only handles 'Y' and 'y' - should also handle 'N' and 'n'

Planned Improvements

    Add more options: "Maybe", "IDK", "It's complicated"

    Add ASCII art for explosion

    Add input timeout (if no answer in 10 seconds)

    Make it a full game with multiple levels

    Add sound effects (using system beep)

    Convert to a proper C function library

📚 My Learning Path

This is where I started. Here's my complete roadmap:
text

📖 Stage 1: C Fundamentals ⬅️ YOU ARE HERE
   ├── Variables, loops, arrays
   ├── Functions, pointers
   └── File I/O, system calls

📖 Stage 2: System Programming
   ├── Process management (fork, exec)
   ├── Inter-process communication
   └── Socket programming

📖 Stage 3: Networking
   ├── TCP/IP fundamentals
   ├── Packet crafting
   └── Network scanning

📖 Stage 4: Ethical Hacking
   ├── Vulnerability assessment
   ├── Exploit development
   ├── Penetration testing
   └── CTF challenges

🎯 **Goal**: Become a Certified Ethical Hacker (CEH)

🛠️ Technologies Used

    Language: C (C99 standard)

    Compiler: GCC

    Libraries: stdio.h, unistd.h

    Platform: Linux/Unix (Kali Linux recommended)

    Version Control: Git & GitHub

🔧 How to Contribute

Want to make this better? Here's how:

    🍴 Fork this repository

    🔧 Create a new branch: git checkout -b my-improvement

    💻 Make your changes

    📝 Commit changes: git commit -m "Description of changes"

    📤 Push to GitHub: git push origin my-improvement

    🔀 Open a Pull Request

Good First Issues:

    Fix the scanf buffer issue

    Add ASCII art

    Improve error handling

    Add more responses

🎨 How to Make It EVEN COOLER
Add ASCII Art
c

printf("""
   💥💥💥
  💥💥💥💥💥
 💥💥💥💥💥💥💥
  💥💥💥💥💥
   💥💥💥
    💥
""");

Add Color
c

// Red
printf("\033[1;31mBOOOOOOOOM💥\033[0m\n");
// Green
printf("\033[1;32mALL CLEAR\033[0m\n");

Add Multiple Responses
c

if (ans == 'Y' || ans == 'y') {
    // Random love message
    char *messages[] = {
        "I love you too! ❤️",
        "You made my day! 😊",
        "Forever together! 💑"
    };
    printf("%s\n", messages[rand() % 3]);
}

⚠️ Disclaimer

This program is a JOKE/PARODY made for educational and entertainment purposes.

    The "Allahu Akbar" phrase is used humorously as an internet meme

    No religious offense is intended

    No actual threats or violence are implied

    This is purely for learning C programming

Please use responsibly and with respect for all cultures and religions.
🤝 Connect With Me

    GitHub: hexa

    Twitter/X: @hexa_hacker

    Email: hexa@protonmail.com

Learning Resources I Use:

    📖 "Hacking: The Art of Exploitation" - Jon Erickson

    🎓 pwn.college

    🏴‍☠️ HackTheBox

    💻 OverTheWire

⭐ Support the Project

If you laughed, learned something, or just want to support a beginner developer:

    ⭐ Star this repository

    🐛 Report bugs

    📤 Share with others

    💬 Give feedback

📜 License

This project is open source and available under the MIT License.
text

MIT License

Copyright (c) 2026 Hexa

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

🏆 Acknowledgments

    My Future Self: For starting this journey

    The C Programming Language: For being powerful and beautiful

    All the hackers: Who inspired me to learn

    You: For checking out my first project! 🙏

📊 Project Stats
Metric	Value
Lines of Code	~50
Development Time	1 day
Bugs Found	2
Bugs Fixed	0 (still learning!)
Fun Level	100%
Learning Value	Priceless
🔄 Version History
v1.0.0 (Initial Release) - 2026

    ✅ Basic love/hate functionality

    ✅ Spinner animation

    ✅ Countdown timer

    ✅ Interactive input

    🐛 Known scanf bug

    🐛 Typo: "aline"

💡 Tips for Running on Different OS
Windows (with MinGW)
cmd

gcc love.c -o love.exe
love.exe

Windows (without GCC)

Use WSL or Cygwin
macOS
bash

gcc love.c -o love
./love

🎯 Why This Project Matters (To Me)

This isn't just a joke program. This is:

    ✅ Proof that I can think like a programmer

    ✅ Evidence that I create not copy

    ✅ The beginning of my hacking journey

    ✅ A milestone in my learning path

    ✅ Something I'm proud of

    "Every expert was once a beginner. This is my beginning."

❓ FAQ

Q: Is this a serious program?
A: No! It's a joke/learning project.

Q: Can I use this in my portfolio?
A: For learning purposes, yes! Shows you can write original code.

Q: Why "Allahu Akbar"?
A: It's used humorously as a meme. No offense intended.

Q: Will this actually hack anything?
A: No! It's just a fun C program.

Q: Can I copy this code?
A: Sure! But I encourage you to write your OWN programs too!
🌟 Final Thoughts

This is my first step into the world of programming and ethical hacking. I know the code isn't perfect, but it's MINE. I wrote every line, understood every concept, and had fun doing it.

If I can do this, SO CAN YOU!

Start small. Think big. Never stop learning.

Made with ❤️, 💻, and lots of coffee

"The best way to learn is to build."

⭐ Star this repo if you believe in beginner programmers! ⭐
