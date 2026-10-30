# Prompt: Generate a Complete README.md for a 1337 School Project

Act as an experienced software engineer, technical mentor, and 1337 School student who understands the 42/1337 learning methodology, project evaluation requirements, and peer-learning approach.

I will provide you with the **official subject of a 1337 project** (PDF, text file, or other document).

Your task is to analyze the subject carefully and generate a complete, detailed, and beginner-friendly `README.md` that helps me understand the project theoretically and implement it step by step.

The README must serve as both a **learning course and a practical implementation guide**, not merely a short project description.

## 1. Analyze the official subject first

Before writing the README:

- Read the entire official subject.
- Identify the project objectives and expected learning outcomes.
- Extract every mandatory requirement, constraint, allowed function, forbidden function, and deliverable.
- Identify the required files, functions, structures, algorithms, compilation rules, and edge cases.
- Identify any subject-specific restrictions or 1337 evaluation requirements.
- Distinguish mandatory requirements from optional improvements.
- Do not invent requirements that are not present in the subject.
- If a requirement is ambiguous or missing, explicitly mention it instead of making assumptions.

Use the official subject as the primary source of truth.

## 2. Introduction and project overview

Start the README with:

- Project name.
- A clear explanation of what the project is about.
- The main objective.
- Why this project is useful for learning programming and computer science.
- The main concepts and skills I will learn.
- A summary of what I am expected to build.
- The project's general workflow.

Explain everything as if I am a student who wants to understand the concepts deeply rather than simply copy code.

## 3. Theoretical foundations

Create a detailed theory section covering every important concept required to complete the project.

For each concept, explain:

1. What it is.
2. Why it exists.
3. What problem it solves.
4. How it works internally, at a low level where relevant.
5. How it relates to the project.
6. A simple example.
7. Common mistakes and misconceptions.
8. Important edge cases.
9. Questions I should be able to answer during a peer evaluation or oral defense.

Start with the fundamentals and gradually introduce more advanced concepts.

If the project involves C programming, for example, explain relevant concepts such as pointers, memory layout, stack versus heap, dynamic memory allocation, strings, linked lists, data structures, algorithms, compilation, linking, or system calls whenever they are relevant to the actual subject.

Do not include unrelated theory just to make the README longer.

## 4. Step-by-step implementation guide

Divide the implementation into logical phases, from the simplest foundations to the completed project.

For each phase, include:

- **Objective:** What I need to achieve.
- **Theory:** The concepts I need to understand first.
- **Implementation:** What I should do and in what order.
- **Code examples:** Small, focused examples when useful.
- **Explanation:** Explain the code line by line when the logic is difficult.
- **Expected result:** What should work after completing this phase.
- **Testing:** How to verify that the phase works.
- **Common errors:** Mistakes and debugging techniques.
- **Checkpoint:** A list of conditions to satisfy before moving to the next phase.

Never skip important intermediate steps.

Explain not only what to write, but also why that approach is appropriate.

## 5. Project structure and file organization

Propose a clean project directory structure consistent with the official subject.

Explain:

- The purpose of every required file and directory.
- How the files interact with each other.
- Where functions, headers, source files, scripts, tests, and documentation belong.
- Which files are mandatory and which are optional.
- How to organize the code while respecting the project's constraints.

Do not introduce unnecessary files or technologies that violate the subject.

## 6. Important functions, algorithms, and data structures

For every major function, algorithm, or data structure required by the subject, explain:

- Its responsibility.
- Its inputs and outputs.
- Its execution flow.
- Its preconditions and postconditions.
- Its memory and resource requirements.
- Its time and space complexity when relevant.
- Its edge cases.
- How to test it independently.
- How it interacts with other parts of the project.

Use pseudocode, diagrams, or small examples when they improve understanding.

If the subject requires specific function prototypes or interfaces, preserve them exactly.

## 7. Compilation and execution

Provide the exact commands needed to build and run the project, based on the official subject.

Explain each command and its options.

Include, when relevant:

- Compiler flags.
- Makefile rules.
- Header dependencies.
- Object files and linking.
- Static or dynamic libraries.
- Execution commands.
- Cleaning and rebuilding.
- Debugging commands.
- Sanitizers or memory-checking tools, if permitted and appropriate.

Never claim that a command is required by the subject if it is merely a recommendation.

## 8. Testing and debugging strategy

Create a comprehensive testing section containing:

- Basic tests.
- Normal use cases.
- Boundary cases.
- Invalid inputs.
- Empty or null inputs, where applicable.
- Memory-related tests, where applicable.
- Error-handling tests.
- Tests for interactions between components.
- Compilation checks and code-quality checks.

For each important test, explain what it verifies and what result is expected.

Include practical debugging methods and explain how to interpret common errors.

Clearly distinguish official evaluation requirements from additional tests that I should perform for confidence.

## 9. 1337 evaluation and defense preparation

Create a dedicated section to help me prepare for project evaluation and peer defense.

Include:

- A checklist based strictly on the official subject.
- Common implementation mistakes.
- Questions a peer evaluator might ask.
- Detailed answers explaining the underlying concepts.
- Questions that test whether I understand my own implementation.
- Small exercises to verify my understanding.
- Requirements that are easy to overlook.
- A final self-evaluation checklist.

Do not invent an official grading rubric. Label any additional suggested checks as recommendations.

## 10. Troubleshooting

Create a troubleshooting table with these columns:

| Problem | Possible cause | How to diagnose it | How to fix it |

Include realistic problems related to the actual project, compilation, execution, memory, algorithms, and testing.

## 11. Learning resources

Recommend reliable learning resources that directly match the project's concepts.

Prioritize:
- High-quality YouTube tutorials.
- Official documentation.
- Well-written technical articles.
- Practical exercises.

For each resource, explain what I should learn from it and which README section it supports.

Verify URLs when possible. Never invent links, titles, or sources. Clearly distinguish verified resources from suggested search terms.

## 12. README formatting requirements

Generate the final result as a valid Markdown file named `README.md`.

Use:

- A clear title and table of contents.
- Proper Markdown headings.
- Tables for comparisons and test cases.
- Fenced code blocks with appropriate language identifiers.
- Bullet lists and numbered procedures.
- Mermaid diagrams when they genuinely help explain architecture, algorithms, or execution flow.
- Warnings for important restrictions.
- Checklists for implementation progress and evaluation preparation.

Keep the explanations detailed, technically accurate, organized, and easy to navigate.

Write in clear English. Define technical terms before relying on them. Use simple examples to explain difficult ideas.

Avoid vague explanations, unexplained jargon, unnecessary repetition, and giant code dumps.

## 13. Academic integrity and learning approach

The goal is to help me understand the project well enough to implement, explain, debug, and defend it myself.

Do not encourage me to blindly copy an implementation.

Prefer explaining the reasoning behind an approach, showing small illustrative examples, and progressively building up the solution.

Respect all restrictions in the official subject, including allowed functions, forbidden functions, coding standards, and any restrictions on external libraries.

If complete reference code is not necessary, focus on pseudocode, small examples, and implementation guidance.

## 14. Final verification

Before delivering the README, verify that:

- Every important requirement from the subject has been addressed.
- The theoretical explanations match the actual project.
- The implementation steps follow a logical order.
- Commands and examples are consistent with the stated constraints.
- No mandatory requirement has been silently omitted.
- Any assumptions or uncertainties are clearly identified.
- The evaluation checklist is traceable to the official subject.
- The document is valid Markdown and can be saved directly as `README.md`.

If you can create files, create the actual `README.md` file. Otherwise, provide the complete Markdown content in your response.

**Important:** Do not start by writing a generic README. Analyze the provided official subject first, then tailor every section to the specific project.