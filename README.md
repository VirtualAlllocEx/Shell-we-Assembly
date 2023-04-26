# Shell-we-Assembly? Unleashing Assembly for Shellcode Execution
Shellcode execution via x86 inline assembly based on MSVC syntax

With this repository I share my experiences in rewriting a high level API shellcode dropper based on Windows APIs from C++ to x86 inline assembly based on MSVC syntax.
More details in my related blog post https://redops.at/en/blog/shell-we-assemble-unleashing-x86-inline-assembly-for-shellcode-execution

# **Disclaimer**
The content and all code examples in this article are for research purposes only and must not be used in an unethical context! The code used in the form of x86 inline assembly is not novel and I make no claim to it. Most of the code comes, as so often, from **ired.team, thank you @spotheplanet for your brilliant work and sharing it with us all!**

The purpose of this blog post is not to evaluate whether there is any benefit to using x86 inline assembly in the context of EDR evasion. Rather, it is about understanding the basics of x86 inline assembly in the context of shellcode execution.

# **References**
- https://learn.microsoft.com/en-us/cpp/assembler/masm/microsoft-macro-assembler-reference?view=msvc-170
- https://learn.microsoft.com/en-us/cpp/assembler/inline/inline-assembler-overview?view=msvc-170
- https://www.ired.team/offensive-security/code-injection-process-injection/process-injection
- https://learn.microsoft.com/en-us/windows/win32/api/memoryapi/nf-memoryapi-virtualalloc
- https://learn.microsoft.com/de-de/cpp/c-runtime-library/reference/memcpy-wmemcpy?view=msvc-170
- https://learn.microsoft.com/en-us/cpp/cpp/stdcall?view=msvc-170
- http://flint.cs.yale.edu/cs421/papers/x86-asm/asm.html
- https://cs.lmu.edu/~ray/notes/nasmtutorial/
- https://en.wikibooks.org/wiki/X86_Assembly
- https://en.wikipedia.org/wiki/Assembly_language
- https://www.youtube.com/playlist?list=PLmxT2pVYo5LB5EzTPZGfFN0c2GDiSXgQe
- https://www.cs.virginia.edu/~evans/cs216/guides/x86.html
- Kip; Irvine. Assembly Language for x86 Processors 8th Edition, Pearson, 2020
